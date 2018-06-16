/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Rashmandash, Yesyesjo
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 *
 * www.cdah-gaming.com
 */


 //categorie: Supply Vehicles (Random)

//Repair
class Repair_1: CDAH_AbstractCraftingRecipe
	{
		name = "Zamak Repair Hex Green";
		pictureItem = "I_Truck_02_box_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "I_Truck_02_box_F"}
		};
		components[] = 
		{
			{3, "Exile_Item_MetalBoard"},
			{3, "Exile_Item_JunkMetal"},
			{3, "CDAH_crank_shaft_item"},
			{2, "CDAH_TruckBattery_item"},
			{3, "CDAH_carlamp_item"},
			{3, "CDAH_engine_item"},
			{3, "CDAH_piston_item"},
			{3, "Exile_Item_MetalScrews"},
			{2, "CDAH_car_seat_item"},
			{3, "Exile_Item_MetalPole"},
			{20, "Exile_Item_DuctTape"},
			{6, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench",
			"Exile_Item_Grinder",
			"Exile_Item_Pliers",
			"Exile_Item_Hammer"
		};
		requiredInteractionModelGroup = "RepairContainer";
		
		categorie = "Supply Vehicles";
	};
	
class Repair_2: CDAH_AbstractCraftingRecipe
	{
		name = "Tempest Repair Hex DarkGreen";
		pictureItem = "O_T_Truck_03_repair_ghex_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "O_T_Truck_03_repair_ghex_F"}
		};
		components[] = 
		{
			{3, "Exile_Item_MetalBoard"},
			{3, "Exile_Item_JunkMetal"},
			{3, "CDAH_crank_shaft_item"},
			{2, "CDAH_TruckBattery_item"},
			{3, "CDAH_carlamp_item"},
			{3, "CDAH_engine_item"},
			{3, "CDAH_piston_item"},
			{3, "Exile_Item_MetalScrews"},
			{2, "CDAH_car_seat_item"},
			{3, "Exile_Item_MetalPole"},
			{20, "Exile_Item_DuctTape"},
			{6, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench",
			"Exile_Item_Grinder",			
			"Exile_Item_Pliers",
			"Exile_Item_Hammer"
		};
		requiredInteractionModelGroup = "RepairContainer";
		
		categorie = "Supply Vehicles";
	};
	
class Repair_3: CDAH_AbstractCraftingRecipe
	{
		name = "Offroad Repair Civil";
		pictureItem = "Exile_Car_Offroad_Repair_Civillian";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "Exile_Car_Offroad_Repair_Civillian"}
		};
		components[] = 
		{
			{4, "Exile_Item_MetalBoard"},
			{2, "CDAH_crank_shaft_item"},
			{1, "CDAH_CarBattery_item"},
			{2, "CDAH_carlamp_item"},
			{1, "CDAH_engine_item"},
			{1, "CDAH_piston_item"},
			{2, "CDAH_car_glass_item"},
			{2, "Exile_Item_MetalScrews"},
			{2, "CDAH_car_seat_item"},
			{20, "Exile_Item_DuctTape"},
			{4, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench",
			"Exile_Item_Grinder",
			"Exile_Item_Pliers"
		};
		requiredInteractionModelGroup = "RepairContainer";
		
		categorie = "Supply Vehicles";
	};
	
class Repair_4: CDAH_AbstractCraftingRecipe
	{
		name = "Offroad Repair Camo";
		pictureItem = "Exile_Car_Offroad_Repair_Guerilla09";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "Exile_Car_Offroad_Repair_Guerilla09"}
		};
		components[] = 
		{
			{4, "Exile_Item_MetalBoard"},
			{2, "CDAH_crank_shaft_item"},
			{1, "CDAH_CarBattery_item"},
			{2, "CDAH_carlamp_item"},
			{1, "CDAH_engine_item"},
			{1, "CDAH_piston_item"},
			{2, "CDAH_car_glass_item"},
			{2, "Exile_Item_MetalScrews"},
			{2, "CDAH_car_seat_item"},
			{20, "Exile_Item_DuctTape"},
			{4, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench",
			"Exile_Item_Grinder",
			"Exile_Item_Pliers"
		};
		requiredInteractionModelGroup = "RepairContainer";
		
		categorie = "Supply Vehicles";
	};
	
//Refuel
class Refuel_1: CDAH_AbstractCraftingRecipe
	{
		name = "Zamak Refuel Civil";
		pictureItem = "C_Truck_02_fuel_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "C_Truck_02_fuel_F"}
		};
		components[] = 
		{
			{3, "Exile_Item_MetalBoard"},
			{3, "Exile_Item_JunkMetal"},
			{3, "CDAH_crank_shaft_item"},
			{2, "CDAH_TruckBattery_item"},
			{3, "CDAH_carlamp_item"},
			{3, "CDAH_engine_item"},
			{3, "CDAH_piston_item"},
			{3, "Exile_Item_MetalScrews"},
			{2, "CDAH_car_seat_item"},
			{3, "Exile_Item_MetalPole"},
			{20, "Exile_Item_FuelCanisterFull"},
			{6, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench",
			"Exile_Item_Grinder",			
			"Exile_Item_Pliers",
			"Exile_Item_Hammer"
		};
		requiredInteractionModelGroup = "RefuelContainer";
		
		categorie = "Supply Vehicles";
	};
	
