/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Rashmandash, Yesyesjo
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 *
 * www.cdah-gaming.com
 */


//categorie:  Armed Planes (AmmoContainer)

//Armed Cessnar
class Cessna_armed: CDAH_AbstractCraftingRecipe
	{
		name = "Cessna Armed";
		pictureItem = "GNT_C185T";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "GNT_C185T"}
		};
		components[] = 
		{
			{4, "Exile_Item_MetalBoard"},
			{4, "Exile_Item_JunkMetal"},
			{3, "CDAH_crank_shaft_item"},
			{1, "CDAH_TruckBattery_item"},
			{1, "CDAH_CarBattery_item"},
			{2, "CDAH_carlamp_item"},
			{4, "CDAH_engine_item"},
			{4, "CDAH_piston_item"},
			{3, "Exile_Item_MetalScrews"},
			{2, "CDAH_car_seat_item"},
			{2, "Exile_Item_MetalPole"},
			{5, "CDAH_Projectiles_item"},
			{10, "CDAH_Gun_Powder_item"},
			{2, "CDAH_rotor_blade_item"}
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
		
		categorie = "Level I - Armed Planes";
	};
	
//Y-32 Xi'an
class Y_32_Xi_an_1: CDAH_AbstractCraftingRecipe
	{
		name = "Y-32 Xi'an Infantry Armed";
		pictureItem = "O_T_VTOL_02_infantry_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "O_T_VTOL_02_infantry_F"}
		};
		components[] = 
		{
			{5, "Exile_Item_MetalBoard"},
			{5, "Exile_Item_JunkMetal"},
			{3, "CDAH_crank_shaft_item"},
			{2, "CDAH_TruckBattery_item"},
			{2, "CDAH_CarBattery_item"},
			{2, "CDAH_carlamp_item"},
			{6, "CDAH_engine_item"},
			{6, "CDAH_piston_item"},
			{5, "Exile_Item_MetalScrews"},
			{2, "CDAH_car_seat_item"},
			{2, "CDAH_Projectiles_item"},
			{8, "CDAH_Gun_Powder_item"},
			{16, "Exile_Item_MetalPole"},
			{1, "Exile_Item_Laptop"},
			{6, "CDAH_rotor_blade_item"}
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
		
		categorie = "Level I - Armed Planes";
	};
	
class Y_32_Xi_an_2: CDAH_AbstractCraftingRecipe
	{
		name = "Y-32 Xi'an Vehicle Armed";
		pictureItem = "O_T_VTOL_02_vehicle_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "O_T_VTOL_02_vehicle_F"}
		};
		components[] = 
		{
			{5, "Exile_Item_MetalBoard"},
			{5, "Exile_Item_JunkMetal"},
			{3, "CDAH_crank_shaft_item"},
			{2, "CDAH_TruckBattery_item"},
			{2, "CDAH_CarBattery_item"},
			{2, "CDAH_carlamp_item"},
			{6, "CDAH_engine_item"},
			{6, "CDAH_piston_item"},
			{5, "Exile_Item_MetalScrews"},
			{2, "CDAH_car_seat_item"},
			{2, "CDAH_Projectiles_item"},
			{8, "CDAH_Gun_Powder_item"},
			{16, "Exile_Item_MetalPole"},
			{1, "Exile_Item_Laptop"},
			{6, "CDAH_rotor_blade_item"}
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
		
		categorie = "Level I - Armed Planes";
	};