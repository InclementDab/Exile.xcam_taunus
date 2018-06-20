class CfgExileCustomCode 
{
	// Trader Plus
	ExileClient_gui_traderDialog_show 									= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_show.sqf";
	ExileClient_gui_traderDialog_updateItemStats 						= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_updateItemStats.sqf";
	ExileClient_gui_vehicleTraderDialog_show 							= "Client\TraderPlus\CustomCode\ExileClient_gui_vehicleTraderDialog_show.sqf";
	ExileClient_gui_traderDialog_event_onStoreDropDownSelectionChanged 	= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_event_onStoreDropDownSelectionChanged.sqf";
	ExileClient_gui_vehicleTraderDialog_updateVehicleListBox 			= "Client\TraderPlus\CustomCode\ExileClient_gui_vehicleTraderDialog_updateVehicleListBox.sqf";
	ExileClient_gui_traderDialog_updateStoreListBox 					= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_updateStoreListBox.sqf";
	ExileClient_gui_traderDialog_event_onStoreListBoxSelectionChanged 	= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_event_onStoreListBoxSelectionChanged.sqf";
	ExileClient_gui_traderDialog_event_onPurchaseButtonClick 			= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_event_onPurchaseButtonClick.sqf";
	ExileClient_gui_traderDialog_event_onUnload 						= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_event_onUnload.sqf";
	ExileClient_gui_traderDialog_event_onFilterCheckboxStateChanged 	= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_event_onFilterCheckboxStateChanged.sqf";
	ExileClient_system_trading_network_purchaseItemResponse 			= "Client\TraderPlus\CustomCode\ExileClient_system_trading_network_purchaseItemResponse.sqf";
	ExileClient_gui_traderDialog_updateInventoryListBox					= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_updateInventoryListBox.sqf";
	
	// Spawn Select	
	ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick 		= "Client\SpawnSelect\CustomCode\ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick.sqf";
	ExileClient_gui_selectSpawnLocation_show 							= "Client\SpawnSelect\CustomCode\ExileClient_gui_selectSpawnLocation_show.sqf";
	ExileServer_object_player_createBambi								= "Client\SpawnSelect\CustomCode\ExileServer_object_player_createBambi.sqf";
	ExileServer_object_player_network_createPlayerRequest 				= "Client\SpawnSelect\CustomCode\ExileServer_object_player_network_createPlayerRequest.sqf";
	ExileClient_object_player_network_createPlayerResponse				= "Client\SpawnSelect\CustomCode\ExileClient_object_player_network_createPlayerResponse.sqf";
	
	// Enigma
	ExileClient_object_player_death_startBleedingOut 					= "Client\Enigma\CustomCode\ExileClient_object_player_death_startBleedingOut.sqf";
	
	// Gui Changes
	ExileClient_gui_hud_toggleStatsBar 									= "Client\Gui\CustomCode\ExileClient_gui_hud_toggleStatsBar.sqf";
	ExileClient_gui_hud_renderStatsPanel 								= "Client\Gui\CustomCode\ExileClient_gui_hud_renderStatsPanel.sqf";
	ExileClient_gui_hud_renderWaypoints 								= "Client\Gui\CustomCode\ExileClient_gui_hud_renderWaypoints.sqf";
	ExileClient_gui_hud_toggleHungerIcon								= "Client\Gui\CustomCode\ExileClient_gui_hud_toggleHungerIcon.sqf";
	ExileClient_gui_hud_toggleThirstIcon								= "Client\Gui\CustomCode\ExileClient_gui_hud_toggleThirstIcon.sqf";

	// Radiation Zone
	ExileClient_system_radiation_thread_update 							= "Client\RadiationZone\CustomCode\ExileClient_system_radiation_thread_update.sqf";
	
	// Radio
	ExileServer_system_network_send_broadcast 							= "Client\System\CustomCode\ExileServer_system_network_send_broadcast.sqf";
	
	// Player
	ExileServer_object_player_database_load 							= "Client\Player\CustomCode\ExileServer_object_player_database_load.sqf";
	ExileServer_object_player_database_update 							= "Client\Player\CustomCode\ExileServer_object_player_database_update.sqf";
	ExileServer_object_player_event_onMpKilled 							= "Client\Player\CustomCode\ExileServer_object_player_event_onMpKilled.sqf";
	ExileClient_object_player_stats_reset 								= "Client\Player\CustomCode\ExileClient_object_player_stats_reset.sqf";
	ExileClient_object_player_stats_update 								= "Client\Player\CustomCode\ExileClient_object_player_stats_update.sqf";
	ExileServer_system_network_event_onPlayerConnected					= "Client\Player\CustomCode\ExileServer_system_network_event_onPlayerConnected.sqf";

	// Safezone Plus
	ExileClient_object_player_event_onInventoryOpened 					= "Client\SafezonePlus\CustomCode\ExileClient_object_player_event_onInventoryOpened.sqf";
	ExileClient_object_player_event_onEnterSafezone 					= "Client\SafezonePlus\CustomCode\ExileClient_object_player_event_onEnterSafezone.sqf";
	ExileClient_object_player_event_onLeaveSafezone 					= "Client\SafezonePlus\CustomCode\ExileClient_object_player_event_onLeaveSafezone.sqf";
	ExileClient_object_player_event_hook 								= "Client\SafezonePlus\CustomCode\ExileClient_object_player_event_hook.sqf";
	ExileClient_object_player_event_unhook 								= "Client\SafezonePlus\CustomCode\ExileClient_object_player_event_unhook.sqf";
	ExileClient_system_trading_network_purchaseVehicleResponse 			= "Client\SafezonePlus\CustomCode\ExileClient_system_trading_network_purchaseVehicleResponse.sqf";
	ExileClient_object_player_thread_safeZone 							= "Client\SafezonePlus\CustomCode\ExileClient_object_player_thread_safeZone.sqf";
	
	// Vector Building
	ExileClient_gui_constructionMode_update 							= "Client\VectorBuilding\CustomCode\SM_gui_constructionMode_update.sqf";
	ExileClient_gui_hud_event_onKeyUp 									= "Client\VectorBuilding\CustomCode\SM_gui_hud_event_onKeyUp.sqf";
	ExileClient_construction_thread 									= "Client\VectorBuilding\CustomCode\SM_construction_thread.sqf";	
	
	// World
	ExileClient_util_world_findCoastPosition							= "Client\World\CustomCode\ExileClient_util_world_findCoastPosition.sqf";
	ExileServer_world_spawnVehicles										= "Client\World\CustomCode\ExileServer_world_spawnVehicles.sqf";
	
	// CDAH
	ExileClient_gui_crafting_show 										= "Client\CDAH\CustomCode\ExileClient_gui_crafting_show.sqf";
	ExileClient_object_item_craft 										= "Client\CDAH\CustomCode\ExileClient_object_item_craft.sqf";
	ExileServer_object_vehicle_carefulCreateVehicle 					= "Client\CDAH\CustomCode\ExileServer_object_vehicle_carefulCreateVehicle.sqf";
	ExileClient_action_execute 											= "Client\CDAH\CustomCode\ExileClient_action_execute.sqf";
	
	// Weather
	ExileServer_system_weather_thread_weatherSimulation 				= "Client\Weather\CustomCode\ExileServer_system_weather_thread_weatherSimulation.sqf";
	ExileServer_system_weather_initialize 								= "Client\Weather\CustomCode\ExileServer_system_weather_initialize.sqf";
	
};