class Refuel_2: CDAH_AbstractCraftingRecipe
	{
		name = "Zamak Refuel Hex Green";
		pictureItem = "I_Truck_02_fuel_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "I_Truck_02_fuel_F"}
		};
		components[] = 
		{
			{3, "Exile_Item_MetalBoard"},
			{3, "Exile_Item_JunkMetal"},
			{3, "CDAH_crank_shaft_item"},
			{2, "CDAH_TruckBattery_item"},
			{3, "CDAH_carlamp_item"},
			{3, "CDAH_engine_item"},
			{3, "CDAH_piston_item"},
			{3, "Exile_Item_MetalScrews"},
			{2, "CDAH_car_seat_item"},
			{3, "Exile_Item_MetalPole"},
			{20, "Exile_Item_FuelCanisterFull"},
			{6, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench",
			"Exile_Item_Grinder",
			"Exile_Item_Pliers",
			"Exile_Item_Hammer"
		};
		requiredInteractionModelGroup = "RefuelContainer";
		
		categorie = "Supply Vehicles";
	};
	
class Refuel_3: CDAH_AbstractCraftingRecipe
	{
		name = "Van Refuel Civil";
		pictureItem = "C_Van_01_fuel_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "C_Van_01_fuel_F"}
		};
		components[] = 
		{
			{4, "Exile_Item_MetalBoard"},
			{1, "CDAH_CarBattery_item"},
			{2, "CDAH_carlamp_item"},
			{1, "CDAH_exhaust_item"},
			{1, "CDAH_engine_item"},
			{1, "CDAH_crank_shaft_item"},
			{1, "CDAH_piston_item"},
			{3, "CDAH_car_seat_item"},
			{20, "Exile_Item_FuelCanisterFull"},
			{4, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench"
		};
		requiredInteractionModelGroup = "RefuelContainer";
		
		categorie = "Supply Vehicles";
	};
	
class Refuel_4: CDAH_AbstractCraftingRecipe
	{
		name = "Van Refuel Civil";
		pictureItem = "O_G_Van_01_fuel_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "O_G_Van_01_fuel_F"}
		};
		components[] = 
		{
			{4, "Exile_Item_MetalBoard"},
			{1, "CDAH_CarBattery_item"},
			{2, "CDAH_carlamp_item"},
			{1, "CDAH_exhaust_item"},
			{1, "CDAH_engine_item"},
			{1, "CDAH_crank_shaft_item"},
			{1, "CDAH_piston_item"},
			{3, "CDAH_car_seat_item"},
			{20, "Exile_Item_FuelCanisterFull"},
			{4, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench"
		};
		requiredInteractionModelGroup = "RefuelContainer";
		
		categorie = "Supply Vehicles";
	};
	
class Refuel_5: CDAH_AbstractCraftingRecipe
	{
		name = "Tempest Refuel Civil";
		pictureItem = "O_T_Truck_03_fuel_ghex_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "O_T_Truck_03_fuel_ghex_F"}
		};
		components[] = 
		{
			{3, "Exile_Item_MetalBoard"},
			{3, "Exile_Item_JunkMetal"},
			{3, "CDAH_crank_shaft_item"},
			{2, "CDAH_TruckBattery_item"},
			{3, "CDAH_carlamp_item"},
			{3, "CDAH_engine_item"},
			{3, "CDAH_piston_item"},
			{3, "Exile_Item_MetalScrews"},
			{2, "CDAH_car_seat_item"},
			{3, "Exile_Item_MetalPole"},
			{20, "Exile_Item_FuelCanisterFull"},
			{6, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench",
			"Exile_Item_Grinder",			
			"Exile_Item_Pliers",
			"Exile_Item_Hammer"
		};
		requiredInteractionModelGroup = "RefuelContainer";
		
		categorie = "Supply Vehicles";
	};
	
//Ammo
class Rearm_1: CDAH_AbstractCraftingRecipe
	{
		name = "Zamak Rearm Hex";
		pictureItem = "O_Truck_02_Ammo_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "O_Truck_02_Ammo_F"}
		};
		components[] = 
		{
			{3, "Exile_Item_MetalBoard"},
			{3, "Exile_Item_JunkMetal"},
			{3, "CDAH_crank_shaft_item"},
			{2, "CDAH_TruckBattery_item"},
			{3, "CDAH_carlamp_item"},
			{3, "CDAH_engine_item"},
			{3, "CDAH_piston_item"},
			{3, "Exile_Item_MetalScrews"},
			{2, "CDAH_car_seat_item"},
			{3, "Exile_Item_MetalPole"},
			{20, "CDAH_Gun_Powder_item"},
			{15, "CDAH_Ammo_Mold_item"},
			{6, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench",
			"Exile_Item_Grinder",			
			"Exile_Item_Pliers",
			"Exile_Item_Hammer"
		};
		requiredInteractionModelGroup = "AmmoContainer";
		
		categorie = "Supply Vehicles";
	};
	
class Rearm_2: CDAH_AbstractCraftingRecipe
	{
		name = "Tempest Rearm Hex Green";
		pictureItem = "O_T_Truck_03_ammo_ghex_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "O_T_Truck_03_ammo_ghex_F"}
		};
		components[] = 
		{
			{3, "Exile_Item_MetalBoard"},
			{3, "Exile_Item_JunkMetal"},
			{3, "CDAH_crank_shaft_item"},
			{2, "CDAH_TruckBattery_item"},
			{3, "CDAH_carlamp_item"},
			{3, "CDAH_engine_item"},
			{3, "CDAH_piston_item"},
			{3, "Exile_Item_MetalScrews"},
			{2, "CDAH_car_seat_item"},
			{3, "Exile_Item_MetalPole"},
			{20, "CDAH_Gun_Powder_item"},
			{15, "CDAH_Ammo_Mold_item"},
			{6, "Exile_Item_Carwheel"}
		};
		tools[] = 
		{
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_Wrench",
			"Exile_Item_Grinder",			
			"Exile_Item_Pliers",
			"Exile_Item_Hammer"
		};
		requiredInteractionModelGroup = "AmmoContainer";
		
		categorie = "Supply Vehicles";
	};
