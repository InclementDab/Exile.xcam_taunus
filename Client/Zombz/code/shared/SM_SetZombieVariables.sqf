/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params ["_zombie"];

if (isServer) then
{
	_zombie addMPEventHandler ["MPKilled","if !(isServer) exitWith {true}; _this call SM_MPKilled"];
	_zombie addEventHandler ["Deleted","_this call SM_OnZombieDeleted"];

	if (_Zombie isKindOf "SM_Zombz_FemaleBase") then
	{
		private _face = selectRandom SM_FaceFemaleArray;
		[_zombie, _face] remoteExecCall ["setFace", -2, _zombie];
	}
	else
	{
		private _face = selectRandom SM_FacesArray;
		if (SM_Zombie_GlowingFace && {(_face in ["RyanZombieFace1","RyanZombieFace2","RyanZombieFace3","RyanZombieFace4","RyanZombieFace5","RyanZombieFace6"])}) then
		{
			_face = format["%1_glowing", _face];
		};
		[_zombie, _face] remoteExecCall ["setFace", -2, _zombie];
	};

	removegoggles _zombie;
	_zombie setdamage SM_ZombieHealth;
	_zombie setDir (random 360);
	_zombie setAnimSpeedCoef (random 1);

	_zombie setHitIndex [10, 0];
	_zombie setHitPointDamage ["hitLegs", 0];
};

if (local _zombie) then
{
	[_zombie] call SM_DisableAI;
};

if (hasInterface) then
{
	if (SM_Zombie_SpawnInGround) then 
	{
		[_zombie, "AmovPercMstpSnonWnonDnon_SaluteOut"] call SM_ZombieDoMove;
	};
	if (SM_ExplodingHeadEnabled) then
	{
		_zombie addEventHandler ["HandleDamage","_this call SM_HandleDamage"];
	};
};


//Eventhandler for when zombies locality changes, this will save a ton of code.
_zombie addEventHandler ["Local","_this call SM_LocalityChange"];

true
