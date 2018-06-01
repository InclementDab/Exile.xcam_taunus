/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _allPlayers = allPlayers - entities "HeadlessClient_F";
if ((count _allPlayers) == 0) exitWith { true }; 

_alreadySpawnedPlayers = [];
for "_i" from 1 to SM_ZombieWaveCount do
{
	private _player = selectRandom _allPlayers;

	if (_player in _alreadySpawnedPlayers) then
	{
		format["%1 (%2) has already spawned zombies this wave!",name _player,getPlayerUID _player] call SM_Util_Log;
	}
	else
	{

		format["Spawning zombies for %1 (%2)", (name _player), (getPlayerUID _player)] call SM_Util_Log;

		if !(_player call SM_SpawnCheck) exitwith {};

		private _zombiesToPass = [];
		private _data = _player call SM_PlayerZombieCount;
		_data params [["_currentZombies", 0],["_currentZombieSpawned", []]];

		format["Current zombies for player %1 (%2): %3", (name _player), (getPlayerUID _player), _currentZombies] call SM_Util_Log;

		_data = [_player, "zombie"] call SM_GetSpawnData;
		if (_data isEqualTo [0,0,0,0,0,["SOMETHING_IS_BROKEN"],0,0,-2]) exitWith 
		{
			format["Could not spawn zombies for player %1 (%2) no valid spawn data found.", (name _player), (getPlayerUID _player)] call SM_Util_Log;
		};
		_data params ["_minZombies", "_minDistance", "_maxDistance", "_zombieMinDistance", "_zombieMaxDistance", "_zombieClasses", "_maxZombies", "_spawnDelay"];
		private _zone = _data select 8;

		try 
		{
			if (SM_RespawnDelayForPlayerEnabled && {((diag_tickTime - (_player getVariable ["SM_LastSpawnedZombies", diag_tickTime - _spawnDelay])) < _spawnDelay)}) throw "Player cannot spawn zombies yet!";
			if (SM_DisableZombieSpawnsUntilInNewZoneEnabled && {((_player getVariable ["SM_LastZone",-1]) == _zone)}) throw "Player cannot spawn zombies due to being in the same zone!";
			if (_currentZombies >= _maxZombies) throw "Player has reached the maximum number of zombies";

			private _zombiePos = [];
			for "_i" from 0 to 20 do
			{
				_zombiePos = [(position _player), _minDistance, _maxDistance] call SM_FindPosition;
				if !(_zombiePos isEqualTo []) exitWith {};
			};
			if (_zombiePos isEqualTo []) throw "Could not find random position to spawn zombies!";

			"Spawning Zombies" call SM_Util_Log;
			private _zombiesToSpawn = ((random _maxZombies) max _minZombies) max 1;
			for "_i" from 1 to _zombiesToSpawn do
			{
				format["Looping zombie spawn %1", _i] call SM_Util_Log;
				if (_currentZombies >= _maxZombies) throw format["Max zombies for player %1 (%2) reached!", (name _player), (getPlayerUID _player)];
				if (SM_CurrentZombieCount >= SM_MaxZombies) throw "Max zombie count reached!";

				private _randomPos = [];
				for "_i" from 0 to 20 do
				{
					_randomPos = [_zombiePos, _zombieMinDistance, _zombieMaxDistance] call SM_FindPosition;
					if !(_randomPos isEqualTo []) exitWith {};
				};
				if (_randomPos isEqualTo []) throw "Could not find random position to spawn zombie!";

				private _zombie = createAgent [selectRandom _zombieClasses, _randomPos, [], 0, "NONE"];

				_zombiesToPass pushBack _zombie;

				SM_CurrentZombieCount = SM_CurrentZombieCount + 1;
				_currentZombies = _currentZombies + 1;
				SM_CurrentZombiesSpawned pushBack (netId _zombie);
				_zombie setVariable ["SM_ZombieOwner", netid _player];

				"Zombie Spawned" call SM_Util_Log;
			};
		}
		catch
		{
			_exception call SM_Util_Log;
		};

		_alreadySpawnedPlayers pushBack _player;

		format["Zombies spawned: %1", count _zombiesToPass] call SM_Util_Log;
		
		if (_zombiesToPass isEqualTo []) exitWith {};

		"Attempting to transfer locality of zombies to player" call SM_Util_Log;

		[_zombiesToPass, _player] spawn SM_TransferLocality;

		//Send every client a message to tell them to setup the eventhandlers...
		[_zombiesToPass] remoteExecCall ["SM_HandleZombieSpawns", 0, true];

		if (SM_RespawnDelayForPlayerEnabled) then
		{
			_player setVariable ["SM_LastSpawnedZombies", diag_tickTime];
		};

		if (SM_DisableZombieSpawnsUntilInNewZoneEnabled && {!isNil "_zone"} && {_zone != -2}) then
		{
			_player setVariable ["SM_LastZone",_zone];
		};
	};
};

true
