/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _zombie = _this;

private _firedNear = _zombie getVariable ["SM_FiredNear",[]];

if (_firedNear isEqualTo []) exitWith { [] };

private _distance = 1000;
private _pos = [];

{
	private _distanceEnemy = _zombie distance _x;
	if (_distanceEnemy <= _distance) then
	{
		_distance = _distanceEnemy;
		_pos = _x;
	};
} forEach _firedNear;

_zombie setVariable ["SM_FiredNear", nil];

_pos