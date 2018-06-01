/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

//if !(canSuspend) exitWith { [] spawn SM_SpawnHorde; };

private _allPlayers = allPlayers - entities "HeadlessClient_F";
if !((count _allPlayers) > 0) exitWith { true }; 
if (SM_CurrentZombieCount >= SM_MaxZombies) exitWith { true };
if ((random 100) > SM_SpawnHordeChance) exitWith { true };

private _group = grpNull;
private _player = selectRandom _allPlayers;
private _zombiesToPass = [];
private _data = _player call SM_PlayerZombieCount;
_data params [["_currentZombies", 0],["_currentZombieSpawned", []]];
private _zombiePos = [];

if !(_player call SM_SpawnCheck) exitWith {};

private _data = [_player, "horde"] call SM_GetSpawnData;
if (_data isEqualTo [0,0,0,0,0,["SOMETHING_IS_BROKEN"],0,0,-2]) exitWith 
{
	format["Could not spawn zombies for player %1 (%2) no valid spawn data found.", (name _player), (getPlayerUID _player)] call SM_Util_Log;
	true
};

_data params ["_minZombies", "_minDistance", "_maxDistance", "_zombieMinDistance", "_zombieMaxDistance", "_zombieClasses", "_maxZombies", "_spawnDelay"];

for "_i" from 0 to 20 do
{
	_zombiePos = [(position _player), _minDistance, _maxDistance] call SM_FindPosition;
	if !(_zombiePos isEqualTo []) exitWith {};
};

if (_zombiePos isEqualTo []) exitWith
{
	"Could not find random position to spawn horde!" call SM_Util_Log;
};

private _zombiesToSpawn = ((random _maxZombies) max _minZombies) max 1;
for "_i" from 1 to _zombiesToSpawn do
{
	format["Looping zombie spawn %1", _i] call SM_Util_Log;
	if (_currentZombies >= _maxZombies) exitWith { format["Max zombies for player %1 (%2) reached!", (name _player), (getPlayerUID _player)] call SM_Util_Log; };
	if (SM_CurrentZombieCount >= SM_MaxZombies) exitWith { "Max zombie count reached!" call SM_Util_Log; };
	
	private _randomPos = [];
	for "_i" from 0 to 20 do
	{
		_randomPos = [_zombiePos, _zombieMinDistance, _zombieMaxDistance] call SM_FindPosition;
		if !(_randomPos isEqualTo []) exitWith {};
	};

	if (_randomPos isEqualTo []) exitWith
	{
		"Could not find random position to spawn zombie (Horde)!" call SM_Util_Log;
	};

	private _zombie = createAgent [selectRandom _zombieClasses, _randomPos, [], 0, "NONE"];
	_zombiesToPass pushBack _zombie;

	SM_CurrentZombieCount = SM_CurrentZombieCount + 1;
	_currentZombies = _currentZombies + 1;
	SM_CurrentZombiesSpawned pushBack (netId _zombie);
	_zombie setVariable ["SM_ZombieOwner", netid _player];

	"Zombie Spawned" call SM_Util_Log;
};

if (_zombiesToPass isEqualTo []) exitWith { true };

[_zombiesToPass, _player] spawn SM_TransferLocality;

//Send every client a message to tell them to setup the eventhandlers...
[_zombiesToPass] remoteExecCall ["SM_HandleZombieSpawns", 0, true];


if (SM_HordeMarkerEnabled) then
{
	private _marker = "";
	switch (SM_HordeMarkerType) do
	{
		case 1:
		{
			_marker = createMarker [format["ZombieHorde_%1", (random 100 + diag_tickTime)], _zombiePos];
			_marker setMarkerType "SM_Zombz_Marker4";
			_marker setMarkerText SM_HordeMarkerText;
		};
		case 2:
		{
			_marker = createMarker [format["ZombieHorde_%1", (random 100 + diag_tickTime)], _zombiePos];
			_marker setMarkerType "SM_Zombz_Marker3";
			_marker setMarkerText SM_HordeMarkerText;
		};
		case 3:
		{
			_marker = createMarker [format["ZombieHorde_%1", (random 100 + diag_tickTime)], _zombiePos];
			_marker setMarkerType "SM_Zombz_Marker2";
			_marker setMarkerText SM_HordeMarkerText;
		};
		case 4:
		{
			_marker = createMarker [format["ZombieHorde_%1", (random 100 + diag_tickTime)], _zombiePos];
			_marker setMarkerType "SM_Zombz_Marker1";
			_marker setMarkerText SM_HordeMarkerText;
		};
		case 5:
		{
			_marker = createMarker [format["ZombieHorde_%1", (random 100 + diag_tickTime)], _zombiePos];
			_marker setMarkerType "hd_warning";
			_marker setMarkerText SM_HordeMarkerText;
			_marker setMarkerColor "ColorRed";
		};
		case 6:
		{
			_marker = createMarker [format["ZombieHorde_%1", (random 100 + diag_tickTime)], _zombiePos];
			_marker setMarkerType SM_HordeMarkerStyle;
			_marker setMarkerText SM_HordeMarkerText;
			_marker setMarkerColor SM_HordeMarkerColor;		
		};
		default { "Error: SM_HordeMarkerType is not valid" call SM_Util_Log; };
	};

	if (SM_HordeMarkerCleanupEnabled) then
	{
		[SM_HordeMarkerCleanup, {deleteMarker _this}, _marker, false, "Horde Marker"] call SM_System_AddTask;
	};
};

if (SM_HordeNotificationEnabled) then
{
	SM_ClientNetworkMessage = ["Notification",SM_HordeNotificationText];
	publicVariable "SM_ClientNetworkMessage";
	SM_ClientNetworkMessage = nil;
};

true
