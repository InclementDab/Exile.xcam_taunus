



[] execVM "client\enigma\enigmainit.sqf";
[] execVM "client\world\timeAccel.sqf";
[] execVM "client\CDAH\logic\config.sqf";

waitUntil {!isNil "ExileClientPlayerIsSpawned"};
waitUntil {ExileClientPlayerIsSpawned};

[] execVM "client\radio\initRadio.sqf";