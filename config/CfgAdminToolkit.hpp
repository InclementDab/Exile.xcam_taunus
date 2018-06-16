class CfgAdminToolkitCustomMod {
	/* Exclude some main menu items
	 * To only show the menus loaded from an extension, use:
	 * 
	 * ExcludeMenu[] = {"Players", "Vehicles", "Weapons" , "Other"};
	 */
	ExcludeMenu[] = {};
	
	Extensions[] = {
		{"Exile Mod","ExileMod"},
		{"Furniture", "Furniture"},
		{"Vanilla AI", "VanillaAI"}
	};
	
	/* 4 Quick buttons allowing to add any action you want - See example below*/
	QuickButtons[] = {
		/* send a message to everyone using the parameters text field */
		{"Restart Msg To All", "['messageall', 'Server restart in few minutes'] call AdminToolkit_doAction"},
		/* Quickly get a Helicopter */
		{"Need a Heli", "['getvehicle', 'B_Heli_Light_01_armed_F'] call AdminToolkit_doAction"}
	};
};

