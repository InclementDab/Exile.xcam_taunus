/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private["_version"];
_version = getText(configFile >> "CfgPatches" >> "SM_Zombz_code" >> "version");
diag_log format["SM_Zombz %1: Starting preInit!", _version];

if !(isMultiplayer) exitWith {};

_debug = (getNumber(configFile >> "SM_Zombz" >> "SM_Debug")) == 1;
if (str(missionConfigFile >> "SM_Zombz" >> "SM_Debug") != "") then
{
	_debug = (getNumber(missionConfigFile >> "SM_Zombz" >> "SM_Debug")) == 1;
};

if (isDedicated) then
{
	{
		_x params[["_function", ""],["_file", ""]];
		if (str(missionConfigFile >> "SM_Zombz" >> "CfgCodeOverride" >> _function) != "") then
		{
			_file = getText(missionConfigFile >> "SM_Zombz" >> "CfgCodeOverride" >> _function);
		};
		private _code = if(_debug)then{compile preprocessFileLineNumbers _file}else{compileFinal preprocessFileLineNumbers _file};
		missionNamespace setVariable[_function, _code];
	} 
	forEach 
	[
		["SM_SpawnZombies","SM_Zombz_Code\code\server\SM_SpawnZombies.sqf"],
		["SM_Cleanup","SM_Zombz_Code\code\server\SM_Cleanup.sqf"],
		["SM_ZombieLocality","SM_Zombz_Code\code\server\SM_ZombieLocality.sqf"],
		["SM_FindPosition","SM_Zombz_Code\code\server\SM_FindPosition.sqf"],
		["SM_SpawnHorde","SM_Zombz_Code\code\server\SM_SpawnHorde.sqf"],
		["SM_SpawnCheck","SM_Zombz_Code\code\server\SM_SpawnCheck.sqf"],
		["SM_PlayerZombieCount","SM_Zombz_Code\code\server\SM_PlayerZombieCount.sqf"],
		["SM_LootItemGetType","SM_Zombz_Code\code\server\SM_LootItemGetType.sqf"],
		["SM_MPKilled","SM_Zombz_Code\code\server\SM_MPKilled.sqf"],
		["SM_IsPlayerInTown","SM_Zombz_Code\code\server\SM_IsPlayerInTown.sqf"],
		["SM_GetSpawnData","SM_Zombz_Code\code\server\SM_GetSpawnData.sqf"],
		["SM_Network_HandleMessage","SM_Zombz_Code\code\server\SM_Network_HandleMessage.sqf"],
		["SM_Network_SendMessage","SM_Zombz_Code\code\server\SM_Network_SendMessage.sqf"],
		["SM_Network_UpdateLocality","SM_Zombz_Code\code\server\SM_Network_UpdateLocality.sqf"],
		["SM_Network_KillZombie","SM_Zombz_Code\code\server\SM_Network_KillZombie.sqf"],
		["SM_Network_AddGuts","SM_Zombz_Code\code\server\SM_Network_AddGuts.sqf"],
		["SM_Network_HandleDamage","SM_Zombz_Code\code\server\SM_Network_HandleDamage.sqf"],
		["SM_Network_Gut","SM_Zombz_Code\code\server\SM_Network_Gut.sqf"],
		["SM_Network_GutVariable","SM_Zombz_Code\code\server\SM_Network_GutVariable.sqf"],
		["SM_CleanupZombieGuts","SM_Zombz_Code\code\server\SM_CleanupZombieGuts.sqf"],
		["SM_LocalityChange","SM_Zombz_Code\code\server\SM_LocalityChange.sqf"],
		["SM_OnZombieDeleted","SM_Zombz_Code\code\server\SM_OnZombieDeleted.sqf"],
		["SM_TransferLocality","SM_Zombz_Code\code\server\SM_TransferLocality.sqf"],
		["SM_GetZombieOwner","SM_Zombz_Code\code\server\SM_GetZombieOwner.sqf"]
	];
};

