
[] execVM "client\enigma\enigmainit.sqf";
[] execVM "client\world\timeAccel.sqf";
[] execVM "client\CDAH\logic\config.sqf";

if (isServer) exitWith {
	[] execVM "client\weather\snow\MKY_Snow_Server.sqf";
};

