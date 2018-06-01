/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params ["_zombie","_target","_soundLast","_aggressiveArray","_screamArray","_vehicleHitArray","_distance"];

private _vehicle = vehicle _target;

if ((animationState _zombie) isEqualTo "unconscious" || {!(_zombie isKindOf "SM_Zombz_Base")} || {((_zombie distance _vehicle) > _distance)} || {!alive _zombie}) exitWith { _soundLast };

//doStop _zombie;
_zombie setdir (_zombie getDir _vehicle);

if !(_vehicle isKindOf "Man") then
{
	private _damage = random SM_ZombieDamageCar;

	private _count = count ((getAllHitPointsDamage _vehicle) select 0);
	private _index = 0;

	while {_count > _index} do
	{
		if !((((getAllHitPointsDamage _vehicle) select 0) select _index) isEqualTo "HitFuel") then 
		{
			_vehicle setHitIndex [_index, (_vehicle getHitIndex _index) + _damage];
		};
		_index = _index + 1;
	};

	if (((getNumber(configfile >> "CfgVehicles" >> (typeOf _vehicle) >> "armor")) < 90) && {!(canmove _vehicle)}) then
	{
		{
			if ((random 10) < 1) then
			{
				_screamSound = selectRandom _screamArray;
				[_x, _screamSound] remoteExecCall ["SM_Say3D", -2];
			};
			_x setDamage ((damage _x) + (SM_ZombieDamagePlayer / 25));
		} foreach (crew _vehicle);
	};

	private _vehicleHit = selectRandom _vehicleHitArray;
	[_zombie, _vehicleHit] remoteExecCall ["SM_Say3D", -2];

	if (SM_SetVelocityOnHit) then
	{
		private _vel = velocity _vehicle;
		private _dir = direction _zombie;
		[_vehicle, [((_vel select 0) + ((sin _dir) * SM_ZombieDamageCarStrength)), ((_vel select 1) + ((cos _dir) * SM_ZombieDamageCarStrength)), ((_vel select 2) + (random 1))]] call SM_SetVelocity;
	};
}
else
{
	//"Setting damage" call SM_util_log;
	//_target setDamage ((damage _target) + SM_ZombieDamagePlayer);
	//call SM_SetBlur;
	
	_damageLocation = selectRandom ["body", "hand_l", "hand_r", "leg_l", "leg_r"];
	
	[_target, SM_ZombieDamagePlayer, _damageLocation, "Stab"] call ace_medical_fnc_addDamageToUnit;
	

	private _screamSound = selectRandom _screamArray; 
	[_target, _screamSound] remoteExecCall ["SM_Say3D", -2];

	if (SM_SetVelocityOnHit) then
	{
		private _vel = velocity _target;
		private _dir = direction _zombie;
		[_target, [((_vel select 0) + ((sin _dir) * SM_ZombieDamagePlayerStrength)), ((_vel select 1) + ((cos _dir) * SM_ZombieDamagePlayerStrength)), ((_vel select 2) + (random 1))]] call SM_SetVelocity;
	};
	
	/*
	if (SM_BleedingEnabled) then
	{
		private _dice = random 100;
		if (_dice < SM_BleedChance) then
		{
			_target setBleedingRemaining SM_BleedTime;
		};
	};
	*/
	
	/*
	if (SM_Infection && {!(_target getVariable ["SM_InfectionImmune", false])}) then
	{
		private _dice = random 100;
		private _targetInfection = _target getVariable ["SM_InfectionDOT", 0];
		if (_dice < SM_InfectionChance && {!(_targetInfection >= 1)}) then
		{
			_target setVariable ["SM_InfectionDOT", (_targetInfection + random SM_InfectionIncrease), true];
		};
	};
	*/
};

_soundLast
