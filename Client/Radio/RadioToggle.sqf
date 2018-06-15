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
 * [true, player] call Server_RadioToggle;
 *
 * Public: Yes
 */

if (hasInterface) exitWith 
{ 
	params [["_state", false, [true]]];
	player setVariable ["RadioToggle", _state];
	
	if (_state) then 
	{
		["Radio Enabled", true] call ace_common_fnc_displayText; 
		playsound "RadioEnable";
	} else {
		["Radio Disabled", true] call ace_common_fnc_displayText;
		playsound "RadioDisable";
	};
};