if (hasInterface) then
{
	{
		_x params[["_function", ""],["_file", ""]];
		if (str(missionConfigFile >> "SM_Zombz" >> "CfgCodeOverride" >> _function) != "") then
		{
			_file = getText(missionConfigFile >> "SM_Zombz" >> "CfgCodeOverride" >> _function);
		};
		private _code = if(_debug)then{compile preprocessFileLineNumbers _file}else{compileFinal preprocessFileLineNumbers _file};
		missionNamespace setVariable[_function, _code];
	} forEach 
	[
		["SM_ZombieDoMove","SM_Zombz_Code\code\client\SM_ZombieDoMove.sqf"],
		["SM_SetVelocity","SM_Zombz_Code\code\client\SM_SetVelocity.sqf"],
		["SM_SetBlur","SM_Zombz_Code\code\client\SM_SetBlur.sqf"],
		["SM_ZombieFindTarget","SM_Zombz_Code\code\client\SM_ZombieFindTarget.sqf"],
		["SM_ZombieStartAttack","SM_Zombz_Code\code\client\SM_ZombieStartAttack.sqf"],
		["SM_InfectionThread","SM_Zombz_Code\code\client\SM_InfectionThread.sqf"],
		["SM_FetchVehicleSize","SM_Zombz_Code\code\client\SM_FetchVehicleSize.sqf"],
		["SM_ZombieAttackTarget","SM_Zombz_Code\code\client\SM_ZombieAttackTarget.sqf"],
		["SM_ZombieFindPositionTarget","SM_Zombz_Code\code\client\SM_ZombieFindPositionTarget.sqf"],
		["SM_ZombieFindPositionWander","SM_Zombz_Code\code\client\SM_ZombieFindPositionWander.sqf"],
		["SM_ZombieCalculateSpeed","SM_Zombz_Code\code\client\SM_ZombieCalculateSpeed.sqf"],
		["SM_FiredNear","SM_Zombz_Code\code\client\SM_FiredNear.sqf"],
		["SM_Say3D","SM_Zombz_Code\code\client\SM_Say3D.sqf"],
		["SM_BloodEffect","SM_Zombz_Code\code\client\SM_BloodEffect.sqf"],
		["SM_HandleDamage","SM_Zombz_Code\code\client\SM_HandleDamage.sqf"],
		["SM_GutZombie","SM_Zombz_Code\code\client\SM_GutZombie.sqf"],
		["SM_ScreenAddBlood","SM_Zombz_Code\code\client\SM_ScreenAddBlood.sqf"],
		["SM_ScreenRemoveBlood","SM_Zombz_Code\code\client\SM_ScreenRemoveBlood.sqf"],
		["SM_HideBody","SM_Zombz_Code\code\client\SM_HideBody.sqf"],
		["SM_IsInfrontOf","SM_Zombz_Code\code\client\SM_IsInfrontOf.sqf"],
		["SM_ZombieFindFiredNear","SM_Zombz_Code\code\client\SM_ZombieFindFiredNear.sqf"],
		["SM_LocalityChange", "SM_Zombz_Code\code\client\SM_LocalityChange.sqf"],
		["SM_Network_HandleMessage","SM_Zombz_Code\code\client\SM_Network_HandleMessage.sqf"],
		["SM_Network_SendMessage","SM_Zombz_Code\code\client\SM_Network_SendMessage.sqf"],
		["SM_Network_ExplodeHead","SM_Zombz_Code\code\client\SM_Network_ExplodeHead.sqf"],
		["SM_Network_Notification","SM_Zombz_Code\code\client\SM_Network_Notification.sqf"],
		["SM_Network_RemoveGuts","SM_Zombz_Code\code\client\SM_Network_RemoveGuts.sqf"],
		["SM_Action_UseHeart","SM_Zombz_Code\code\client\SM_Action_UseHeart.sqf"],
		["SM_Action_useImmunity","SM_Zombz_Code\code\client\SM_Action_useImmunity.sqf"],
		["SM_Action_UseCure","SM_Zombz_Code\code\client\SM_Action_UseCure.sqf"]
	];	
};

{
	_x params[["_function", ""],["_file", ""]];
	if (str(missionConfigFile >> "SM_Zombz" >> "CfgCodeOverride" >> _function) != "") then
	{
		_file = getText(missionConfigFile >> "SM_Zombz" >> "CfgCodeOverride" >> _function);
	};
	private _code = if(_debug)then{compile preprocessFileLineNumbers _file}else{compileFinal preprocessFileLineNumbers _file};
	missionNamespace setVariable[_function, _code];
} forEach 
[
	["SM_ConfigFetch","SM_Zombz_Code\code\shared\SM_ConfigFetch.sqf"],
	["SM_Util_Log","SM_Zombz_Code\code\shared\SM_Util_Log.sqf"],
	["SM_SetZombieVariables","SM_Zombz_Code\code\shared\SM_SetZombieVariables.sqf"],
	["SM_IsSafezoneNear","SM_Zombz_Code\code\shared\SM_IsSafezoneNear.sqf"],
	["SM_BaseAreaCheck","SM_Zombz_Code\code\shared\SM_BaseAreaCheck.sqf"],
	["SM_ArrayShuffle","SM_Zombz_Code\code\shared\SM_ArrayShuffle.sqf"],
	["SM_DisableAI","SM_Zombz_Code\code\shared\SM_DisableAI.sqf"],
	["SM_System_AddTask","SM_Zombz_Code\code\system\SM_System_AddTask.sqf"],
	["SM_HandleZombieSpawns","SM_Zombz_Code\code\shared\SM_HandleZombieSpawns.sqf"]
];

diag_log format["SM_Zombz %1: Finished preInit!", _version];

true
