/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params ["_zombie","_notUsed","_killer"];

private _amount = 0;

DeadZombieBodys pushBack [(netId _zombie), diag_tickTime];
SM_CurrentZombiesSpawned = SM_CurrentZombiesSpawned - [netID _zombie];
SM_CurrentZombieCount = (SM_CurrentZombieCount - 1) max 0;

private _owner = _zombie getVariable ["SM_ZombieOwner", ""];
if (_owner != "") then
{
	private _ownerPlayer = objectFromNetId _owner;
	if !(isNull _ownerPlayer) then
	{
		private _zombieInfo = _ownerPlayer getVariable ["SM_CurrentZombies", [0, []]];
		_zombieInfo params["_zombieCount","_zombiesArray"];

		_zombiesArray = _zombiesArray - [(netId _zombie)];
		_zombieCount = (_zombieCount - 1) max 0;
		_ownerPlayer setVariable ["SM_CurrentZombies", [_zombieCount, _zombiesArray]];
	};
};

if (SM_ExileEnabled) then
{
	if (SM_GivePlayerRespect && {_zombie != _killer} && {isPlayer _killer}) then
	{
		_amount = (round(random SM_MaxRespect)) max 1;
		private _score = (_killer getVariable ["ExileScore", 0]) + _amount;
		_killer setVariable ["ExileScore", _score];
		format["setAccountScore:%1:%2", _score, getPlayerUID _killer] spawn ExileServer_system_database_query_fireAndForget;
		_killer call ExileServer_object_player_sendStatsUpdate;
	};

	if (SM_GiveZombiePoptabs && {(random 100) > SM_PopTabsChance}) then
	{
		_zombie setVariable ["ExileMoney", (round(random SM_MaxPoptabs)), true];
	};
};

if ((random 100) < SM_ChanceOfLoot) then
{
	private _count = round (random SM_MaxItemDrop);
	if (_count == 0) exitWith {};

	private _lootToAdd = [];
	for "_i" from 1 to _count do
	{
		_lootToAdd pushBack (selectRandom SM_LootArray);
	};
	if (_lootToAdd isEqualTo []) exitWith {};

	private _lootHolder = createVehicle["LootWeaponHolder", (getPosATL _zombie), [], 0, "CAN_COLLIDE"];
	_lootHolder attachTo [_zombie, [0,0,0]];
	{
		private _itemClassName = _x;
		private _cargoType = _itemClassName call SM_LootItemGetType;
		switch (_cargoType) do
		{
			case 1:
			{
				if (_itemClassName == "Exile_Item_MountainDupe") then
				{
					_lootHolder addMagazineCargoGlobal [_itemClassName, 2];
				}
				else
				{
					_lootHolder addMagazineCargoGlobal [_itemClassName, 1];
				};
			};
			case 3:
			{
				_lootHolder addBackpackCargoGlobal [_itemClassName, 1];
			};
			case 2:
			{
				_lootHolder addWeaponCargoGlobal [_itemClassName, 1];
				if !(_itemClassName in ["Exile_Melee_Axe","Exile_Melee_Shovel","Exile_Melee_SledgeHammer"]) then
				{
					private _magazineClassNames = getArray(configFile >> "CfgWeapons" >> _itemClassName >> "magazines");
					if (count(_magazineClassNames) > 0) then
					{
						private _magazineClassName = selectRandom _magazineClassNames;
						_lootHolder addMagazineCargoGlobal [_magazineClassName, ceil(random 2)];
					};
				};
			};
			default { _lootHolder addItemCargoGlobal [_itemClassName, 1]; };
		};
	} forEach _lootToAdd;
};

if (SM_NotificationEnabled && {_amount != 0}) then
{
	[_killer, "Notification", _amount] call SM_Network_SendMessage;
};

true
