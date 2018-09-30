// is this JIP ?
if (!isServer && isNull player) then {
	waitUntil {sleep 1;!(isNull player)};
	JIP_varSnowData = [player];
	publicVariableServer "JIP_varSnowData";
};

// on hosts and clients only
if (hasInterface) then {
	0 = [] spawn {
		// wait for variable to exist
		waitUntil {sleep 5;!(isNil "varEnableSnow")};
		// execute snow script
		0 = [[0.23,0.047,15],0.8,true] execVM "MKY_Snow_Client.sqf";
		// 0 = [] execVM "MKY\snow\MKY_Snow_Client.sqf";
	};
};


