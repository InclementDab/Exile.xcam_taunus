/**
 * StokesMagee's Resort
 * www.stokesmagee.net
 * © 2017 StokesMagee's Resort
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params[["_spawnType", 3]];

disableSerialization;

if (_spawnType == 3) then
{
	private _spawn = selectRandom ExileClientSpawnLocationsNoCheck;
	ExileClientSelectedMarker = _spawn select 3;
	ExileClientSelectedSpawnLocationMarkerName = str [(selectRandom ExileClientSpawnLocationsNoCheck) select 0, _spawnType];
}
else
{
	ExileClientSelectedSpawnLocationMarkerName = str [getMarkerPos ExileClientSelectedMarker, _spawnType];
};


private _locationDelays = profileNamespace getVariable ["SM_SpawnDelays_" + serverName, []];
_locationDelays pushBack [ExileClientSelectedMarker, diag_tickTime, missionStart];
profileNamespace setVariable ["SM_SpawnDelays_" + serverName, _locationDelays];
saveProfileNamespace;

ExileClientSpawnLocationSelectionDone = true;
private _display = uiNamespace getVariable ["RscExileSelectSpawnLocationDialog", displayNull];
_display closeDisplay 1;

{
	_x params ["_marker","_alpha"];
	_marker setMarkerAlpha _alpha;
} forEach ExileClientMarkersHidden;
ExileClientMarkersHidden = [];

{
	deleteMarkerLocal _x;
} forEach ExileClientBaseMarkers;

ExileClientMarkersHidden = nil;
ExileClientBaseMarkers = nil;
ExileClientSpawnLocations = nil;
ExileClientSpawnLocationsNoCheck = nil;
ExileClientMouseOverMarker = nil;
ExileClientHasMarkerSelected = nil;
ExileClientSelectedMarker = nil;

true