/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _zombie = objectFromNetId (_this select 0);
private _player = objectFromNetId (_this select 1);

_zombie setVariable ["SM_HasBeenGutted",true,true];

private _lootHolder = objNull;
{
	if((typeOf _x) == "LootWeaponHolder") exitWith 
	{
		_lootHolder = _x;
	};
} forEach (attachedObjects _zombie);

if (isNull _lootHolder) then
{
	_lootHolder = createVehicle["LootWeaponHolder", (getPosATL _zombie), [], 0, "CAN_COLLIDE"];
	_lootHolder attachTo [_zombie, [0,0,0]];
};

_lootHolder addMagazineCargoGlobal ["SM_Zombz_Item_Heart",1];

true
