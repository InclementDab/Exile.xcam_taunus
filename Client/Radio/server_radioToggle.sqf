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

player setVariable ["RadioToggle", _this, true];

if (_this) then {
	hint "Radio Enabled"; 
	playSound "RadioOn";
} else {
	hint "Radio Disabled";
	playSound "RadioOff";
};