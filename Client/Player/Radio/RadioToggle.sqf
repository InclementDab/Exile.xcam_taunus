/*
 * Author: InclementDeath
 * Function for setting Radio Toggle Variable
 *
 * Arguments:
 * 0: State <BOOLEAN>
 * 1: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, true] call Server_RadioToggle;
 *
 * Public: Yes
 */


	params ["_unit", ["_state", false, [true]]];
	_unit setVariable ["RadioToggle", _state, true];
	
	if (_state) then 
	{
		["Radio Enabled", true] call ace_common_fnc_displayText; 
		playsound "RadioEnable";
	} else {
		["Radio Disabled", true] call ace_common_fnc_displayText;
		playsound "RadioDisable";
	};