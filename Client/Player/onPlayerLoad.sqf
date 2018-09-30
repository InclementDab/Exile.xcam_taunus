

if (hasinterface) exitWith {
	
	["ace_unconscious", unconciousEffect] call CBA_fnc_addEventHandler;


	[] execVM "client\player\effects\worldFog.sqf";

	waitUntil {!isNil "ExileClientPlayerIsSpawned"};
	waitUntil {ExileClientPlayerIsSpawned};
	
	if !(profileNamespace getVariable ["HCExileServerJoined", false]) then
	{		
		if ("ItemRadio" in (assignedItems player)) then
		{
			player setVariable ["RadioToggle", true, true];
		} else {
			player setVariable ["RadioToggle", false, true];
		};
		[] call initRadio;
		[] call manTracker;
		[] call newPlayerStartup;
		
	} else {

		if ("ItemRadio" in (assignedItems player)) then
		{
			player setVariable ["RadioToggle", true, true];
		} else {
			player setVariable ["RadioToggle", false, true];
		};

		[] call showPlayerLocation;
		[] call initRadio;
		[] call manTracker;
	};
};

setTerrainGrid 48;


