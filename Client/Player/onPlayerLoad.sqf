

if (hasinterface) exitWith {

	["ace_unconcious", unconciousEffect] call CBA_fnc_addEventHandler;
	
	["unconciousEffect"] call CBA_fnc_localEvent;


	[] execVM "client\player\effects\worldFog";

	waitUntil {!isNil "ExileClientPlayerIsSpawned"};
	waitUntil {ExileClientPlayerIsSpawned};


	if ("ItemRadio" in (assignedItems player)) then
	{
		player setVariable ["RadioToggle", true, true];
	} else {
		player setVariable ["RadioToggle", false, true];
	};

	[] call showPlayerLocation;
	[] call initRadio;
	[] call manTracker;

	diag_log "InitPlayerLocal Complete";
};


