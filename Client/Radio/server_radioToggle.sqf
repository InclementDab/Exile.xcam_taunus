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

params [["_state", false, [true]]];

player setVariable ["RadioToggle", _state];

if (_state) then {
	hint "Radio Enabled"; 
	playsound "RadioEnable";
} else {
	hint "Radio Disabled";
	playsound "RadioDisable";
};