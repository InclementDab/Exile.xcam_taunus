/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Rashmandash, Yesyesjo
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 *
 * www.cdah-gaming.com
 */
 
class CraftJunkMetal: Exile_AbstractCraftingRecipe
{
    name = "Craft JunkMetal";
    pictureItem = "Exile_Item_JunkMetal";
    requiresFire = 1;	
	requiredInteractionModelGroup = "Anvil";	
    returnedItems[] = 
    {
        {1, "Exile_Item_JunkMetal"}
    };
    components[] = 
    {
		{20, "CDAH_Scrap_metal_item"}
    };
    tools[] = 
	{
		"Exile_Item_CookingPot",
		"Exile_Item_Hammer"
	};
	category = "Hardware & Tools";
};

class CraftCarLamp: Exile_AbstractCraftingRecipe
{
    name = "Craft Car Lamp";
    pictureItem = "CDAH_carlamp_item";
    requiresFire = 1;	
	requiredInteractionModelGroup = "Anvil";	
    returnedItems[] = 
    {
        {1, "CDAH_carlamp_item"}
    };
    components[] = 
    {
		{5, "Exile_Item_LightBulb"}
    };
    tools[] = {"Exile_Item_Hammer"};
	category = "Hardware & Tools";
};

class CraftProjectil: Exile_AbstractCraftingRecipe
{
    name = "Craft Projectils";
    pictureItem = "CDAH_Projectiles_item";
    requiresFire = 1;	
	requiredInteractionModelGroup = "Anvil";	
    returnedItems[] = 
    {
        {1, "CDAH_Projectiles_item"}
    };
    components[] = 
    {
		{1, "Exile_Item_JunkMetal"},
        {5, "CDAH_Gun_Powder_item"},
		{3, "CDAH_Cartridges_item"}
    };
    tools[] = 
	{
		"CDAH_Ammo_Mold_item",
		"Exile_Item_CookingPot",
		"Exile_Item_Hammer"
	};
	category = "Hardware & Tools";
};

class CraftCodeLock: Exile_AbstractCraftingRecipe
{
    name = "Craft CodeLock";
    pictureItem = "Exile_Item_CodeLock"; 
    returnedItems[] = 
    {
        {1, "Exile_Item_CodeLock"}
    };
    components[] = 
    {
        {2, "Exile_Item_Laptop"},
		{2, "Exile_Item_BaseCameraKit"},
		{1, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_MetalScrews"}
    };
    tools[] = {"Exile_Item_Screwdriver", "Exile_Item_Pliers"};
	category = "Hardware & Tools";
};

class CraftGrinder: Exile_AbstractCraftingRecipe
{
    name = "Craft Grinder";
    pictureItem = "Exile_Item_Grinder";
    requiresFire = 1;	
    returnedItems[] = 
    {
        {1, "Exile_Item_Grinder"}
    };
    components[] = 
    {
        {1, "Exile_Item_CordlessScrewdriver"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_ExtensionCord"}
    };
    tools[] = {"Exile_Item_Screwdriver", "Exile_Item_Pliers"};
	category = "Hardware & Tools";
};

class CraftCement: Exile_AbstractCraftingRecipe
{
    name = "Craft Cement";
    pictureItem = "Exile_Item_Cement"; 
    returnedItems[] = 
    {
        {1, "Exile_Item_Cement"}
    };
    components[] = 
    {
        {2, "Exile_Item_Sand"},
		{5, "Exile_Item_PlasticBottleDirtyWater"}
    };
    tools[] = {"Exile_Item_Shovel"};
	category = "Hardware & Tools";
};

class CraftShovel: Exile_AbstractCraftingRecipe
{
    name = "Craft Shovel";
    pictureItem = "Exile_Item_Shovel"; 
    returnedItems[] = 
    {
        {1, "Exile_Item_Shovel"}
    };
    components[] = 
    {
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_WoodPlank"}
    };
    tools[] = {"Exile_Item_Hammer"};
	category = "Hardware & Tools";
};

class CraftHandsaw: Exile_AbstractCraftingRecipe
{
    name = "Craft Handsaw";
    pictureItem = "Exile_Item_Handsaw";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {1, "Exile_Item_Handsaw"}
    };
    components[] = 
    {
		{4, "Exile_Item_Can_Empty"},
		{1, "Exile_Item_WoodLog"}
    };
    tools[] = {"Exile_Item_Pliers"};
	category = "Hardware & Tools";
};

class CraftGasmask: Exile_AbstractCraftingRecipe
{
    name = "Craft Gasmask";
    pictureItem = "Exile_Headgear_GasMask";
    requiresFire = 0;		
    returnedItems[] = 
    {
        {1, "Exile_Headgear_GasMask"}
    };
    components[] = 
    {
		{1, "Exile_Item_MetalWire"},
		{2, "Exile_Item_PlasticBottleEmpty"},
		{2, "Exile_Item_Bandage"},
		{1, "Exile_Item_ZipTie"},
		{1, "Exile_Item_CarWheel"}
    };
    tools[] = {"Exile_Item_Pliers"};
	category = "Hardware & Tools";
};

class CraftMinedetector: Exile_AbstractCraftingRecipe
{
    name = "Craft Lockpicker";
    pictureItem = "Minedetector";
    requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {1, "Minedetector"}
    };
    components[] = 
    {
		{1, "Exile_Item_Knife"},
		{1, "Exile_Item_BaseCameraKit"},
		{1, "Exile_Item_CordlessScrewdriver"},
		{1, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_DuctTape"}
    };
    tools[] = {"Exile_Item_Pliers","Exile_Item_Screwdriver"};
	category = "Hardware & Tools";
};

class CraftWaterCanisterEmpty: Exile_AbstractCraftingRecipe
{
    name = "Craft Water Canister";
    pictureItem = "Exile_Item_WaterCanisterEmpty";
    requiresFire = 0;
    returnedItems[] = 
    {
        {1, "Exile_Item_WaterCanisterEmpty"}
    };
    components[] = 
    {
		{5, "Exile_Item_PlasticBottleDirtyWater"},
		{2, "Exile_Item_ZipTie"},
		{1, "Exile_Item_DuctTape"}
    };
    tools[] = {"Exile_Item_Knife"};
	category = "Hardware & Tools";
};