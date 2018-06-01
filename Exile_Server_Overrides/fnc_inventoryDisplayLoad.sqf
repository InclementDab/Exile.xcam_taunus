/*
 * Author: commy2
 * Executed every time an inventory display is opened.
 *
 * Arguments:
 * 0: Inventory display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [DISPLAY] call ACE_inventory_fnc_inventoryDisplayLoad
 *
 * Public: No
 */
#include "script_component.hpp"

disableSerialization;
params ["_display"];
