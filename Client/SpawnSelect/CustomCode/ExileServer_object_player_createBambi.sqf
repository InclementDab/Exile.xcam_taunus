/**
 * StokesMagee's Resort
 * www.stokesmagee.net
 * © 2017 StokesMagee's Resort
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params ["_sessionID","_requestingPlayer","_spawnType","_spawnPos","_bambiPlayer","_accountData"];

private _direction = random 360;
private _name = name _requestingPlayer;
private _clanID = (_accountData select 3);
private _clanData = [];

private _spawnAreaRadius = getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "spawnZoneRadius");
private _position = [_spawnPos, _spawnAreaRadius] call ExileClient_util_math_getRandomPositionInCircle;
while {surfaceIsWater _position} do 
{
	_position = [_spawnPos, _spawnAreaRadius] call ExileClient_util_math_getRandomPositionInCircle;
};

if !((typeName _clanID) isEqualTo "SCALAR") then
{
	_clanID = -1;
}
else
{
	_clanData = missionNamespace getVariable [format ["ExileServer_clan_%1",_clanID],[]];
	private _clanGroup = grpNull;
	if(isNull (_clanData select 5))then
	{
		_clanGroup = createGroup independent;
		_clanData set [5,_clanGroup];
		_clanGroup setGroupIdGlobal [_clanData select 0];
		missionNameSpace setVariable [format ["ExileServer_clan_%1",_clanID],_clanData];
	}
	else
	{
		_clanGroup = (_clanData select 5);
	};
	[_player] joinSilent _clanGroup;
};

_bambiPlayer disableAI "FSM";
_bambiPlayer disableAI "MOVE";
_bambiPlayer disableAI "AUTOTARGET";
_bambiPlayer disableAI "TARGET";
_bambiPlayer disableAI "CHECKVISIBLE";
_bambiPlayer setDir _direction;
_bambiPlayer setName _name;
_bambiPlayer setVariable ["ExileMoney", 0, true]; 
_bambiPlayer setVariable ["ExileScore", (_accountData select 0)];
_bambiPlayer setVariable ["ExileKills", (_accountData select 1)];
_bambiPlayer setVariable ["ExileDeaths", (_accountData select 2)];
_bambiPlayer setVariable ["ExileClanID", _clanID];
_bambiPlayer setVariable ["ExileClanData", _clanData];
_bambiPlayer setVariable ["ExileHunger", 100];
_bambiPlayer setVariable ["ExileThirst", 100];
_bambiPlayer setVariable ["ExileTemperature", 37];
_bambiPlayer setVariable ["ExileWetness", 0];
_bambiPlayer setVariable ["ExileAlcohol", 0]; 
_bambiPlayer setVariable ["ExileName", _name]; 
_bambiPlayer setVariable ["ExileOwnerUID", getPlayerUID _requestingPlayer]; 
_bambiPlayer setVariable ["ExileIsBambi", true];
_bambiPlayer setVariable ["ExileXM8IsOnline", false, true];
_bambiPlayer setVariable ["ExileLocker", (_accountData select 4), true];




private _devFriendlyMode = getNumber (configFile >> "CfgSettings" >> "ServerSettings" >> "devFriendyMode");
if (_devFriendlyMode isEqualTo 1) then 
{
	private _devs = getArray (configFile >> "CfgSettings" >> "ServerSettings" >> "devs");
	{
		if ((getPlayerUID _requestingPlayer) isEqualTo (_x select 0))exitWith 
		{
			if ((name _requestingPlayer) isEqualTo (_x select 1))then
			{
				_bambiPlayer setVariable ["ExileMoney", 500000, true];
				_bambiPlayer setVariable ["ExileScore", 100000];
			};
		};
	}
	forEach _devs;
};

private _parachuteNetID = "";
switch (_spawnType) do
{
	default // Ground, and random
	{
		_bambiPlayer setPosATL [_position select 0,_position select 1,0];
	};
	case 1:
	{
		_position set [2, getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "parachuteDropHeight")];
		private _parachuteObject = createVehicle ["Steerable_Parachute_F", _position, [], 0, "CAN_COLLIDE"];
		_parachuteObject setDir _direction;
		_parachuteObject setPosATL _position;
		_parachuteObject enableSimulationGlobal true;
		_parachuteNetID = netId _parachuteObject;
	};
	case 2:
	{
		_position set [2, getNumber(configFile >> "CfgSettings" >> "BambiSettings" >> "parachuteDropHeight")];
		_bambiPlayer addBackpackGlobal "B_Parachute";
		_bambiPlayer setPosATL _position;
	}; 
};

private _bambiuniforms = selectRandom ["TRYK_shirts_PAD","TRYK_shirts_OD_PAD","TRYK_shirts_OD_PAD_BK","TRYK_shirts_PAD_BK","TRYK_shirts_TAN_PAD_BLU3","TRYK_shirts_BLK_PAD","TRYK_shirts_TAN_PAD_BK","TRYK_shirts_BLK_PAD_BK","TRYK_shirts_OD_PAD_BLW","TRYK_shirts_PAD_BLW","TRYK_shirts_TAN_PAD_BLW","TRYK_shirts_BLK_PAD_BLW","TRYK_shirts_PAD_YEL","TRYK_shirts_OD_PAD_YEL","TRYK_shirts_TAN_PAD_YEL","TRYK_shirts_BLK_PAD_YEL","TRYK_shirts_PAD_RED2","TRYK_shirts_OD_PAD_RED2","TRYK_shirts_TAN_PAD_RED2","TRYK_shirts_BLK_PAD_RED2","TRYK_shirts_PAD_BLU3","TRYK_shirts_OD_PAD_BLU3","TRYK_shirts_BLK_PAD_BLU3","TRYK_shirts_DENIM_R","TRYK_shirts_DENIM_BL","TRYK_shirts_DENIM_BK","TRYK_shirts_DENIM_BK","TRYK_shirts_DENIM_WH","TRYK_shirts_DENIM_BWH","TRYK_shirts_DENIM_RED2","TRYK_shirts_DENIM_WHB","TRYK_shirts_DENIM_ylb","TRYK_shirts_DENIM_od","TRYK_shirts_DENIM_R_Sleeve","TRYK_shirts_DENIM_BL_Sleeve","TRYK_shirts_DENIM_BK_Sleeve","TRYK_shirts_DENIM_WH_Sleeve","U_IG_leader","TRYK_shirts_DENIM_BWH_Sleeve"];
private _bambifood = selectRandom ["Exile_Item_Noodles","Exile_Item_SeedAstics","Exile_Item_Raisins","Exile_Item_Moobar"];

_bambiPlayer forceAddUniform _bambiUniform;
_bambiPlayer addItem _bambifood;


_bambiPlayer addMPEventHandler ["MPKilled", {_this call ExileServer_object_player_event_onMpKilled}];
_bambiPlayer call ExileServer_object_player_database_insert;
_bambiPlayer call ExileServer_object_player_database_update;
[
	_sessionID, 
	"createPlayerResponse", 
	[
		_bambiPlayer, 
		_parachuteNetID, 
		str (_accountData select 0),
		(_accountData select 1),
		(_accountData select 2),
		100,
		100,
		0,
		(getNumber (configFile >> "CfgSettings" >> "BambiSettings" >> "protectionDuration")) * 60, 
		_clanData,
		_spawnType
	]
] call ExileServer_system_network_send_to;
[_sessionID, _bambiPlayer] call ExileServer_system_session_update;

true