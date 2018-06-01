/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params["_zombie","_target"];
private _vehicle = vehicle _target;
private _dir = _zombie getRelDir _vehicle;
private _pos = getPosATL _vehicle;
private _distance = _zombie distance _vehicle;
_distance = random (_distance * SM_MultiplierDistanceFromTarget);

if !(isNil "_dir") then
{
	_pos = [(_pos select 0) + (_distance * (sin _dir)), (_pos select 1) + (_distance * (cos _dir)), _pos select 2];
};

_pos
