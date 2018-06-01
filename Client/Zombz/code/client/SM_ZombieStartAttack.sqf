/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params ["_zombie","_target","_soundLast","_attackArray","_aggressiveArray"];

if ((animationState _zombie) isEqualTo "unconscious") exitWith { _soundLast };

if ((diag_ticktime - _soundLast) >= SM_ZombieSoundDelayAggressive) then
{
	private _aggressive = selectRandom _aggressiveArray; 
	[_zombie, _aggressive] remoteExecCall ["SM_Say3D", -2];
	_soundLast = diag_ticktime;
};

doStop _zombie;

_zombie setDir (_zombie getDir vehicle _target);

[_zombie, "AwopPercMstpSgthWnonDnon_throw"] remoteExecCall ["SM_ZombieDoMove", -2];

private _attack = selectRandom _attackArray;
[_zombie, _attack] remoteExecCall ["SM_Say3D", -2];

_soundLast
