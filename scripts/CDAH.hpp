#include "scripts\CDAH_crafting\vehicleRecipes\CDAH_Vehicle_recipies_config.hpp"

class CfgCraftingRecipies
{
	#include "scripts\CDAH_crafting\deviceRecipes\CDAH_Device_recipies.hpp"
	#include "scripts\CDAH_crafting\expandedCraftingRecipes\CDAH_ExpandedCrafting_config.hpp"
};

class CfgExileCustomCode
{
	// CDAH CRAFTING Overwrite
	ExileClient_object_item_craft =							"scripts\CDAH_crafting\logic\CDAH_ExileClient_object_item_craft.sqf"; 
	ExileClient_gui_crafting_show =							"scripts\CDAH_crafting\logic\CDAH_ExileClient_gui_crafting_show.sqf";
	ExileServer_object_vehicle_carefulCreateVehicle =		"scripts\CDAH_crafting\logic\CDAH_ExileServer_object_vehicle_carefulCreateVehicle.sqf";
				
	// CDAH Rearm Vehicles (for Vehicle rearming)
	ExileClient_action_execute =                            "scripts\CDAH_crafting\logic\CDAH_ExileClient_action_execute.sqf";
};

class CfgInteractionMenus
{
	#include "scripts\CDAH_crafting\logic\CDAH_Class_tank.hpp"
};

class CfgInteractionModels
{
	#include "scripts\CDAH_crafting\logic\CDAH_interactionModels.hpp"
};