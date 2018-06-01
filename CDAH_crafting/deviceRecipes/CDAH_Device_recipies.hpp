/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Rashmandash, Yesyesjo
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 *
 * www.cdah-gaming.com
 */

/* class Anvil: Exile_AbstractCraftingRecipe
{
	name = "Anvil";
	pictureItem = "CDAH_Anvil_Kit";
	returnedItems[] = 
	{
		{1, "CDAH_Anvil_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "";
	requiredBaseLevel = 0;
	components[] = 
	{
		{1, "Exile_Item_Woodlog"}
	};
};	 */	 

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