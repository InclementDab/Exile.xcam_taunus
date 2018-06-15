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
	
	
	private _bambiuniforms = selectRandom ["TRYK_shirts_PAD","TRYK_shirts_OD_PAD","TRYK_shirts_OD_PAD_BK","TRYK_shirts_PAD_BK","TRYK_shirts_TAN_PAD_BLU3","TRYK_shirts_BLK_PAD","TRYK_shirts_TAN_PAD_BK","TRYK_shirts_BLK_PAD_BK","TRYK_shirts_OD_PAD_BLW","TRYK_shirts_PAD_BLW","TRYK_shirts_TAN_PAD_BLW","TRYK_shirts_BLK_PAD_BLW","TRYK_shirts_PAD_YEL","TRYK_shirts_OD_PAD_YEL","TRYK_shirts_TAN_PAD_YEL","TRYK_shirts_BLK_PAD_YEL","TRYK_shirts_PAD_RED2","TRYK_shirts_OD_PAD_RED2","TRYK_shirts_TAN_PAD_RED2","TRYK_shirts_BLK_PAD_RED2","TRYK_shirts_PAD_BLU3","TRYK_shirts_OD_PAD_BLU3","TRYK_shirts_BLK_PAD_BLU3","TRYK_shirts_DENIM_R","TRYK_shirts_DENIM_BL","TRYK_shirts_DENIM_BK","TRYK_shirts_DENIM_BK","TRYK_shirts_DENIM_WH","TRYK_shirts_DENIM_BWH","TRYK_shirts_DENIM_RED2","TRYK_shirts_DENIM_WHB","TRYK_shirts_DENIM_ylb","TRYK_shirts_DENIM_od","TRYK_shirts_DENIM_R_Sleeve","TRYK_shirts_DENIM_BL_Sleeve","TRYK_shirts_DENIM_BK_Sleeve","TRYK_shirts_DENIM_WH_Sleeve","U_IG_leader","TRYK_shirts_DENIM_BWH_Sleeve"];
	private _bambifood = selectRandom ["Exile_Item_Noodles","Exile_Item_SeedAstics","Exile_Item_Raisins","Exile_Item_Moobar"];

	_bambiPlayer forceAddUniform _bambiuniforms;
	_bambiPlayer addItem _bambifood;
	


	if (getNumber(configfile >> "SM_SpawnSelect" >> "respectBasedLoadouts") == 1) then
	{
		[_bambiPlayer, _accountData select 0] call SM_fnc_giveBambiLoadout;
	}
	else
	{
		removeHeadgear _bambiPlayer;
		{
			_cargoType = _x call ExileClient_util_cargo_getType;
			switch (_cargoType) do
			{
				case 1: 	{ _bambiPlayer addItem _x; };
				case 2: 	{ _bambiPlayer addWeaponGlobal _x; };
				case 3: 	{ _bambiPlayer addBackpackGlobal _x; };
				case 4:		{ _bambiPlayer linkItem _x; };
				default 					{ _bambiPlayer addItem _x; };
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