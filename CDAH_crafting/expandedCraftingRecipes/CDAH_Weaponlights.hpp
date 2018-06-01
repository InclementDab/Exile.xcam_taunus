class Craft_FlashlightRifle: Exile_AbstractCraftingRecipe
{
    name = "Craft Rifle Flashlight";
    pictureItem = "acc_flashlight";
    requiresFire = 0;		
    returnedItems[] = 
    {
        {1, "acc_flashlight"}
    };
    components[] = 
    {
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_Can_Empty"}
    };
	category = "Weapons & Ammo";
};
class Craft_FlashlightHandgun: Exile_AbstractCraftingRecipe
{
    name = "Craft Handgun Flashlight";
    pictureItem = "acc_mas_flash_gun";
    requiresFire = 0;		
    returnedItems[] = 
    {
        {1, "acc_mas_flash_gun"}
    };
    components[] = 
    {
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_Can_Empty"}
    };
	category = "Weapons & Ammo";
};
class Craft_Sledgehammer: Exile_AbstractCraftingRecipe
{
    name = "Craft Sledgehammer";
    pictureItem = "Exile_Melee_SledgeHammmer";
    requiresFire = 0;	
	tools[] = 
	{
		"Exile_Item_Knife",
		"Exile_Item_Screwdriver"
	};	
    returnedItems[] = 
    {
        {1, "Exile_Melee_SledgeHammmer"}
    };
    components[] = 
    {
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
    };
	category = "Weapons & Ammo";
};