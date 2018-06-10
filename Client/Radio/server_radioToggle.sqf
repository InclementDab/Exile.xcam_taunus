/*
 * Author: InclementDeath
 * Function for setting Radio Toggle Variable
 *
 * Arguments:
 * 0: State <BOOLEAN>
 *
 * Return Value:
 * None
 *
 * Example:
 * [true] call Server_RadioToggle;
 *
 * Public: Yes
 */
params ["state", "player"];

_this select 1 setVariable ["radioToggle", _this select 0];

if (_this select 0) then {
	hint "Radio Enabled"; 
	playSound "RadioOn";
} else {
	hint "Radio Disabled";
	playSound "RadioOff";
};