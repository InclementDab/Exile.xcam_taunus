


if (hasinterface) exitWith {

	cutText ["", "BLACK FADED", 2];
	
	waitUntil {!isNil "ExileClientPlayerIsSpawned"};
	waitUntil {ExileClientPlayerIsSpawned};
	waitUntil {!isNull player};

	
	["ace_unconscious", unconciousEffect] call CBA_fnc_addEventHandler;
	[] call initRadio;
	[] call worldFog;
	[] execVM "client\player\effects\playerOptions.sqf";
	
	
	if ("ItemRadio" in (assignedItems player)) then
		{
			player setVariable ["RadioToggle", true, true];
		} else {
			player setVariable ["RadioToggle", false, true];
	};
	
	if !(profileNamespace getVariable ["HCExileServerJoined", false]) then {		
		[] call newPlayerStartup;
	} else {
		[] call showPlayerLocation;
	};
};




