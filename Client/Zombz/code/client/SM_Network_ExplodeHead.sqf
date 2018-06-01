/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _zombieObj = objectFromNetId (_this select 0);

if (isNull _zombieObj) exitWith {true};

_zombieObj setFace "SM_ZombzNoFace";

private _pArray = [];
for "_i" from 0 to 2 do
{
	_meat = "#particlesource" createVehicleLocal (getposATL _zombieObj); 
	_meat setParticleClass "HeadMeat1"; 
	_meat setParticleParams	[["\A3\data_f\ParticleEffects\Universal\Meat_ca", 1, 0, 1],"","SpaceObject",1,5,[0, 0, 0],[0.2,0.2,2],2, 22, 1, 0.2,[4],[[0.9,0.01,0.01,1]],[0.1],0.00,0.0,"","","",0,false,0.0];
	_meat setParticleRandom [0, [0.1, 0.1, 0.0], [1.35, 1.35, 1.0], 0, 0.1, [0, 0, 0, 0], 0, 0];
	_meat setDropInterval 60;
	_meat attachTo [_zombieObj, [0,0,0.2], "head"]; 
	_pArray pushBack _meat;
};

private _blood = "#particlesource" createVehicleLocal (getposATL _zombieObj); 
_blood setParticleClass "HeadBlood1"; 
_blood setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal_02", 8, 4, 1],"","Billboard",1, 0.3,[0, 0, 0],[0.00,0.0,2],1, 0.127, 0.1, 0.4,[0.5,1],[[1,0,0,0.9],[1,0,0,0.45]],[0.1],0.0,0.0,"","","",0,false,0.0 ];
_blood setDropInterval 60;
_blood attachTo [_zombieObj, [0,0,0.2], "head"]; 
_pArray pushback _blood;

[5, {{deleteVehicle _x} forEach _this}, _pArray, false, "Explode Head Deletion"] call SM_System_AddTask;

true
