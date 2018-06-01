/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _zombie = _this select 0;
private _fired = _this select 7;

if !(isPlayer _fired) exitWith {false};

private _firedPosition = position _fired;
private _zombieVariable = _zombie getVariable ["SM_FiredNear", []];
_zombieVariable pushBack _firedPosition;
_zombie setVariable ["SM_FiredNear", _zombieVariable];

true
