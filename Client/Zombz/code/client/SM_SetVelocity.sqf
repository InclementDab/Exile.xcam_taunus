/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params [["_object",objNull],["_vel",[]]];
if (isNull _object || {_vel isEqualTo []}) exitWith {true};

_object setVelocity _vel;

true
