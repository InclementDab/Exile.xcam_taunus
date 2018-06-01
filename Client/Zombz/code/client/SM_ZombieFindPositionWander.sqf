/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _zombie = _this;
private _pos = getPosATL _zombie;
private _distance = 10;
private _dir = random 360;
_distance = random (_distance * 30);

_pos = [(_pos select 0) + _distance * sin _dir, (_pos select 1) + _distance * cos _dir, _pos select 2];

_pos
