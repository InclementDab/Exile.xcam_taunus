/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params["_zombie"];

SM_CurrentZombiesSpawned = SM_CurrentZombiesSpawned - [netID _zombie];
SM_CurrentZombieCount = SM_CurrentZombieCount - 1;

if (SM_CurrentZombieCount != (count SM_CurrentZombiesSpawned)) then
{
	private _count = 0;
	{
		private _zombie = objectFromNetId _x;
		if (!isNull _zombie && {alive _zombie}) then
		{
			_count = _count + 1;
		};
	} forEach SM_CurrentZombiesSpawned;
	SM_CurrentZombieCount = _count;
};

if ((owner _zombie) == 2) exitWith { true };

private _doTheDo =
{
	private _targetData = _owner getVariable ["SM_CurrentZombies", [0, []]];
	_targetData params ["_count","_array"];
	_count = _count - 1;
	_array = _array - [(netId _zombie)];
	if (_count != (count _array)) then
	{
		_count = 0;
		{
			private _zombie = objectFromNetId _x;
			if (!isNull _zombie && {alive _zombie}) then
			{
				_count = _count + 1;
			};
		} forEach _zombieArray;
	};
	_owner setVariable ["SM_CurrentZombies", [_count, _array]];
};

private _dotheDo2 = 
{
	private _owner = [_zombie] call SM_GetZombieOwner;
	if (isNull _owner) exitWith { false };
	call _doTheDo;
	true
};

private _ownerID = _zombie getVariable ["SM_ZombieOwner", ""];
if (_ownerID == "") exitWith _dotheDo2;

private _owner = objectFromNetId _ownerID;
if (isNull _owner) exitWith _dotheDo2;

call _doTheDo;

true