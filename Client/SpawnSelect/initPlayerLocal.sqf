
if (hasinterface) exitWith {

	["ace_unconscious", {
		params ["_unit", "_isUnconscious"];
		if (_isUnconscious) then	
		{
			cutText ["", "BLACK FADED", 1.5];
			1.5 fadeSound 0.08;	
		}
		else
		{
			titleCut ["", "BLACK IN", 4]; 
			4 fadeSound 1;
			["DynamicBlur", 400] spawn {
			params ["_name", "_priority", "_handle"];
			while {
				_handle = ppEffectCreate [_name, _priority];
				_handle < 0
			} do {
				_priority = _priority + 1;
			};
				_handle ppEffectEnable true;
				_handle ppEffectAdjust [10];
				_handle ppEffectCommit 0;
				waitUntil {ppEffectCommitted _handle};
				uiSleep 1; 
				_handle ppEffectAdjust [0];
				_handle ppEffectCommit 4;
				waitUntil {ppEffectCommitted _handle};
				_handle ppEffectEnable false;
				ppEffectDestroy _handle;
			};
		};
	}] call CBA_fnc_localEvent;



	[] execVM "client\weather\nightFog.sqf";

	waitUntil {!isNil "ExileClientPlayerIsSpawned"};
	waitUntil {ExileClientPlayerIsSpawned};


	if ("ItemRadio" in (assignedItems player)) then
	{
		player setVariable ["RadioToggle", true, true];
	} else {
		player setVariable ["RadioToggle", false, true];
	};


	[] execVM "client\spawnselect\showplayerlocation.sqf";
	[] execVM "client\radio\initRadio.sqf";
	[] execVM "client\playerstats\manTracker.sqf";

	diag_log "InitPlayerLocal Complete";
};


