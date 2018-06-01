/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

{
	private _zombie = objectFromNetId _x;

	if (isNull _zombie) then
	{ 
		SM_CurrentZombiesSpawned = SM_CurrentZombiesSpawned - [_x];
		SM_CurrentZombieCount = SM_CurrentZombieCount - 1;
	}
	else
	{
		private _playerIsNear = false;
		{
			if ((_zombie distance2D (position _x)) <= SM_ZombieCleanupDistance) exitWith
			{
				_playerIsNear = true;
			};
		} forEach allPlayers;

		if (!_playerIsNear || {(_zombie call SM_IsSafezoneNear)}) exitWith
		{
			deleteVehicle _zombie;
			SM_CurrentZombiesSpawned = SM_CurrentZombiesSpawned - [_x];
			SM_CurrentZombieCount = SM_CurrentZombieCount - 1;
		};
	};	
} forEach SM_CurrentZombiesSpawned;

{
	private _zombie = objectFromNetId (_x select 0);
	if (isNull _zombie) then
	{
		DeadZombieBodys = DeadZombieBodys - [_x];
	}
	else
	{
		if ((diag_tickTime - (_x select 1)) > SM_ZombieCleanupDeath) then
		{
			{
				deleteVehicle _x;
			} forEach (attachedObjects _zombie);

			deleteVehicle _zombie;
			DeadZombieBodys = DeadZombieBodys - [_x];
		};
	};
} forEach DeadZombieBodys;

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

true
