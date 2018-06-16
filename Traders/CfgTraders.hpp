class CfgExileArsenal
{
	
	#include "Prices\AcePrices.hpp"
	#include "Prices\TrykPrices.hpp"
	#include "Prices\NiarmsPrices.hpp"
	#include "Prices\RhsPrices.hpp"
	#include "Prices\ExilePrices.hpp"
	#include "Prices\CbrnPrices.hpp"
	#include "Prices\Miscprices.hpp"
	#include "Prices\ExtendedBaseMod.hpp"
	#include "Prices\RDSprices.hpp"
	
};


class CfgTraders
{
	class Trader_Civilian_Weapons
	{
		name = "CIVILIAN WEAPONS";
		showWeaponFilter = 1;
		categories[] =
		{
			"CivilianPistols",
			"CivilianRifles",
			"Ammunition"
		};
	};

	class Trader_Civilian_SurvivalGear
	{	
		name = "SURVIVAL EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"SurvivalTools",
			"NavigationEquipment",
			"Medical",
			"Flares",
			"Hardware",
			"Smokes",
			"Food",
			"Drinks",
			"NonVeganFood"
		};
	};

	class Trader_Civilian_Clothing
	{
		name = "CIVILIAN WEAPONS";
		showWeaponFilter = 1;
		categories[] =
		{
			"CivilianAntiRadiationGear",
			"CivilianFacewear",
			"CivilianHeadwear",
			"CivilianUniforms",
			"CivilianVests",
			"CivilianBackpacks"
		};
	};

	class Trader_Civilian_Vehicles
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks",
			"RHSVehicles"
		};
	};

	class Trader_Civilian_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"CivilianCars", 
			"CivilianPlanes",
			"CivilianChoppers",
			"CivilianTrucks"
		};
	};


	
	
	class Trader_Military_Weapons
	{
		name = "MILITARY WEAPONS";
		showWeaponFilter = 1;
		categories[] =
		{
			"AssaultRifles",
			"SubMachineGuns",
			"Shotguns",
			"LightMachineGuns",
			"SniperRifles",
			"Pistols",
			"Ammunition",
			"PointerAttachments",
			"UnderbarrelAttachments",
			"MuzzleAttachments",
			"OpticAttachments"
			
			
		};
	};
	
	class Trader_Military_SurvivalGear
	{
		name = "MILITARY SURVIVAL EQUIPMENT";
		showWeaponFilter = 0;
		categories[] =
		{
			"MilitaryEquipment",
			"NavigationEquipment",
			"MilitaryMedical",
			"Flares",
			"Hardware",
			"Smokes",
			"SurvivalTools",
			"Food",
			"Drinks",
			"NonVeganFood"
			
		};
	};
	
	
	class Trader_Black_Market
	{
		name = "BLACK MARKET DEALER";
		showWeaponFilter = 1;
		categories[] =
		{
			"AntiRadiationMasks",
			"AntiRadiationSuits",
			"Explosives",
			"Grenades"
		};
	};
	
	class Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"Equipment",
			"ExtendedBaseMod"
		};
	};

	class Mikes_Bikes
	{
		name = "Mike's Bikes";
		showWeaponFilter = 0;
		categories[] = 
		{
			"MikesBikes"
		};
	};

	class Trader_Military_Vehicles
	{
		name = "Armor Trader";
		showWeaponFilter = 0;
		categories[] = 
		{
			"MilitaryArmor"
		};
	};

	
	
	
	class Trader_Template
	{
		name = "NAME";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};






class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.3;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 7500;
		Level3 = 12500;
		Level4 = 17500;
		Level5 = 22500;
		Level6 = 35000;
	};
};

