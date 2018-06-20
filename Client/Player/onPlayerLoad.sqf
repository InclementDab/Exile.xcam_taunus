

if (hasinterface) exitWith {

	["ace_unconcious", unconciousEffect] call CBA_fnc_addEventHandler;
	
	["unconciousEffect"] call CBA_fnc_localEvent;


	[] execVM "effects\worldFog.sqf";

	waitUntil {!isNil "ExileClientPlayerIsSpawned"};
	waitUntil {ExileClientPlayerIsSpawned};
	
	if (player getVariable ["isNewPlayer", false, false]) exitWith {
		
		[] call initRadio;
		[] call manTracker;
		[] call newPlayerStartup;
	};
		


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


