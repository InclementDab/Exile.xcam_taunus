class CfgTraders
{
	class Trader_Civilian_Weapons
	{
		name = "CIVILIAN WEAPONS";
		showWeaponFilter = 0;
		categories[] =
		{
			"PointerAttachments" // Placeholder
		};
	};
	
	class Trader_Hospital
	{
		name = "HOSPITAL";
		showWeaponFilter = 0;
		categories[] =
		{
			"ACE_Medical"
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
			"ACE_Attachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"Pistols",
			"Shotguns",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles",
			"RHSPointerAttachments",
			"RHSBipodAttachments",
			"RHSMuzzleAttachments",
			"RHSOpticAttachments",
			"RHSAssaultRifles",
			"RHSSniperRifles",
			"RHSPistols",
			"RHSLightMachineGuns",
			"RHSAmmo",
			"NIAMuzzleAttachments",
			"NIAAttachments",
			"NIAOpticAttachments",
			"NIALightMachineGuns",
			"NIASubMachineGuns",
			"NIAAssaultRifles",
			"NIASniperRifles",
			"NIAAmmunition"
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
			"ACE_Equipment",
			"ACE_Flares",
			"TRYKBackpacks",
			"TRYKHeadgear",
			"TRYKUniforms",
			"TRYKVests",
			"RHSUniforms",
			"RHSVests",
			"RHSHeadgear"

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
			"Tools"
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
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers", 
			"Planes",
			"RHSPlanes",
			"RHSHelicopters"
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats"
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving"
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

	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};

	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
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

class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 5000;
		Level3 = 10000;
		Level4 = 15000;
		Level5 = 20000;
		Level6 = 25000;
	};
};

class CfgExileArsenal
{
	
	#include "TraderLists\EXILE\CfgExileArsenal.hpp"
	#include "TraderLists\RHS\CfgExileArsenal.hpp"
	#include "TraderLists\TRYK\CfgExileArsenal.hpp"
	#include "TraderLists\NIARMS\CfgExileArsenal.hpp"
	#include "TraderLists\ACE\CfgExileArsenal.hpp"
	
};

class CfgTraderCategories
{

	#include "TraderLists\EXILE\CfgTraderCategories.hpp"
	#include "TraderLists\RHS\CfgTraderCategories.hpp"
	#include "TraderLists\TRYK\CfgTraderCategories.hpp"
	#include "TraderLists\NIARMS\CfgTraderCategories.hpp"
	#include "TraderLists\ACE\CfgTraderCategories.hpp"

};


