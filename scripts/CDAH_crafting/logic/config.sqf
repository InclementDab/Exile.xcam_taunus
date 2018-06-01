/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Rashmandash, Yesyesjo
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 *
 * www.cdah-gaming.com
 */
  
 CDAH_Debug				= false;		//if is "true",  it runs crafting four times faster; !!!! WARNING !!!! You can craft anything without items in craftbox (it's just for testing) !!!!
 CDAH_Use_craftTimer 	= false; 	//if is "false", u 'DON'T' use the Timecrafting. If you want to use the CDAH_craftTimer please install "REALTIME RESTARTER" http://www.exilemod.com/topic/17916-realtime-restarts/#comment-123819 Thx to "Michael Cullen".
 CDAH_Use_crafSounds	= true;		//if is "false", you will hear no Craftsound.
 CDAH_use_Log			= true;		//only works with extDB2 (currently)
	 
 //Time for crafting in seconds for each category. Change it to what ever u want. Add to your recipes the time in the catagorys
 Time_Karts_Quads 					= 15;
 Time_Cars_Vans						= 20;
 Time_Offroader 					= 30;
 Time_Light_Trucks 					= 40;
 Time_Armed_Offroader_Miltrucks 	= 50;
 Time_Light_Armed_Trucks			= 60;
 Time_Armed_Miltrucks				= 100;
 Time_Unarmed_Helis		 			= 120;
 Time_Unarmed_Planes 				= 120;
 Time_category_Armed_Helis		 	= 240;
 Time_category_Armed_Planes 		= 240;
 Time_Wheeled_Tanks 				= 480;
 Time_Light_Tanks		 			= 480;
 Time_Heavy_Tanks 					= 960;
 Time_UAVs							= 200;
 Time_Supply_Vehicles 				= 120;
 Time_Uncategorised					= 15;
 
 // don't change below
 private ['_code', '_function', '_file'];

	{
		_code = '';
		_function = _x select 0;
		_file = _x select 1;

		_code = compileFinal preprocessFileLineNumbers _file;

		missionNamespace setVariable [_function, _code];
	}
	forEach 
	[
		['fn_CDAH_setCraftTime', 													'scripts\CDAH_crafting\logic\fn_CDAH_setCraftTime.sqf']
	];
	