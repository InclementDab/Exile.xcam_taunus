/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _itemClassName = _this;
private _cargoType = 4;
private _itemType = [_itemClassName] call BIS_fnc_itemType;
switch (_itemType select 0) do 
{
	case "Weapon": 		{ _cargoType = 2; };
	case "Mine": 		{ _cargoType = 1; };
	case "Magazine": 	{ _cargoType = 1; };
	case "Item":		{ _cargoType = 4; };
	case "Equipment": 
	{ 
		if ((_itemType select 1) == "Backpack" ) then
		{
			_cargoType = 3; 
		}
		else 
		{
			_cargoType = 4; 
		};
	};
};

_cargoType
