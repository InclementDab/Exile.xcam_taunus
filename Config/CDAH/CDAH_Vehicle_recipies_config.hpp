/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Rashmandash, Yesyesjo
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 *
 * www.cdah-gaming.com
 */
 
class CDAH_AbstractCraftingRecipe
{
	name = "";
	categorie = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CDAHInteractionModels
	requiredInteractionVehicleGroup = ""; //CDAH VEHICLE REQUEST
	requiresFire = 0; // inflamed object nearby
	requiredVehicle = 0; 
	requiredBaseLevel = 0;
}; 
 
class CDAHVehicleRecipies
{
	#include "CDAH_Cat_Supply_Vehicles.hpp"
	#include "CDAH_Cat_Bikes_Karts_Quads.hpp"
	#include "CDAH_Cat_Cars_Vans.hpp"
	#include "CDAH_Cat_Offroader.hpp"
	#include "CDAH_Cat_Light_Trucks.hpp"	
	#include "CDAH_Cat_Armed_Offroader_Miltrucks.hpp"
	#include "CDAH_Cat_Light_Armed_Trucks.hpp"	
	#include "CDAH_Cat_Armed_Miltrucks.hpp"
	#include "CDAH_Cat_Unarmed_Helis.hpp"	
	#include "CDAH_Cat_Unarmed_Planes.hpp"	
	#include "CDAH_Cat_Armed_Helis.hpp"	
	#include "CDAH_Cat_Armed_Planes.hpp"
	#include "CDAH_Cat_Light_Tanks.hpp"	
	#include "CDAH_Cat_Wheeled_Tanks.hpp"	
	#include "CDAH_Cat_Heavy_Tanks.hpp"
	
	
	/*
	if (CDAH_Debug) then 
	{
		class Test_Humming: CDAH_AbstractCraftingRecipe
		name = "CDAH Humming";
		pictureItem = "Exile_Chopper_Hummingbird_Civillian_Blue";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "Exile_Chopper_Hummingbird_Civillian_Blue"}
		};
		components[] = 
		{
			{1, "Exile_Item_MetalPole"}
		};
		requiredInteractionModelGroup = "EngineStarter";
		
		categorie = "DEBUG";
	};
	
	 class Test_Kuma: CDAH_AbstractCraftingRecipe
	{
		name = "CDAH Tank";
		pictureItem = "I_MBT_03_cannon_F";
		requiresFire = 0;
		returnedItems[] =
		{
			{1, "I_MBT_03_cannon_F"}
		};
		components[] = 
		{
			{1, "Exile_Item_MetalPole"}
		};
		
		requiredInteractionModelGroup = "AmmoContainer";
		
		categorie = "DEBUG";
	}; */
};