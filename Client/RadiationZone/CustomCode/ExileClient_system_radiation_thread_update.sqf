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


private["_markerPos", "_markerDist1", "_markerDist2", "_distance", "_damage"];
ExilePlayerRadiationLastCheck = ExilePlayerRadiation;
ExilePlayerRadiation = 0;


if (getText(missionConfigFile >> "Header" >> "gameType") isEqualTo "Escape") then 
{
	_markerPos = getMarkerPos "ExilePlayArea";
	_markerDist1 = ((getMarkerSize "ExilePlayArea") select 0) * 1.25;
	_markerDist2 = ((getMarkerSize "ExilePlayArea") select 0);
	_distance = _markerPos distance2D (getPosASL player);
	if (_distance > _markerDist2) exitWith
	{
		ExilePlayerRadiation = 1 - ((_distance - _markerDist1) / (_markerDist2 - _markerDist1));
		if (ExilePlayerRadiation > 0.7) then 
		{
			playSound [format ["Exile_Sound_GeigerCounter_High0%1", 1 + (floor random 3)], true];
			_damage = 1/(2*60) * 2;
		}
		else 
		{
			if (ExilePlayerRadiation > 0.3) then 
			{
				playSound [format ["Exile_Sound_GeigerCounter_Medium0%1", 1 + (floor random 3)], true];
				_damage = 1/(2*60) * 2;
			}
			else 
			{
				playSound [format ["Exile_Sound_GeigerCounter_Low0%1", 1 + (floor random 3)], true];
				_damage = 1/(2*60) * 2;
			};
		};
		_damage = (player getVariable [QGVAR(bloodVolume), 100]) - _damage;
		player setVariable [QGVAR(bloodVolume), _damage];
	};
} 
else
{
	{
		private _radiationMaskFactor = 1;
		private _radiationSuitFactor = 1;
		{
		if (_x in (assignedItems player)) then {
			_radiationMaskFactor = 0.50 };
		} forEach [
			"skn_m04_gas_mask_bare_dry",
			"skn_m04_gas_mask_bare_blk",
			"skn_m04_gas_mask_blu",
			"skn_m04_gas_mask_gre"
		];
		
		{
		if (_x in (assignedItems player)) then {
			_radiationMaskFactor = 0.25 };
		} forEach [
			"skn_m50_gas_mask_hood",
			"skn_m50_gas_mask_hood_wd"
		];
		
		{
		if (_x in (assignedItems player)) then {
			_radiationMaskFactor = 0.1 };
		} forEach [
			"skn_m10_balaclava_blue_dry",
			"skn_m10_balaclava_red_dry",
			"skn_m10_balaclava_white_dry",
			"skn_m10_balaclava_yellow_dry"
		];		
		
		
		{
		if (_x in (assignedItems player)) then {
			_radiationSuitFactor = 0.50 };
		} forEach [
			"skn_u_nbc_indep_blk"
		];
		
		{
		if (_x in (assignedItems player)) then {
			_radiationSuitFactor = 0.25 };
		} forEach [
			"skn_u_nbc_bluf_mtp",
			"skn_u_nbc_bluf_wd"
		];
		
		{
		if (_x in (assignedItems player)) then {
			_radiationSuitFactor = 0.1 };
		} forEach [
			"skn_u_nbc_opf_red",
			"skn_u_nbc_opf_white",
			"skn_u_nbc_opf_yellow"
		];

		_distance = (_x select 0) distance (getPosATL player);
		if (_distance < (_x select 2)) exitWith
		{
			ExilePlayerRadiation = (2000 - (.000125 * _distance^2)) * (_radiationMaskFactor * _radiationSuitFactor); 
			
			if (ExilePlayerRadiation > 700) then 
			{
				playSound [format ["Exile_Sound_GeigerCounter_High0%1", 1 + (floor random 3)], true];
			}
			else 
			{
				if (ExilePlayerRadiation > 350) then 
				{
					playSound [format ["Exile_Sound_GeigerCounter_Medium0%1", 1 + (floor random 3)], true];
				}
				else 
				{
					playSound [format ["Exile_Sound_GeigerCounter_Low0%1", 1 + (floor random 3)], true];
				};
			};
			_damage = (player getVariable [QGVAR(bloodVolume), 100]) - (ExilePlayerRadiation * 0.00044);
			player setVariable [QGVAR(bloodVolume), _damage];
		};			
	} forEach ExileContaminatedZones;
}; 	



if !(ExilePlayerRadiation isEqualTo ExilePlayerRadiationLastCheck) then 
{
	ExilePostProcessing_RadiationColor ppEffectAdjust 
	[
		1,
		linearConversion [0, 1, (ExilePlayerRadiation*.00022), 1, 0.45],
		linearConversion [0, 1, (ExilePlayerRadiation*.00022), 0, -0.05],
		[0,0,0,0],
		[1.5,1.3,1,1 - (ExilePlayerRadiation*.00022)],
		[0.8,0.5,0.9,0],
		[0,0,0,0,0,0,4]
	];
	ExilePostProcessing_RadiationColor ppEffectCommit 2;
	ExilePostProcessing_RadiationChroma ppEffectAdjust [0.02 * (ExilePlayerRadiation*.00022),0.02 * (ExilePlayerRadiation*.00022),true];
	ExilePostProcessing_RadiationChroma ppEffectCommit 2;		
	ExilePostProcessing_RadiationFilm ppEffectAdjust [ExilePlayerRadiation,8.39,8,0.9,0.9,true];
	ExilePostProcessing_RadiationFilm ppEffectCommit 2;
};
