/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params["_zombie"];

private _owner = objNull;
private _zombieOwner = owner _zombie;

// The owner is the server...
if (_zombieOwner == 2) exitWith { objNull };

{
	if ((owner _x) == _zombieOwner) exitWith { _owner = _x; };
} forEach allPlayers;

_owner