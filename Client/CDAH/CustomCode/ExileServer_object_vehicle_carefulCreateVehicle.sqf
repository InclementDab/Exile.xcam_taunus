/**
 * ExileServer_object_vehicle_carefulCreateVehicle
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 * Reworked by CDAH
 */
 
private["_vehicleClassName","_position","_direction","_usePositionATL","_temporaryPositionInOuterSpace","_vehicleObject"];
_vehicleClassName = _this select 0;
_position = _this select 1;
_direction = _this select 2;
_usePositionATL = _this select 3;
_temporaryPositionInOuterSpace = 
[
	(_position select 0) - 250 + (random 500),
	(_position select 1) - 250 + (random 500),
	1000 + (random 1000)
];
_vehicleObject = createVehicle [_vehicleClassName, _temporaryPositionInOuterSpace, [], 0, "CAN_COLLIDE"];

//Change WeaponTurret Blackfoot
if (typeOf _vehicleObject in ["B_Heli_Attack_01_F"]) then
	{
	_vehicleObject removeWeaponTurret ["gatling_20mm",[0]];
	_vehicleObject removeWeaponTurret ["missiles_DAGR",[0]];
	_vehicleObject removeWeaponTurret ["missiles_ASRAAM",[0]];
	_vehicleObject removeMagazinesTurret ["1000Rnd_20mm_shells",[0]];
	_vehicleObject removeMagazinesTurret ["4Rnd_AAA_missiles",[0]];
	_vehicleObject removeMagazinesTurret ["24Rnd_PG_missiles",[0]];	
	_vehicleObject addWeaponTurret ["LMG_Minigun_heli",[0]]; 
    _vehicleObject addMagazineTurret ["2000Rnd_65x39_Belt_Tracer_Green_Splash",[0]];
	};

//Kuma
if (typeOf _vehicleObject in ["I_MBT_03_cannon_F"]) then
	{
	_vehicleObject removeMagazinesTurret ["14Rnd_120mm_HE_shells_Tracer_Yellow",[0]];
	};	
	
//FV-720 Mora
if (typeOf _vehicleObject in ["I_APC_tracked_03_cannon_F"]) then
	{
	_vehicleObject removeMagazinesTurret ["60Rnd_30mm_APFSDS_shells_Tracer_Yellow",[0]]; 
	};
	
//Gorgon
if (typeOf _vehicleObject in ["I_APC_Wheeled_03_cannon_F"]) then
	{
	_vehicleObject removeMagazinesTurret ["60Rnd_30mm_APFSDS_shells_Tracer_Yellow",[0]]; 
	};

//Hellcat
if (typeOf _vehicleObject in ["I_Heli_light_03_F"]) then
	{
	_vehicleObject removeWeaponTurret ["missiles_DAGR",[-1]];
	};

//Varsuk
if (typeOf _vehicleObject in ["O_MBT_02_cannon_F"]) then
	{
	_vehicleObject removeMagazinesTurret ["24Rnd_125mm_APFSDS_T_Green",[0]];
	};

//Varsuk green
if (typeOf _vehicleObject in ["O_T_MBT_02_cannon_ghex_F"]) then
	{
	_vehicleObject removeMagazinesTurret ["24Rnd_125mm_APFSDS_T_Green",[0]];
	};
	
//Kamysh
if (typeOf _vehicleObject in ["O_APC_Tracked_02_cannon_F"]) then
	{
	_vehicleObject removeWeaponTurret ["missiles_titan",[0]];
	_vehicleObject removeMagazinesTurret ["2Rnd_GAT_missiles",[0]]; 
	_vehicleObject removeMagazinesTurret [" 60Rnd_30mm_APFSDS_shells_Tracer_Green",[0]]; 
	};

//Kamysh Green
if (typeOf _vehicleObject in ["O_T_APC_Tracked_02_cannon_ghex_F"]) then
	{
	_vehicleObject removeWeaponTurret ["missiles_titan",[0]];
	_vehicleObject removeMagazinesTurret ["2Rnd_GAT_missiles",[0]]; 
	_vehicleObject removeMagazinesTurret [" 60Rnd_30mm_APFSDS_shells_Tracer_Green",[0]]; 
	};
	
//Marid
if (typeOf _vehicleObject in ["O_APC_Wheeled_02_rcws_F"]) then
	{
	_vehicleObject removeWeaponTurret ["GMG_40mm",[0]];
	_vehicleObject removeMagazinesTurret ["96Rnd_40mm_G_belt",[0]]; 
	_vehicleObject addWeaponTurret ["autocannon_30mm_CTWS",[0]]; 
	_vehicleObject addMagazineTurret ["140Rnd_30mm_MP_shells_Tracer_Yellow",[0]]; 
	};	
	
//Marid Green
if (typeOf _vehicleObject in ["O_T_APC_Wheeled_02_rcws_ghex_F"]) then
	{
	_vehicleObject removeWeaponTurret ["GMG_40mm",[0]];
	_vehicleObject removeMagazinesTurret ["96Rnd_40mm_G_belt",[0]]; 
	_vehicleObject addWeaponTurret ["autocannon_30mm_CTWS",[0]]; 
	_vehicleObject addMagazineTurret ["140Rnd_30mm_MP_shells_Tracer_Yellow",[0]]; 
	};
	
//ORCA
if (typeOf _vehicleObject in ["O_Heli_Light_02_F"]) then
	{
	_vehicleObject removeWeaponTurret ["missiles_DAGR",[-1]];
	};		

//Slammer
if (typeOf _vehicleObject in ["B_MBT_01_TUSK_F"]) then
	{
	_vehicleObject removeMagazinesTurret ["40Rnd_105mm_APFSDS_T_Red",[0]];
	};
		
