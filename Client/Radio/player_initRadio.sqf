/*
 * Author: InclementDeath
 * Adds self interact option to player for radio
 *
 * Only execVM locally!
 *
 * Public: Yes
 */
 

[] execVM "Client\Radio\compiles.sqf";
 
 
if (hasInterface) exitWith {
 
	_condition = {("ItemRadio" in (assignedItems player)) && (player getVariable ["RadioToggle", true])};
	_classname = "EnableRadio";
	_name = "Enable Radio";
	_icon = "assets\ACE_Interaction_Radio_Icon.paa";
	_statement = [true] call server_radioToggle;
	_action = [_classname, _name, _icon, _statement, _condition] call ace_interact_menu_fnc_createAction;
	[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], {true}] call ace_interact_menu_fnc_addActionToClass;




	_condition2 = {("ItemRadio" in (assignedItems player)) && !(player getVariable ["RadioToggle", true])};
	_classname2 = "DisableRadio";
	_name2 = "Disable Radio";
	_statement2 = [false] call server_radioToggle;
	_action2 = [_classname2, _name2, _icon, _statement2, _condition2] call ace_interact_menu_fnc_createAction;
	[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], {true}] call ace_interact_menu_fnc_addActionToClass;
};
