/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params [["_zombie", objNull],["_zombieDefaultSpeed", 0],"_building","_zombieIsInBuilding","_zombieisFaster"];
_building = nearestBuilding _zombie;
_zombieIsInBuilding = false;
if !(isNull _building) then
{
	private _buildingBox = boundingBoxReal _building;
	private _box0 = _buildingBox select 0;
	private _box1 = _buildingBox select 1;
	_box0 params ["_xm","_ym","_zm"];
	_box1 params ["_xmm","_ymm","_zmm"];
	private _zombiePos = _building worldToModel (ASLToAGL (getPosASL _zombie));
	_zombiePos params ["_zmx","_zmy","_zmz"];
	if (((_zmx > _xm) && {(_zmx < _xmm)}) && {((_zmy > _ym) && {(_zmy < _ymm)})} && {((_zmz > _zm) && {(_zmz < _zmm)})}) then
	{
		_zombieIsInBuilding = true;
		_zombie setAnimSpeedCoef _zombieDefaultSpeed;
		_zombie setAnimSpeedCoef (_zombieDefaultSpeed / SM_ZombieInBuildingSpeedDevidor);
		_zombie setVariable ["SM_WasInBuilding", true, true];
	};
};

if (_zombieIsInBuilding) exitWith { true };
if (_zombie getVariable ["SM_WasInBuilding", false]) then
{
	_zombie setAnimSpeedCoef _zombieDefaultSpeed;
	_zombie setVariable ["SM_zombieIsFaster", false];
	_zombie setVariable ["SM_WasInBuilding", false, true];
};

private _zombieisFaster = _zombie getVariable ["SM_zombieIsFaster", false];
if (SM_ZombiesFastClose) then
{
	if !(isNull _target) then
	{
		if ((_zombie distance2D _target) >= SM_ZombieSpeedDistance) then
		{
			_zombie setAnimSpeedCoef _zombieDefaultSpeed;
			_zombie setVariable ["SM_zombieIsFaster", false];
		}
		else
		{
			if !(_zombieisFaster) then
			{
				_zombie setAnimSpeedCoef (_zombieDefaultSpeed * SM_ZombieSpeedMultiplyer);
				_zombie setVariable ["SM_zombieIsFaster", true];
			};
		};
	}
	else
	{
		if !(_zombieisFaster) then
		{
			_zombie setAnimSpeedCoef (_zombieDefaultSpeed * SM_ZombieSpeedMultiplyer);
			_zombie setVariable ["SM_zombieIsFaster", true];
		};
	};
};
if !(SM_ZombiesFastClose) then
{
	if !(isNull _target) then
	{
		if ((_zombie distance2D _target) <= SM_ZombieSpeedDistance) then
		{
			_zombie setAnimSpeedCoef _zombieDefaultSpeed;
			_zombie setVariable ["SM_zombieIsFaster", false];
		}
		else
		{
			if !(_zombieisFaster) then
			{
				_zombie setAnimSpeedCoef (_zombieDefaultSpeed * SM_ZombieSpeedMultiplyer);
				_zombie setVariable ["SM_zombieIsFaster", true];
			};
		};
	}
	else
	{
		if !(_zombieisFaster) then
		{
			_zombie setAnimSpeedCoef (_zombieDefaultSpeed * SM_ZombieSpeedMultiplyer);
			_zombie setVariable ["SM_zombieIsFaster", true];
		};
	};
};

true