//Panther
if (typeOf _vehicleObject in ["B_APC_Tracked_01_rcws_F"]) then
	{
	_vehicleObject removeWeaponTurret ["GMG_40mm",[0]];
	_vehicleObject removeMagazinesTurret ["96Rnd_40mm_G_belt",[0]]; 
	_vehicleObject addWeaponTurret ["autocannon_30mm_CTWS",[0]]; 
	_vehicleObject addMagazineTurret ["140Rnd_30mm_MP_shells_Tracer_Yellow",[0]]; 
	};	
	
//Marshall
if (typeOf _vehicleObject in ["B_APC_Wheeled_01_cannon_F"]) then
	{
	_vehicleObject removeMagazinesTurret ["B_APC_Wheeled_01_cannon_F",[0]]; 
	};

//Pawnee
if (typeOf _vehicleObject in ["B_Heli_Light_01_armed_F"]) then
	{
	_vehicleObject removeWeaponTurret ["missiles_DAR",[-1]];
	};
	
//Y-32 (apex hover jet)
if (typeOf _vehicleObject in ["O_T_VTOL_02_infantry_F"]) then
	{
	_vehicleObject removeWeaponTurret ["gatling_30mm_VTOL_02",[0]];
	_vehicleObject removeWeaponTurret ["missiles_SCALPEL",[0]];
	_vehicleObject removeWeaponTurret ["rockets_Skyfire",[0]];
	_vehicleObject removeMagazinesTurret ["250Rnd_30mm_HE_shells_Tracer_Green",[0]];
	_vehicleObject removeMagazinesTurret ["250Rnd_30mm_APDS_shells_Tracer_Green",[0]];
	_vehicleObject removeMagazinesTurret ["8Rnd_LG_scalpel",[0]];
	_vehicleObject removeMagazinesTurret ["38Rnd_80mm_rockets",[0]];	
	_vehicleObject addWeaponTurret ["LMG_Minigun_heli",[0]]; 
    _vehicleObject addMagazineTurret ["2000Rnd_65x39_Belt_Tracer_Green_Splash",[0]]; 
	};

	//Y-32 (apex hover jet)
if (typeOf _vehicleObject in ["	O_T_VTOL_02_vehicle_F"]) then
	{
	_vehicleObject removeWeaponTurret ["gatling_30mm_VTOL_02",[0]];
	_vehicleObject removeWeaponTurret ["missiles_SCALPEL",[0]];
	_vehicleObject removeWeaponTurret ["rockets_Skyfire",[0]];
	_vehicleObject removeMagazinesTurret ["250Rnd_30mm_HE_shells_Tracer_Green",[0]];
	_vehicleObject removeMagazinesTurret ["250Rnd_30mm_APDS_shells_Tracer_Green",[0]];
	_vehicleObject removeMagazinesTurret ["8Rnd_LG_scalpel",[0]];
	_vehicleObject removeMagazinesTurret ["38Rnd_80mm_rockets",[0]];	
	_vehicleObject addWeaponTurret ["LMG_Minigun_heli",[0]]; 
    _vehicleObject addMagazineTurret ["2000Rnd_65x39_Belt_Tracer_Green_Splash",[0]]; 
	};	
	

	
//Change WeaponTurret Cessna
if (typeOf _vehicleObject in ["GNT_C185T"]) then
	{

	_vehicleObject removeWeaponTurret ["missiles_DAR2",[-1]];
	_vehicleObject removeMagazinesTurret ["12Rnd_missiles",[-1]];		
	_vehicleObject addWeaponTurret ["M134_minigun",[-1]]; 
    _vehicleObject addMagazineTurret ["5000Rnd_762x51_Belt",[-1]];  
	};		
//Remove thermal from Tanks / Helis!
if (typeOf _vehicleObject in ["B_APC_Tracked_01_CRV_F", "I_APC_tracked_03_cannon_F", "O_MRAP_02_hmg_F", "I_MRAP_03_hmg_F", "B_MRAP_01_hmg_F", "B_Heli_Attack_01_F"]) then
	{
		_vehicleObject disableTIEquipment true;
	};

_vehicleObject allowDamage false;
_vehicleObject removeAllEventHandlers "HandleDamage";
_vehicleObject addEventHandler["HandleDamage", {false}];
_vehicleObject setVelocity [0, 0, 0];
if ((typeName _direction) isEqualTo "ARRAY") then 
{
	_vehicleObject setVectorDirAndUp _direction;
}
else 
{
	_vehicleObject setDir _direction;
};

if (_usePositionATL) then
{
	_vehicleObject setPosATL _position;
}
else 
{
	_vehicleObject setPosASL _position;
};

_vehicleObject setVelocity [0, 0, 0];
_vehicleObject allowDamage true;
_vehicleObject removeAllEventHandlers "HandleDamage";
_vehicleObject setDamage 0;
clearBackpackCargoGlobal _vehicleObject;
clearItemCargoGlobal _vehicleObject;
clearMagazineCargoGlobal _vehicleObject;
clearWeaponCargoGlobal _vehicleObject;
if (_vehicleClassName isKindOf "I_UGV_01_F") then 
{
	createVehicleCrew _vehicleObject;
};
if (getNumber (configFile >> "CfgSettings" >> "VehicleSpawn" >> "nightVision") isEqualTo 0) then 
{
	_vehicleObject disableNVGEquipment true;
};
if (getNumber (configFile >> "CfgSettings" >> "VehicleSpawn" >> "thermalVision") isEqualTo 0) then 
{
	_vehicleObject disableTIEquipment true;
};
_vehicleObject