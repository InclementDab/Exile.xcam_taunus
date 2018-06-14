/*
*
* Author: InclementDeath
*
* Description: Totally seperate config file because the dudes that wrote CDAH didnt know what the term "formatting" meant
*
*
*/

#include "CDAH\CDAH_Vehicle_recipies_config.hpp"

class CfgInteractionModels
{
	class FuelVehicle
	{
		name = "RefuelVehicle";
		models[] = 
		{
			"truck_03_fuel_f.p3d",
			"truck_01_fuel_f.p3d",
			"truck_02_fuel_f.p3d",
			"van_fuel_guerilla02.p3d",
			"van_fuel_black.p3d",
			"van_fuel_white.p3d",
			"van_fuel_red.p3d",
			"van_fuel_guerilla01.p3d",
			"van_fuel_guerilla03.p3d",
			"van_01_fuel_f.p3d",
			"van_01_fuel_white_F.p3d",
			"van_01_fuel_red_F.p3d",
			"van_01_fuel_white_v2_f.p3d",
			"van_01_fuel_red_v2_f.p3d"			
		};
	};
			
	class RepairVehicle
	{
		name = "RepairVehicle";
		models[] = 
		{
			"truck_01_box_f.p3d",
			"truck_02_box_f.p3d",
			"truck_03_repair_f.p3d",
			"offroad_repair_white.p3d",
			"offroad_repair_beige.p3d",
			"offroad_repair_blue.p3d",
			"offroad_repair_guerilla01.p3d",
			"offroad_repair_guerilla02.p3d",
			"offroad_repair_guerilla03.p3d",
			"offroad_repair_guerilla04.p3d",
			"offroad_repair_guerilla05.p3d",
			"offroad_repair_guerilla06.p3d",
			"offroad_repair_guerilla07.p3d",
			"offroad_repair_guerilla08.p3d",
			"offroad_repair_guerilla09.p3d",
			"offroad_repair_guerilla10.p3d",
			"offroad_repair_guerilla11.p3d",
			"offroad_repair_guerilla12.p3d",
			"offroad_repair_civillian.p3d",
			"offroad_repair_bluecustom.p3d",
			"offroad_repair_darkred.p3d",
			"offroad_01_repair_civ_f.p3d"
		};
	};
		
	class AmmoVehicle{
		name = "AmmoVehicle";
		models[] = 
		{
			"truck_01_box_f.p3d",
			"truck_02_box_f.p3d",
			"truck_03_box_f.p3d"		
		};
	};
			
		//CDAH_craft_devices
	class Craftingbox
	{
		name = "Craftingbox";
		models[] = 	
		{
			"cargonet_01_box_f.p3d"
		};
	}; 
	
	class Anvil
	{
		name = "Anvil";
		models[]=
		{
			"anvil.p3d"
		};
	};
		
	class DataTerminal
	{
		name = "DataTerminal";
		models[] = 	
		{
			"dataterminal_01_f.p3d"
		};
	}; 
	
	class ToolTrolley
	{
		name = "ToolTrolley";
		models[] = 	
		{
			"tooltrolley_02_f.p3d"
		};
	};
		
	class WeldingTrolley
	{
		name = "WeldingTrolley";
		models[] = 	
		{
			"weldingtrolley_01_f.p3d"
		};
	};
	
	class EngineCrane
	{
		name = "EngineCrane";
		models[] = 	
		{
			"enginecrane_01_f.p3d"
		};
	};
		
	class DieselUnit
	{
		name = "DieselUnit";
		models[] = 	
		{
			"dieselgroundpowerunit_01_f.p3d"
		};
	};
	
	class SolarPanel
	{
		name = "SolarPanel";
		models[] = 	
		{
			"spp_mirror_f.p3d"
		};
	};
		
	class Transformator
	{
		name = "Transformator";
		models[] = 	
		{
			"dp_transformer_f.p3d"
		};
	};
		
	class RepairContainer
	{
		name = "RepairContainer";
		models[] = 	
		{
			"slingload_01_repair_f.p3d"
		};
	};
		
	class RefuelContainer
	{
		name = "RefuelContainer";
		models[] = 	
		{
			"slingload_01_fuel_f.p3d"
		};
	};
	
