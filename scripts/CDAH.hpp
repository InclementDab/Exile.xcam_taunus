#include "CDAH_crafting\vehicleRecipes\CDAH_Vehicle_recipies_config.hpp"

class CfgCraftingRecipies
{
	#include "CDAH_crafting\deviceRecipes\CDAH_Device_recipies.hpp"
	#include "CDAH_crafting\expandedCraftingRecipes\CDAH_ExpandedCrafting_config.hpp"
};

class CfgExileCustomCode
{
	// CDAH CRAFTING Overwrite
	ExileClient_object_item_craft =							"CDAH_crafting\logic\CDAH_ExileClient_object_item_craft.sqf"; 
	ExileClient_gui_crafting_show =							"CDAH_crafting\logic\CDAH_ExileClient_gui_crafting_show.sqf";
	ExileServer_object_vehicle_carefulCreateVehicle =		"CDAH_crafting\logic\CDAH_ExileServer_object_vehicle_carefulCreateVehicle.sqf";
				
	// CDAH Rearm Vehicles (for Vehicle rearming)
	ExileClient_action_execute =                            "CDAH_crafting\logic\CDAH_ExileClient_action_execute.sqf";
};

class CfgInteractionMenus
{
	#include "CDAH_crafting\logic\CDAH_Class_tank.hpp"
};

class CfgInteractionModels
{
	#include "CDAH_crafting\logic\CDAH_interactionModels.hpp"
};