/**
 * StokesMagee's Resort
 * www.stokesmagee.net
 * © 2017 StokesMagee's Resort
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

disableSerialization;
ExileClientSpawnLocationSelectionDone = false;
ExileClientSelectedSpawnLocationMarkerName = "";
ExileClientSpawnLocation = "";

[] spawn
{
	disableSerialization;
	waitUntil{!iSNull (findDisplay 46)};
	uiSleep 1;
	createDialog "RscExileSelectSpawnLocationDialog";

	private _display = displayNull;
	waitUntil {_display = uiNamespace getVariable ["RscExileSelectSpawnLocationDialog", displayNull]; !isNull _display};
	private _map = _display displayCtrl 51;

	private _delays = profileNamespace getVariable ["SM_SpawnDelays_" + serverName, []];

	private _locationDelays = [];
	private _missionStart = missionSTart;
	{
		if (_missionStart isEqualTo (_x select 2)) then
		{
			_locationDelays pushBack _x;
		};
	} forEach _delays;

	if !(_delays isEqualTo _locationDelays) then
	{
		profileNamespace setVariable ["SM_SpawnDelays_" + serverName, _locationDelays];
		saveProfileNamespace;
	};

	private _isReady = 
	{
		scopeName "isReady";
		private _result = true;
		{
			if ((_x select 0) == _this) then
			{
				if ((_this find "Territory") == 0) then
				{
					if (diag_tickTime - (_x select 1) < SM_SpawnSelect_respawnDelayTerritory) then
					{
						false breakOut "isReady";
					};
				}
				else
				{
					if (diag_tickTime - (_x select 1) < SM_SpawnSelect_respawnDelay) then
					{
						false breakOut "isReady";
					};
				};
			};
		} forEach _locationDelays;
		_result
	};

	if (isNil "ExileClientSpawnLocations") then
	{
		ExileClientMarkersHidden = [];
		ExileClientBaseMarkers = [];
		ExileClientSpawnLocations = [];
		ExileClientSpawnLocationsNoCheck = [];
		ExileClientMouseOverMarker = "";
		ExileClientHasMarkerSelected = false;
		ExileClientSelectedMarker = "";
		{
			private _marker = _x;

			if (SM_SpawnSelect_hideMarkers) then
			{
				if (markerAlpha _marker != 0 && {((getMarkerType _marker) != "ExileSpawnZone")} && {(_marker != ExileClientLastDeathMarker)} && {!(_marker in SM_SpawnSelect_whitelistedMarkers)}) then
				{
					ExileClientMarkersHidden pushBack [_marker, markerAlpha _marker];
					_marker setMarkerAlphaLocal 0;
				};
			};
			/*
			if ((getMarkerType _marker) == "ExileSpawnZone") then
			{
				if (markerAlpha _marker != 0) then
				{
					ExileClientMarkersHidden pushBack [_marker, markerAlpha _marker];
					_marker setMarkerAlphaLocal 255;
				};

				ExileClientSpawnLocationsNoCheck pushBack [getMarkerPos _marker, markerText _marker, _marker];
				if (_marker call _isReady) then
				{
					ExileClientSpawnLocations pushBack [getMarkerPos _marker, markerText _marker];
				};
			};
			*/
		} forEach allMapMarkers;

		private _playerUID = getPlayerUID player;
		private _requiredLevel = 2;
		{
			private _flag = _x;
			private _buildRights = _flag getVariable ["ExileTerritoryBuildRights", []];
			private _name = "Territory: " + (_flag getVariable ["ExileTerritoryName", ""]);
			if (_playerUID in _buildRights && {(_flag getVariable ["ExileTerritoryLevel", 0]) >= _requiredLevel} && {_name call _isReady}) then
			{
				private _position = getPos _flag;
				private _marker = createMarkerLocal [_name, [0,0,0]];
				_marker setMarkerPosLocal _position;
				_marker setMarkerAlphaLocal 0;
				_marker setMarkerTypeLocal "ExileSpawnZone";
				_marker setMarkerTextLocal _name;

				ExileClientBaseMarkers pushBack _marker;
				ExileClientSpawnLocations pushBack [getMarkerPos _marker, _name];
			};
		} forEach allMissionObjects "Exile_Construction_Flag_Static";
	};

	private _spawnButton = _display displayCtrl 18;
	_spawnButton ctrlEnable false;

	private _spawnButton1 = _display displayCtrl 19;
	_spawnButton1 ctrlEnable false;

	private _spawnButton2 = _display displayCtrl 20;
	_spawnButton2 ctrlEnable false;

	_map ctrlMapAnimAdd [0, 1, [worldSize / 2, worldSize / 2, 0]];
	ctrlMapAnimCommit _map;

	true
};
true