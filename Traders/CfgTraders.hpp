class CfgTraders
{
	class Trader_Civilian_Weapons
	{
		name = "CIVILIAN WEAPONS";
		showWeaponFilter = 1;
		categories[] =
		{
			"CivilianPistols"
		};
	};
	
	class Trader_Hospital
	{
		name = "HOSPITAL";
		showWeaponFilter = 0;
		categories[] =
		{
			"MilitaryMedical"
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
			"LightMachineGuns",
			"CivilianPistols"
		};
	};


	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"Pistols",
			"Shotguns",
			"SubMachineGuns",
			"AssaultRifles",
			"SniperRifles"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"ACE_Grenades",
			"RHSMines"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Headgear",
			"Glasses",
			"Uniforms",
			"Vests",
			"Backpacks",
			"Equipment"

		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks",
			"NonVeganFood"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"Tools",
			"ExtendedBaseMod",
			"ExtendedFMod",
			"SurvivalTools"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
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

	/**
	 * Sells choppers and planes
	 */
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
	
	class Exile_Trader_Bikes
	{
		name = "BIKES";
		showWeaponFilter = 0;
		categories[] =
		{
			"Bikes"
		};
	};

	class MikesBikes
	{
		name = "Mike's Bikes";
		showWeaponFilter = 0;
		categories[] = 
		{
			"MikesBikes"
		};
	};

	class ArmorTrader
	{
		name = "Armor Trader";
		showWeaponFilter = 0;
		categories[] = 
		{
			"MilitaryArmor"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
};


class CfgExileArsenal
{
	
	#include "Prices\AcePrices.hpp"
	#include "Prices\TrykPrices.hpp"
	#include "Prices\NiarmsPrices.hpp"
	#include "Prices\RhsPrices.hpp"
	#include "Prices\ExilePrices.hpp"
	#include "Prices\CbrnPrices.hpp"
	#include "Prices\Miscprices.hpp"
	#include "Prices\ExtendedFPrices.hpp"
	#include "Prices\ExtendedBaseMod.hpp"
	
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

