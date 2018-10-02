/**
 * ExileClient_system_radiation_thread_update
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

#include "\z\ace\addons\medical\script_component.hpp";


private["_markerPos", "_markerDist1", "_markerDist2", "_distance", "_damage", "_radiationMaskFactor", "_radiationSuitFactor"];
ExilePlayerRadiationLastCheck = ExilePlayerRadiation;
ExilePlayerRadiation = 0;


if (getText(missionConfigFile >> "Header" >> "gameType") isEqualTo "Survive") then
{
	_distance = player distance2d (getMarkerPos "radiationZone");
	if (_distance < 4000) exitWith
	{
		_radiationMaskFactor = 1;
		_radiationSuitFactor = 1;
		{ 
			if (_x == (goggles player)) then { _radiationMaskFactor = 0.5 };
		} forEach [
			"skn_m04_gas_mask_bare_dry",
			"skn_m04_gas_mask_bare_blk",
			"skn_m04_gas_mask_blu",
			"skn_m04_gas_mask_gre"
		];

		{ 
			if (_x == (goggles player)) then { _radiationMaskFactor = 0.25 };
		} forEach [
			"skn_m50_gas_mask_hood",
			"skn_m50_gas_mask_hood_wd"
		];

		{ 
			if (_x == (goggles player)) then { _radiationMaskFactor = 0.05 };
		} forEach [
			"skn_m10_balaclava_blue_dry",
			"skn_m10_balaclava_red_dry",
			"skn_m10_balaclava_white_dry",
			"skn_m10_balaclava_yellow_dry"
		];

		{ 
			if (_x == (uniform player)) then { _radiationSuitFactor = 0.5 };
		} forEach [
			"skn_u_nbc_indep_blk" 
		];

		{ 
			if (_x == (uniform player)) then { _radiationSuitFactor = 0.25 };
		} forEach [
			"skn_u_nbc_bluf_mtp",
			"skn_u_nbc_bluf_wd"
		];

		{ 
			if (_x == (uniform player)) then { _radiationSuitFactor = 0.05 };
		} forEach [
			"skn_u_nbc_opf_red",
			"skn_u_nbc_opf_white",
			"skn_u_nbc_opf_yellow"
		];
		
		ExilePlayerRadiation = (3000 - (.00020371 * (_distance^1.99))) * (_radiationMaskFactor * _radiationSuitFactor);
		if (ExilePlayerRadiation < 0) then {ExilePlayerRadiation = 0};
		if (ExilePlayerRadiation > 700) then
		{
			playSound [format ["Exile_Sound_GeigerCounter_High0%1", 1 + (floor random 3)], true];
			//playSound "SndExileHeartbeatFast";
		}
		else
		{
			if (ExilePlayerRadiation > 350) then
			{
				playSound [format ["Exile_Sound_GeigerCounter_Medium0%1", 1 + (floor random 3)], true];
				//playSound "SndExileHeartbeatSlow";
			}
			else
			{
				playSound [format ["Exile_Sound_GeigerCounter_Low0%1", 1 + (floor random 3)], true];
			};
		};
		_damage = (player getVariable [QGVAR(bloodVolume), 100]) - (ExilePlayerRadiation * 0.00044);
		player setVariable [QGVAR(bloodVolume), _damage];
		// hint format ["Radiation %1", ExilePlayerRadiation]; debug mode
		
		
		[.55 + (random .12)] spawn {     
			_distance = player distance2d (getMarkerPos "radiationZone");
			_velocity = [floor(random 5), floor(random 5), (random 2) + (5-(.1*_distance^2))];
			_color = [1, 1, 1];
			
			_hndl = ppEffectCreate ["colorCorrections", 1501];
			_hndl ppEffectEnable true;
			_hndl ppEffectCommit 0;


			
			_snow = "#particlesource" createVehicleLocal (getpos player); 
			_snow setParticleParams [["\A3\data_f\ParticleEffects\Universal\smoke.p3d", 1,0,1,0],"","billboard",1,25,[0,0,15],[0,0,-0.5],10,0.2,0,0.12,[0.08,0.08],[[1,1,1,0.5],[1,1,1,0.5]],[0,1],0.25,1,"","", player];  
			_snow setParticleRandom [25, [50, 50, 5], [0, 0, 0], 0, 0.01, [0, 0, 0, 0.1], 0.1, 0];  
			_snow setParticleCircle [0.0, [0, 0, 0]]; 
			_snow setDropInterval (_distance/8000);

			
			_delay = 10;
			sleep _delay;
			deleteVehicle _snow;
			deletevehicle _clouds1;
		};
	}; 
};



if !(ExilePlayerRadiation isEqualTo ExilePlayerRadiationLastCheck) then
{
	ExilePostProcessing_RadiationColor ppEffectAdjust
	[
		1,
		linearConversion [0, 1, (ExilePlayerRadiation*.00018), 1, 0.45],
		linearConversion [0, 1, (ExilePlayerRadiation*.00018), 0, -0.05],
		[0,0,0,0],
		[1.5,1.3,1,1 - (ExilePlayerRadiation*.00018)],
		[0.8,0.5,0.9,0],
		[0,0,0,0,0,0,4]
	];
	ExilePostProcessing_RadiationColor ppEffectCommit 2;
	ExilePostProcessing_RadiationChroma ppEffectAdjust 
	[
		0.02 * (ExilePlayerRadiation*.00027),
		0.02 * (ExilePlayerRadiation*.00027),
		true
	];
	ExilePostProcessing_RadiationChroma ppEffectCommit 2;
	ExilePostProcessing_RadiationFilm ppEffectAdjust 
	[
		ExilePlayerRadiation,
		8.39,
		8,
		0.9,
		0.9,
		true
	];
	ExilePostProcessing_RadiationFilm ppEffectCommit 2;

};