	class EngineStarter
	{
		name = "EngineStarter";
		models[] = 	
		{
			"jetenginestarter_01_f.p3d"
		};
	};
			
	class AmmoContainer
	{
		name = "AmmoContainer";
		models[] = 	
		{
		"slingload_01_ammo_f.p3d"
		};
	};
};



class CfgInteractionMenu
{
	class Tank 
	{
		targetType=2;
		target="Tank";
		class Actions
		{
			
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
				action = "_this call ExileClient_object_lock_scan";
			};
			
			class Lock: ExileAbstractAction
			{
				title = "Lock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};
		
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};
		
			class Repair: ExileAbstractAction
			{
				title = "Repair";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
			
			class Rearm: ExileAbstractAction
			{
            title = "Rearm";
            condition = "!(magazinesAllTurrets _this isEqualto [])"; //condition = "!(_this magazinesAllTurrets isEqualto [])";
            action = "['RearmVehicle', _this select 0] call ExileClient_action_execute";
			};	
			class Hotwire: ExileAbstractAction
			{
				title = "Hotwire";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			};			
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};
		
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};
		
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
			class Repair: ExileAbstractAction //Bones Custom Vehicle Repairs
			{
				title = "Repair/Salvage";
				condition = "true";
				action = "_this call Bones_fnc_salvageAndRepairMenu";
			};	
			class Rearm: ExileAbstractAction
			{
				title = "Rearm";
				condition = "!(magazinesAllTurrets _this isEqualto [])"; //condition = "!(_this magazinesAllTurrets isEqualto [])";
				action = "['RearmVehicle', _this select 0] call ExileClient_action_execute";
			};
		};
	};
};


class CfgExileDelayedActions 
{
	class Abstract 
	{
		duration = 10;
		abortInCombatMode = 1;
		durationFunction = "";
		animation = "";
		animationType = "switchMove";
		failChance = 0;
		conditionFunction = "";
		completedFunction = "";
		abortedFunction = "";
		failedFunction = "";
	};
	 
	 class RearmVehicle: Abstract 
	 {
        duration = 30;
        animation = "Exile_Acts_RepairVehicle01_Animation01";
        conditionFunction = "CDAH_ExileClient_action_rearmVehicle_condition";
        completedFunction = "CDAH_ExileClient_action_rearmVehicle_completed";
    };

	class RepairVehicle: Abstract 
	{
		duration = 37;
		animation = "Exile_Acts_RepairVehicle01_Animation01";
		conditionFunction = "ExileClient_action_repairVehicle_condition";
		completedFunction = "ExileClient_action_repairVehicle_completed";
	};

	class HotwireVehicle: Abstract 
	{
		duration = "3 * 60";
		failChance = 50;
		animation = "Exile_Acts_RepairVehicle01_Animation01";
		conditionFunction = "ExileClient_action_hotwireVehicle_condition";
		completedFunction = "ExileClient_action_hotwireVehicle_completed";
		failedFunction = "ExileClient_action_hotwireVehicle_failed";
	};

	class StealFlag: Abstract 
	{
		duration = 60;
		abortInCombatMode = 0;
		durationFunction = "ExileClient_action_stealFlag_duration";
		animation = "Exile_Acts_RepairVehicle01_Animation01";
		conditionFunction = "ExileClient_action_stealFlag_condition";
		completedFunction = "ExileClient_action_stealFlag_completed";
	};

	class HideBody: Abstract 
	{
		duration = 10;
		animation = "Exile_Shovel_Dig01";
		conditionFunction = "ExileClient_action_HideBody_condition";
		completedFunction = "ExileClient_action_HideBody_completed";
	};

	class PlantChargeWood: Abstract 
	{
		duration = "3 * 60";
		abortInCombatMode = 0;
		animation = "Exile_Acts_RepairVehicle01_Animation01";
		conditionFunction = "ExileClient_action_breaching_condition";
		completedFunction = "ExileClient_action_breaching_completed";
		failedFunction = "ExileClient_action_breaching_failed";
		abortedFunction = "ExileClient_action_breaching_aborted";
	};

	class PlantChargeMetal: PlantChargeWood 
	{
		duration = "5 * 60";
	};

	class PlantChargeConcrete: PlantChargeWood 
	{
		duration = "7 * 60";
	};

