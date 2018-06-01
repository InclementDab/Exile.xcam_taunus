/**
 * ExileClient_object_player_event_onInventoryOpened
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

params ["_player","_container"];

private _cancelEvent = false;

try 
{
	if (ExileIsPlayingRussianRoulette) throw true;
	if (ExileClientIsHandcuffed) throw true;
	if (ExileClientActionDelayShown) throw true;
	if (ExileClientIsInConstructionMode) throw true;
	if ((locked _container) isEqualTo 2) throw true;
	if (_container getVariable ["ExileIsLocked", 1] isEqualTo -1) throw true;
	
	// Engima revive..
	//if (_container getVariable ["antidupe", 1] == -1) throw true;

	/*
		SM_SafezonePlus
	*/
	private _doTheDo =
	{
		["ErrorTitleAndText", ["Access Denied!", "You need to be in the vehicle to access the inventory!"]] call ExileClient_gui_toaster_addTemplateToast;
		throw true;
	};
	if (player call ExileClient_util_world_isInTraderZone) then
	{
		if ((vehicle player) == player) then
		{
			switch (true) do
			{
				case (_container isKindOf "LandVehicle"): _doTheDo;
				case (_container isKindOf "Air"): _doTheDo;
				case (_container isKindOf "Ship"): _doTheDo;
				case (_secondaryContainer isKindOf "LandVehicle"): _doTheDo;
				case (_secondaryContainer isKindOf "Air"): _doTheDo;
				case (_secondaryContainer isKindOf "Ship"): _doTheDo;
				default {};
			};
		};
	};
	/*
		SM_SafezonePlus
	*/

	ExileClientInventoryOpened = true;
	ExileClientCurrentInventoryContainer = _container;
}
catch 
{
	_cancelEvent = _exception;
};
_cancelEvent