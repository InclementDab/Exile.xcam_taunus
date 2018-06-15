class CfgInteractionModels
{
	
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",

			// Namalsk
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud",
			
			//Tanoa
			"watertank_01_f",
			"watertank_02_f",
			"watertank_03_f",
			"watertank_04_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] = 
		{
			// Arma 3
			"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			"Cargo20_light_green_F",
			"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			"Cargo40_light_green_F",
			"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",

			// Namalsk
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			
			//Tanoa
			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",

			// Also allow wrecks
			"wreck_"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/


			// TODO: Ask community for CUP/AiA model names	
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",
			//Tanoa
			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d"
		};	
	};
	
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
