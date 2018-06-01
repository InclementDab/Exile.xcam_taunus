/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _zombie = objectFromNetId (_this select 0);
if (isNull _zombie) exitWith
{
	"Error fetching zombie to explode head" call SM_Util_Log;
};

if (!isNil "SM_LastZombie" && {(SM_LastZombie == _zombie)}) exitWith 
{
	"Zombie attempted to be exploded twice" call SM_Util_Log;
};

SM_LastZombie = _zombie;

["ExplodeHead", [(_this select 0)]] remoteExecCall ["SM_Network_HandleMessage", -2, false];

removeHeadgear _zombie;
removeGoggles _zombie;

private _hmd = hmd _zombie;
_zombie unassignItem _hmd;
_zombie removeItem _hmd;

_zombie setFace "SM_ZombzNoFace";

private _headExplodeSound = selectRandom
[
	"SM_Zombz\sounds\explode\1.ogg",
	"SM_Zombz\sounds\explode\2.ogg",
	"SM_Zombz\sounds\explode\3.ogg",
	"SM_Zombz\sounds\explode\4.ogg"
];
playsound3d [_headExplodeSound, _zombie, false, getPosASL _zombie, 10, 1, 30];

true
