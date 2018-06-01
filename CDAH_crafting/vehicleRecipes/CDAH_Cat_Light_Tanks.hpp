/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Rashmandash, Yesyesjo
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 *
 * www.cdah-gaming.com
 */


//categorie:  Light Tanks (AmmoContainer)

//Mora
class Mora: CDAH_AbstractCraftingRecipe
	{
		name = "Mora 30mm HMG";
		pictureItem = "I_APC_tracked_03_cannon_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "I_APC_tracked_03_cannon_F"}
		};
		components[] = 
		{
			{20, "Exile_Item_MetalBoard"},
			{10, "Exile_Item_JunkMetal"},
			{5, "CDAH_crank_shaft_item"},
			{4, "CDAH_TruckBattery_item"},
			{6, "CDAH_carlamp_item"},
			{6, "CDAH_engine_item"},
			{6, "CDAH_piston_item"},
			{6, "Exile_Item_MetalScrews"},
			{4, "CDAH_car_seat_item"},
			{9, "Exile_Item_MetalPole"},
			{18, "CDAH_Projectiles_item"},
			{25, "CDAH_Gun_Powder_item"},
			{4, "Exile_Item_Laptop"},
			{8, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench",
			"Exile_Item_Grinder",
			"Exile_Item_Hammer",
			"Exile_Item_Pliers"
		};
		requiredInteractionModelGroup = "AmmoContainer";
		
		categorie = "Level J - Light Tanks";
	};
	
//Bobcat
class Bobcat: CDAH_AbstractCraftingRecipe
	{
		name = "Bobcat Supply Tank 6.5mm MG";
		pictureItem = "B_APC_Tracked_01_CRV_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "B_APC_Tracked_01_CRV_F"}
		};
		components[] = 
		{
			{19, "Exile_Item_MetalBoard"},
			{9, "Exile_Item_JunkMetal"},
			{5, "CDAH_crank_shaft_item"},
			{4, "CDAH_TruckBattery_item"},
			{6, "CDAH_carlamp_item"},
			{6, "CDAH_engine_item"},
			{6, "CDAH_piston_item"},
			{6, "Exile_Item_MetalScrews"},
			{4, "CDAH_car_seat_item"},
			{9, "Exile_Item_MetalPole"},
			{9, "CDAH_Projectiles_item"},
			{15, "CDAH_Gun_Powder_item"},
			{4, "Exile_Item_Laptop"},
			{9, "Exile_Item_DuctTape"},
			{7, "Exile_Item_FuelCanisterFull"},
			{8, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench",
			"Exile_Item_Grinder",
			"Exile_Item_Hammer",
			"Exile_Item_Pliers"
		};
		requiredInteractionModelGroup = "AmmoContainer";
		
		categorie = "Level J - Light Tanks";
	};
	
//Panther
class Panther: CDAH_AbstractCraftingRecipe
	{
		name = "Panther 40mm GMG";
		pictureItem = "B_APC_Tracked_01_rcws_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "B_APC_Tracked_01_rcws_F"}
		};
		components[] = 
		{
			{20, "Exile_Item_MetalBoard"},
			{10, "Exile_Item_JunkMetal"},
			{5, "CDAH_crank_shaft_item"},
			{4, "CDAH_TruckBattery_item"},
			{6, "CDAH_carlamp_item"},
			{6, "CDAH_engine_item"},
			{6, "CDAH_piston_item"},
			{6, "Exile_Item_MetalScrews"},
			{4, "CDAH_car_seat_item"},
			{9, "Exile_Item_MetalPole"},
			{20, "CDAH_Projectiles_item"},
			{27, "CDAH_Gun_Powder_item"},
			{4, "Exile_Item_Laptop"},
			{8, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench",
			"Exile_Item_Grinder",
			"Exile_Item_Hammer",
			"Exile_Item_Pliers"
		};
		requiredInteractionModelGroup = "AmmoContainer";
		
		categorie = "Level J - Light Tanks";
	};
	
//Kamysh
class Kamysh_01: CDAH_AbstractCraftingRecipe
	{
		name = "Kamysh 30mm HMG Hex Brown";
		pictureItem = "O_APC_Tracked_02_cannon_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "O_APC_Tracked_02_cannon_F"}
		};
		components[] = 
		{
			{19, "Exile_Item_MetalBoard"},
			{9, "Exile_Item_JunkMetal"},
			{5, "CDAH_crank_shaft_item"},
			{4, "CDAH_TruckBattery_item"},
			{6, "CDAH_carlamp_item"},
			{6, "CDAH_engine_item"},
			{6, "CDAH_piston_item"},
			{6, "Exile_Item_MetalScrews"},
			{4, "CDAH_car_seat_item"},
			{9, "Exile_Item_MetalPole"},
			{18, "CDAH_Projectiles_item"},
			{23, "CDAH_Gun_Powder_item"},
			{4, "Exile_Item_Laptop"},
			{8, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench",
			"Exile_Item_Grinder",
			"Exile_Item_Hammer",
			"Exile_Item_Pliers"
		};
		requiredInteractionModelGroup = "AmmoContainer";
		
		categorie = "Level J - Light Tanks";
	};
	
class Kamysh_02: CDAH_AbstractCraftingRecipe
	{
		name = "Kamysh 30mm HMG Hex Green";
		pictureItem = "O_T_APC_Tracked_02_cannon_ghex_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "O_T_APC_Tracked_02_cannon_ghex_F"}
		};
		components[] = 
		{
			{19, "Exile_Item_MetalBoard"},
			{9, "Exile_Item_JunkMetal"},
			{5, "CDAH_crank_shaft_item"},
			{4, "CDAH_TruckBattery_item"},
			{6, "CDAH_carlamp_item"},
			{6, "CDAH_engine_item"},
			{6, "CDAH_piston_item"},
			{6, "Exile_Item_MetalScrews"},
			{4, "CDAH_car_seat_item"},
			{9, "Exile_Item_MetalPole"},
			{18, "CDAH_Projectiles_item"},
			{23, "CDAH_Gun_Powder_item"},
			{4, "Exile_Item_Laptop"},
			{8, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench",
			"Exile_Item_Grinder",
			"Exile_Item_Hammer",
			"Exile_Item_Pliers"

		};
		requiredInteractionModelGroup = "AmmoContainer";
		
		categorie = "Level J - Light Tanks";
	};
