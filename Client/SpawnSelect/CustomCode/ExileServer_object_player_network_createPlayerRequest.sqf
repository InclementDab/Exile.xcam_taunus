/**
 * StokesMagee's Resort
 * www.stokesmagee.net
 * © 2017 StokesMagee's Resort
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params["_sessionID","_parameters"];
_parameters params["_spawnDataString"];
private _requestingPlayer = _sessionID call ExileServer_system_session_getPlayerObject;
try
{
	if (isNull _requestingPlayer) throw format ["Session %1 requested a bambi character, but doesn't have a player object. Hacker or Monday?", _sessionID];

	private _playerUID = getPlayerUID _requestingPlayer;
	if(_playerUID isEqualTo "") throw format ["Player: '%1' has no player UID. Arma/Steam sucks!.",name _requestingPlayer];

	private _accountData = format["getAccountStats:%1", _playerUID] call ExileServer_system_database_query_selectSingle;
	private _bambiPlayer = (createGroup independent) createUnit ["Exile_Unit_Player", [0,0,0], [], 0, "CAN_COLLIDE"];
	removeHeadgear _bambiPlayer;
	private _bambiuniforms = [
		"TRYK_U_B_BLK_T_WH",
		"TRYK_U_B_BLK_T_BK",
		"TRYK_U_B_RED_T_BR",
		"TRYK_U_B_Denim_T_BG_WH",
		"TRYK_U_B_Denim_T_BG_BK",
		"TRYK_U_B_BLK_T_BG_WH",
		"TRYK_U_B_BLK_T_BG_BK",
		"TRYK_U_B_RED_T_BG_BR"
	] call BIS_fnc_selectRandom;
	

	if (getNumber(configfile >> "SM_SpawnSelect" >> "respectBasedLoadouts") == 1) then
	{
		[_bambiPlayer, _accountData select 0] call SM_fnc_giveBambiLoadout;
	}
	else
	{
		removeHeadgear _bambiPlayer;
		_bambiPlayer forceAddUniform _bambiuniforms;
		{
			_cargoType = _x call ExileClient_util_cargo_getType;
			switch (_cargoType) do
			{
				case 1: 	{ _bambiPlayer addItem _x; };
				case 2: 	{ _bambiPlayer addWeaponGlobal _x; };
				case 3: 	{ _bambiPlayer addBackpackGlobal _x; };
				case 4:		{ _bambiPlayer linkItem _x; };
				default 	{ _bambiPlayer addItem _x; };
			};
		}
		forEach getArray(configFile >> "CfgSettings" >> "BambiSettings" >> "loadOut");
	};

	private _spawnData = parseSimpleArray _spawnDataString;
	_spawnData params[["_spawnPos", [0,0,0]],["_spawnType", 0]];
	[_sessionID, _requestingPlayer, _spawnType, _spawnPos, _bambiPlayer, _accountData] call ExileServer_object_player_createBambi;
}
catch
{
	_exception call ExileServer_util_log;
};

true