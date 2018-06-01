/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params [["_zombieNetId", ""],["_targetNetId", ""]];
private _zombie = objectFromNetId _zombieNetId;
private _target = objectFromNetId _targetNetId;

if (isNull _zombie) exitWith 
{ 
	"Problem fetching zombie to update locality to" call SM_Util_log; 
};

if (isNull _target) exitWith 
{ 
	"Problem fetching player to update locality to" call SM_Util_log; 
	deleteVehicle _zombie; 
};

if !(alive _zombie) exitWith { true };

if ((owner _zombie) == (owner _target)) exitWith { true };

[_zombie, _target] spawn SM_TransferLocality;

true
