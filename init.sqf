


[] execVM "client\weather\nightFog.sqf";
[] execVM "client\enigma\enigmainit.sqf";
[] execVM "client\world\timeAccel.sqf";

waitUntil {!isNil "ExileClientPlayerIsSpawned"};
waitUntil {ExileClientPlayerIsSpawned};

[] execVM "client\radio\initRadio.sqf";