	class RepairConstruction: Abstract 
	{
		animation = "Exile_Acts_RepairVehicle01_Animation01";
		durationFunction = "ExileClient_action_repairConstruction_duration";
		conditionFunction = "ExileClient_action_repairConstruction_condition";
		completedFunction = "ExileClient_action_repairConstruction_completed";
	};
};  


class CDAH_Craftbox: Exile_AbstractCraftingRecipe
{
	name = "Craftbox";
	pictureItem = "CDAH_CargoNet_Kit";
	returnedItems[] = 
	{
		{1, "CDAH_CargoNet_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	requiredBaseLevel = 2;
	tools[] = 
		{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
		};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_StorageCrateKit"},
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_CamoTentKit"}
	};
};		
	
class CDAH_Terminal: Exile_AbstractCraftingRecipe  
{
    name = "Terminal";
    pictureItem = "CDAH_DataTerminal_Kit";
    returnedItems[] =
    {
        {1, "CDAH_DataTerminal_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "Craftingbox";
	requiredBaseLevel = 3;
	tools[] = 
		{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Pliers"
		};
    components[] =
    {
		{2, "Exile_Item_MetalBoard"},
        {2, "Exile_Item_Laptop"},
		{1, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_Foolbox"},
		{1, "Exile_Item_CodeLock"}
    };
};	

class CDAH_Tooltrolley: Exile_AbstractCraftingRecipe  
{
    name = "Tooltrolley";
    pictureItem = "CDAH_ToolTrolley_Kit";
    returnedItems[] =
    {
        {1, "CDAH_ToolTrolley_Kit"}
    };
    requiresFire = 1;
    requiredInteractionModelGroup = "DataTerminal";
	requiredBaseLevel = 3;
	tools[] = 
		{
		"Exile_Item_Hammer",
		"Exile_Item_Wrench",
		"Exile_Item_OilCanister",
		"Exile_Item_Grinder"
		};
    components[] =
    {
        {2, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_DuctTape"},
		{2, "Exile_Item_ZipTie"},
		{2, "Exile_Item_Foolbox"}
    };
};	

class CDAH_Weldingtrolley: Exile_AbstractCraftingRecipe  
{
    name = "Weldingtrolley";
    pictureItem = "CDAH_WeldingTrolley_Kit";
    returnedItems[] =
    {
        {1, "CDAH_WeldingTrolley_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "ToolTrolley";
	requiredBaseLevel = 4;
	tools[] = 
		{
		"Exile_Item_Hammer",
		"Exile_Item_Wrench",
		"Exile_Item_OilCanister",
		"Exile_Item_Grinder"
		};
    components[] =
	{
        {2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_Metalpole"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_DuctTape"},
		{1, "Exile_Item_ZipTie"},
		{2, "Exile_Item_Foolbox"}
    };
};	

class CDAH_Crane: Exile_AbstractCraftingRecipe  
{
    name = "Crane";
    pictureItem = "CDAH_EngineCrane_Kit";
    returnedItems[] =
    {
        {1, "CDAH_EngineCrane_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "WeldingTrolley";
	requiredBaseLevel = 4;
	tools[] = 
		{
		"Exile_Item_Hammer",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_OilCanister",
		"Exile_Item_Grinder"
		};
    components[] =
    {
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_Metalpole"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_DuctTape"},
		{1, "Exile_Item_ZipTie"}			
    };
};	

class CDAH_DieselGroundPowerUnit: Exile_AbstractCraftingRecipe
{
	name = "Diesel Ground Power Unit";
	pictureItem = "CDAH_DieselGroundPowerUnit_Kit";
	returnedItems[] = 
	{
		{1, "CDAH_DieselGroundPowerUnit_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "EngineCrane";
	requiredBaseLevel = 4;
	tools[] = 
		{
		"Exile_Item_Hammer",
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_OilCanister",
		"Exile_Item_Grinder"
		};
    components[] =
    {
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_Metalpole"},
		{2, "Exile_Item_MetalBoard"},
		{2, "CDAH_engine_item"},
		{1, "Exile_Item_ZipTie"},
		{3, "Exile_Item_Carwheel"},
		{4, "Exile_Item_FuelCanisterFull"},
		{1, "CDAH_exhaust_item"},
		{2, "CDAH_CarBattery_item"}
    };
};	

class CDAH_Solarpanel: Exile_AbstractCraftingRecipe
{
	name = "Solarpanel";
	pictureItem = "CDAH_spp_Mirror_Kit";
	returnedItems[] = 
	{
		{1, "CDAH_spp_Mirror_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "DieselUnit";
	requiredBaseLevel = 5;
	tools[] = 
		{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
		};
    components[] =
    {
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_Metalpole"},
		{2, "Exile_Item_MetalBoard"},
		{4, "CDAH_car_glass_item"},
		{1, "Exile_Item_ZipTie"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_DuctTape"},
		{2, "Exile_Item_ExtensionCord"}
    };
};		

class CDAH_Transformer: Exile_AbstractCraftingRecipe
{
	name = "Transformer";
	pictureItem = "CDAH_dp_transformer_Kit";
	returnedItems[] = 
	{
		{1, "CDAH_dp_transformer_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "SolarPanel";
	requiredBaseLevel = 5;
	tools[] = 
		{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer",
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
		};
    components[] =
    {
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_Metalpole"},
		{2, "Exile_Item_MetalBoard"},
		{2, "CDAH_TruckBattery_item"},
		{1, "Exile_Item_ZipTie"},
		{2, "Exile_Item_Cement"},
		{1, "Exile_Item_DuctTape"},
		{3, "Exile_Item_ExtensionCord"}
    };
};		
	

class CDAH_SlingloadRepair: Exile_AbstractCraftingRecipe
{
	name = "Repaircontainer";
	pictureItem = "CDAH_Repair_Kit";
	returnedItems[] = 
	{
		{1, "CDAH_Repair_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "Transformator";
	requiredInteractionVehicleGroup = "RepairVehicle";
	requiredBaseLevel = 6;
	tools[] = 
		{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer",
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
		};
    components[] =
    {
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_Metalpole"},
		{3, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_ZipTie"},
		{1, "Exile_Item_CodeLock"},
		{1, "Exile_Item_DuctTape"},
		{5, "Exile_Item_Foolbox"}
    };
};	


class CDAH_SlingloadFuel: Exile_AbstractCraftingRecipe
{
	name = "Fuelcontainer";
	pictureItem = "CDAH_Fuel_Kit";
	returnedItems[] = 
	{
		{1, "CDAH_Fuel_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "RepairContainer";
	requiredInteractionVehicleGroup = "FuelVehicle";
	requiredBaseLevel = 7;
	tools[] = 
		{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer",
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
		};
    components[] =
    {
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_Metalpole"},
		{3, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_ZipTie"},
		{1, "Exile_Item_CodeLock"},
		{1, "Exile_Item_DuctTape"},
		{5, "Exile_Item_FuelCanisterFull"}
    };
};

class CDAH_EngineStarter: Exile_AbstractCraftingRecipe
{
	name = "Engine Starter";
	pictureItem = "CDAH_JetEngine_Kit";
	returnedItems[] = 
	{
		{1, "CDAH_JetEngine_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "RefuelContainer";
	requiredBaseLevel = 8;
	tools[] = 
		{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer",
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
		};
    components[] =
    {
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_Carwheel"},
		{3, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_ZipTie"},
		{2, "CDAH_CarBattery_item"},
		{1, "Exile_Item_DuctTape"},
		{1, "CDAH_engine_item"},
		{1, "CDAH_exhaust_item"},
		{1, "Exile_Item_Laptop"}
    };
};	

class CDAH_SlingloadAmmo: Exile_AbstractCraftingRecipe
{
	name = "Ammocontainer";
	pictureItem = "CDAH_Ammo_Kit";
	returnedItems[] = 
	{
		{1, "CDAH_Ammo_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "EngineStarter";
	requiredInteractionVehicleGroup = "AmmoVehicle";
	requiredBaseLevel = 8;
	tools[] = 
		{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer",
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
		};
    components[] =
    {
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_Metalpole"},
		{3, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_ZipTie"},
		{1, "Exile_Item_CodeLock"},
		{1, "Exile_Item_DuctTape"},
		{5, "CDAH_Ammo_Mold_item"},
		{10, "CDAH_Gun_Powder_item"}
    };
};	