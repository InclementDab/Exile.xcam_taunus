/* Do not touch! */
#ifndef true
	#define true 1
#endif
#ifndef false
	#define false 0
#endif
/* Do not touch! */

class SM_Zombz
{
	/*
		SHARED SETTINGS
	*/
	SM_Debug = false; // used to debug the system (just logs a lot of stuff)
	SM_ExileSearchForBaseMaxRange = true; // If enabled, will search for territorys based on the maximum size, if disabled, it will search for territorys based on their current level

	/*
		CLIENT SETTINGS
	*/
	SM_NotificatonType = 1; // 1 for custom notification, 2 for mod notification.
	SM_ZombieDamagePlayer = 0.15; // how much damage a zombie does to a player
	SM_ZombieDamagePlayerStrength = 1; // strength in wich a zombie does to a player (based on damage)
	SM_ZombieDamageCar = 0.02; // how much damage a zombie does to a car
	SM_ZombieDamageCarStrength = 1.5; // strength in wich a zombie does to a car (based on damage)
	SM_AttackSpeed = 0.8; // delay from each zombie attack
	SM_BleedingEnabled = 1; // when a zombie attacks a player they can bleed
	SM_BleedTime = 20; // how long a player will bleed if they are attacked by a zombie
	SM_BleedChance = 25; // bleed chance.....
	SM_ZombieTargetPosMemory = 7.5; // in seconds how long a zombie remembers the position it's walking to
	SM_ZombieSoundDelayAggressive = 3; // seconds between each aggresive sound a zombie makes
	SM_ZombieSoundDelayMoan = 420; // seconds between each moan sound a zombie makes
	SM_ZombieEat = 30; // how long a zombie eats a target
	SM_SoundDistance = 30; // how far a zombie sound travels
	SM_ZombieEatSoundDelay = 7; // seconds between each eating sound
	SM_ZombieSpeedIncreaseEnabled = true; // increase / decrease zombie speed based on distance
	SM_ZombieSpeedDistance = 35; // distance to increase / decrease zombie speed
	SM_ZombieSpeedMultiplyer = 1.5; // multiplier for zombie speed
	SM_ZombiesFastClose = true; // 1 = zombies walk fast close // 0 = zombies walk fast far away
	SM_MultiplierDistanceFromTarget = 1.5; // random of 10, multiplier, if 5, then will be 7.5 meter wander distance from target.
	SM_ZombieInBuildingSpeedDevidor = 2; // Devidor of default zombie speed, how fast a zombie moves in a building.
	SM_FiredNearEVHEnabled = true; // if a player shoots near a zombie, the zombie will walk to that shot position
	SM_SetVelocityOnHit = true; // moves the player / vehicle just slightly when hit.
	SM_ExplodingHeadEnabled = true; // exploding heads
	SM_Zombie_SpawnInGround = true; // when zombies spawn they spawn out of the ground

	// How long it takes a idle zombie to recalculate finding a target (recommended 0.1-5 seconds)
	// The higher the better performance (because it's not checking targets as frequent.)
	// The higher the more zombies just stand around.
	// The lower, the more performance is impacted (because it's checking targets frequently);
	SM_ZombieIdleDelay = 1.5;
	SM_FSM_BrainPath = "SM_Zombz_Code\code\fsm\zombieBrain.fsm";
	SM_FSM_ManagerPath = "SM_Zombz_Code\code\fsm\zombieidleManager.fsm";


	//Custom effects to display on screen when hit.
	//This is to spice up the screen when you get hit, it's not VERY noticeable.
	SM_CustomScreenEffects = true; // scratches, bites etc.. on screen when attacked.
	SM_ScreenEffects[] =
	{
		{"\SM_Zombz\textures\badger\SM_BloodEffect_1.paa", 1},
		{"\SM_Zombz\textures\badger\SM_BloodEffect_2.paa", 1},
		{"\SM_Zombz\textures\badger\SM_ZombieBite.paa", 1},
		{"\SM_Zombz\textures\badger\SM_ZombieStrike_1.paa", 1},
		{"\SM_Zombz\textures\badger\SM_ZombieStrike_2.paa", 1}
	};

	// Infection items: SM_Zombz_Item_immunity, SM_Zombz_Item_Cure
	SM_InfectionIncrease = 0.25; // maximum ammount of infection to increase
	SM_Infection = true; // enable / disable of infection when a player gets hit by a zombie
	SM_InfectionChance = 5; // chance to increase a random infection amount
	SM_InfectionDamage = 0.01; // "multiplyer" for infection damage. 
	SM_InfectionDelay = 2;	// how long in seconds it ticks the infection DOT
	SM_ImmunityLength = 420; // how long in seconds immunity last.

	/*
		SERVER SETTINGS
	*/
	SM_NotificationEnabled = true; //Enable notification of killing zombies?
	SM_ZombieGutsLength = 300; //How long zombie guts last.
	SM_TownSearchTypes[] =
	{
		"NameCityCapital",
		"NameLocal",
		"NameCity",
		"NameVillage",

		"NameMarine",
		"Airport",
		"CityCenter",
		"StrongpointArea",
		"FlatAreaCitySmall",
		"FlatAreaCity",
		"StrongpointArea"
	};
	SM_ZombieMaxDistanceTown = 45; // max distance to spawn zombies from a player in a town
	SM_ZombieMinDistanceTown = 25; // min distance to spawn zombies from a player in a town
	SM_SearchForTownRadius = 1000; // will search all towns near a player within 1000 meters.
	SM_ZombiesPerPlayerInTown = 15; // How many zombies a player have in a town.
	SM_ZombiesPerWaveTown = 7; // How many zombies to spawn on a player per wave in town.
	SM_HordeMarkerColor = "ColorRed"; // used for SM_HordeMarkerStyle.
	SM_HordeMarkerStyle = "hd_warning"; // if you have a marker you want to use, set SM_HordeMarkerType to 6.
	SM_HordeMarkerText = ""; //"!!! --- HORDE --- !!!"; // pretty obvious...
	SM_HordeMarkerCleanupEnabled = true; // cleanup the horde marker.
	SM_HordeMarkerType = 1; // 1-5 https://puu.sh/rUpoG/f0e0e59919.png
	SM_HordeNotificationText = "A zombie horde has spawned!";
	SM_DespawnZombieOrKill = false; // eanbled just kills the zombie. disabled despawns the zombie. (on cleanup)
	SM_ZombieSide = "east"; // side to create the zombie.
	SM_HordeNotificationEnabled = true; // notification for hordes.
	SM_HordeMarkerEnabled = true; // markers for hordes.
	SM_ZombiesPerWave = 5; // zombies to spawn on a player per wave.
	SM_HordeMaxDistance = 150; // max distance to spawn horde from a player.
	SM_HordeMinDistance = 25; // min distance to spawn horde from a player.
	SM_HordeMaxDistanceTown = 100; // max distance to spawn horde from a player, in a town.
	SM_HordeMinDistanceTown = 15; // min distance to spawn horde from a player, in a town.
	SM_HordeSpawnMaxDistanceFromPosition = 35; // max meters to spread out horde zombies from their spawn position.
	SM_HordeSpawnMinDistanceFromPosition = 5; // min meters to spread out horde zombies from their spawn position.
	SM_HordeSpawnMaxDistanceFromPositionTown = 20; // max meters to spread out horde zombies from their spawn position, in a town.
	SM_HordeSpawnMinDistanceFromPositionTown = 5; // min meters to spread out horde zombies from their spawn position, in a town.
	SM_ZombieSpawnMaxDistanceFromPosition = 15; // max meters to spread out zombies from their spawn position.
	SM_ZombieSpawnMinDistanceFromPosition = 5; // min meters to spread out zombies from their spawn position.
	SM_ZombieSpawnMaxDistanceFromPositionTown = 10; // min meters to spread out zombies from their spawn position, in a town
	SM_ZombieSpawnMinDistanceFromPositionTown = 5; // max meters to spread out zombies from their spawn position, in a town
	SM_HordeMarkerCleanup = 120; // time it takes for the horde marker to cleanup.
	SM_HordeSpawnDelay = 120; // in seconds how long it takes to do check to spawn hordes. (check horde chance)
	SM_HordesEnabled = false; // hordes enabled 1 = on.
	SM_SpawnHordeChance = 2.5; // chance to spawn a horde.
	SM_MaxZombiesInHorde = 69; // max zombies to spawn in a horde.
	SM_MinZombiesInHorde = 10; // min zombies to spawn in a horde.
	SM_MaxZombiesInHordeTown = 50; // max zombies to spawn in a horde, in a town.
	SM_MinZombiesInHordeTown = 5; // min zombies to spawn in horde, in a town.
	SM_ZombieCleanupDeath = 150; // how long it takes for a zombie body to get cleand up.
	SM_ZombieWaveCount = 5; // how many players to spawn zombies on per wave.
	SM_ZombieItemCount = 5; // max amount of items to spawn on a zombie when it's killed.
	SM_ZombieSpawnDelay = 60; // in seconds how long it takes to spawn more zombies.
	SM_ZombieMaxDistance = 150; // max distance to spawn zombies from a player.
	SM_ZombieMinDistance = 25; // min distance to spawn zombies from a player.
	SM_ZombieCleanup = 60; // in seconds when the cleanup runs.
	SM_ZombieCleanupDistance = 300; // cleanup zombies that are past this distance (from the controlling player)
	SM_MaxZombies = 200; // max zombies to have on map.
	SM_ZombiesPerPlayer = 10; // max zombies a player can have.
	SM_ZombieHealth = 0.7; // health a zombie can have. ( 1 = dead )
	SM_GiveZombiePoptabs = true; // enable giving zombies poptabs?
	SM_MaxPoptabs = 50; // max amount of poptabs to give zombies.
	SM_PopTabsChance = 65; // 100 - 65 = 35% chance.
	SM_GivePlayerRespect = true; // enable giving players respect when they kill a zombie.
	SM_MaxRespect = 50; // max amount of respect to give a player when they kill a zombie.
	SM_ChanceOfLoot = 25; // chance of a zombie having loot.
	SM_MaxItemDrop = 3; // maximum amount of loot to have on a zombie.
	SM_ShuffleArrayDelay = 300; // Time to randomize loot, and zombie spawn classes.
	SM_Zombie_GlowingFace = true; // glowing zombie face.
	SM_RespawnDelayForPlayerEnabled = true; // Enables delaying of spawns for a player.
	SM_RespawnDelayForPlayer = 300; // How long (in seconds) it waits to spawn more zombies for a player.
	SM_RespawnDelayForPlayerTown = 420; // how long (in seconds) it waits to spawn more zombies for a player in a town.
	SM_TownsOnly = false; // Makes it so zombies only spawn at towns.
	SM_TownSearchEnabled = true; // enable the searching of towns. 
	SM_HordeZonesEnabled = false; // Zoning for hordes.
	SM_HordeCanSpawnRandomly = false; // horde randomly spawn, if player is in zone, it will use zone config.
	SM_ZombieZonesEnabled = false; // zombies spawn in zones, via the config below.
	SM_ZombiesCanSpawnRandomly = false; // zombies randomly spawn, even if a player is not in a zone.
	SM_HordeUseZombieZones = false; // horde zones will use the zombie zones (to make the config smaller) (will also use SM_MaxZombiesInHorde and SM_MinZombiesInHorde)
	SM_DisableZombieSpawnsUntilInNewZoneEnabled = false; // disable spawning of new zombies until a player gets in a new zone. (Requires zones to be enabled!)

	/* THESE ARE FOR VANILLA ARMA 3, EXILE SAFEZONES / BASES ARE AUTOMATICALLY DETECTED! */
	SM_UserBaseCheck = false; // Custom base checking
	SM_UserBaseCheckDistance = 50; // meters to check for custom base objects / plotpile
	SM_UserBaseCheckType = 1; //1 = object // 2 = marker
	SM_UserBaseCheckMarkerObjects = "";	//Object or marker type to check for

	SM_UserSafezoneCheck = false; // custom safezone checking
	SM_UserSafezoneCheckDistance = 50; // meters to check for objects / markers
	SM_UserSafezoneCheckType = 1; //1 = object // 2 = marker;
	SM_UserSafezoneCheckMarkerObjects = ""; //Object or marker type to check for
	/* THESE ARE FOR VANILLA ARMA 3, EXILE SAFEZONES / BASES ARE AUTOMATICALLY DETECTED! */

	
	//long configurable settings...

	//GET YOUR LOOT HERE, GET YA LOOT, 50% OFF FIRST TIME!
	SM_LootItems[] =
	{
		{"hgun_P07_F",  5},
		{"hgun_ACPC2_F", 5},
		{"hgun_Rook40_F",  5}
	};

	//Will only use this if Exile is enabled.
	SM_LootItemsExile[] =
	{
		{"Exile_Item_Magazine04", 5},
		{"Exile_Item_Magazine03", 5},
		{"Exile_Item_Magazine02", 5},
		{"Exile_Item_Magazine01", 5},
		{"Exile_Item_Moobar", 5},
		{"Exile_Item_Raisins", 5},
		{"Exile_Item_PowerDrink", 5},
		{"Exile_Item_SeedAstics", 5},
		{"Exile_Item_CockONut", 5},
		{"Exile_Item_Noodles", 5},
		{"Exile_Item_DsNuts", 5},
		{"Exile_Item_BBQSandwich", 5},
		{"Exile_Item_BeefParts", 5},
		{"Exile_Item_Dogfood", 5},
		{"Exile_Item_CatFood", 5},
		{"Exile_Item_MacasCheese", 5},
		{"Exile_Item_ChristmasTinner", 5},
		{"Exile_Item_SausageGravy", 5},
		{"Exile_Item_Surstromming", 5},
		{"Exile_Item_Cheathas", 5},
		{"Exile_Item_GloriousKnakworst", 5},
		{"Exile_Item_Matches", 5},
		{"Exile_Item_CanOpener", 5},
		{"Exile_Item_EMRE", 5},
		{"Exile_Item_CookingPot", 5}
	};

	//Zombie classes used in towns, leave at {} to use default classes.
	SM_ZombieClassesTown[] = {};
	SM_HordeClassesTown[] = {};

	//Default zombie classes.
	SM_HordeClasses[] = {}; //leave at {} for SM_ZombieClasses

	/*
		RUNNER CLASSES:
		SM_Zombz_Runner1 
		ALL THE WAY TO
		SM_Zombz_Runner64

		AND ALSO
		SM_Zombz_FemaleRunner1
		ALL THE WAY TO
		SM_Zombz_FelameRunner5
	*/
	SM_ZombieClasses[] =
	{
		{"SM_Zombz_walker1", 1},
		{"SM_Zombz_walker2", 1},
		{"SM_Zombz_walker3", 1},
		{"SM_Zombz_walker4", 1},
		{"SM_Zombz_walker5", 1},
		{"SM_Zombz_walker6", 1},
		{"SM_Zombz_walker7", 1},
		{"SM_Zombz_walker8", 1},
		{"SM_Zombz_walker9", 1},
		{"SM_Zombz_walker10", 1},
		{"SM_Zombz_walker11", 1},
		{"SM_Zombz_walker12", 1},
		{"SM_Zombz_walker13", 1},
		{"SM_Zombz_walker14", 1},
		{"SM_Zombz_walker15", 1},
		{"SM_Zombz_walker16", 1},
		{"SM_Zombz_walker17", 1},
		{"SM_Zombz_walker18", 1},
		{"SM_Zombz_walker19", 1},
		{"SM_Zombz_walker20", 1},
		{"SM_Zombz_walker21", 1},
		{"SM_Zombz_walker22", 1},
		{"SM_Zombz_walker23", 1},
		{"SM_Zombz_walker24", 1},
		{"SM_Zombz_walker25", 1},
		{"SM_Zombz_walker26", 1},
		{"SM_Zombz_walker27", 1},
		{"SM_Zombz_walker28", 1},
		{"SM_Zombz_walker29", 1},
		{"SM_Zombz_walker30", 1},
		{"SM_Zombz_walker31", 1},
		{"SM_Zombz_walker32", 1},
		{"SM_Zombz_walker33", 1},
		{"SM_Zombz_walker34", 1},
		{"SM_Zombz_walker35", 1},
		{"SM_Zombz_walker36", 1},
		{"SM_Zombz_walker37", 1},
		{"SM_Zombz_walker38", 1},
		{"SM_Zombz_walker39", 1},
		{"SM_Zombz_walker40", 1},
		{"SM_Zombz_walker41", 1},
		{"SM_Zombz_walker42", 1},
		{"SM_Zombz_walker43", 1},
		{"SM_Zombz_walker44", 1},
		{"SM_Zombz_walker45", 1},
		{"SM_Zombz_walker46", 1},
		{"SM_Zombz_walker47", 1},
		{"SM_Zombz_walker48", 1},
		{"SM_Zombz_walker49", 1},
		{"SM_Zombz_walker50", 1},
		{"SM_Zombz_walker51", 1},
		{"SM_Zombz_walker52", 1},
		{"SM_Zombz_walker53", 1},
		{"SM_Zombz_walker54", 1},
		{"SM_Zombz_walker55", 1},
		{"SM_Zombz_walker56", 1},
		{"SM_Zombz_walker57", 1},
		{"SM_Zombz_walker58", 1},
		{"SM_Zombz_walker59", 1},
		{"SM_Zombz_walker60", 1},
		{"SM_Zombz_walker61", 1},
		{"SM_Zombz_walker62", 1},
		{"SM_Zombz_walker63", 1},
		{"SM_Zombz_walker64", 1},

		{"SM_Zombz_Crawler1", 1},
		{"SM_Zombz_Crawler2", 1},
		{"SM_Zombz_Crawler3", 1},
		{"SM_Zombz_Crawler4", 1},
		{"SM_Zombz_Crawler5", 1},
		{"SM_Zombz_Crawler6", 1},
		{"SM_Zombz_Crawler7", 1},
		{"SM_Zombz_Crawler8", 1},
		{"SM_Zombz_Crawler9", 1},
		{"SM_Zombz_Crawler10", 1},
		{"SM_Zombz_Crawler11", 1},
		{"SM_Zombz_Crawler12", 1},
		{"SM_Zombz_Crawler13", 1},
		{"SM_Zombz_Crawler14", 1},
		{"SM_Zombz_Crawler15", 1},
		{"SM_Zombz_Crawler16", 1},
		{"SM_Zombz_Crawler17", 1},
		{"SM_Zombz_Crawler18", 1},
		{"SM_Zombz_Crawler19", 1},
		{"SM_Zombz_Crawler20", 1},
		{"SM_Zombz_Crawler21", 1},
		{"SM_Zombz_Crawler22", 1},
		{"SM_Zombz_Crawler23", 1},
		{"SM_Zombz_Crawler24", 1},
		{"SM_Zombz_Crawler25", 1},
		{"SM_Zombz_Crawler26", 1},
		{"SM_Zombz_Crawler27", 1},
		{"SM_Zombz_Crawler28", 1},
		{"SM_Zombz_Crawler29", 1},
		{"SM_Zombz_Crawler30", 1},
		{"SM_Zombz_Crawler31", 1},
		{"SM_Zombz_Crawler32", 1},
		{"SM_Zombz_Crawler33", 1},
		{"SM_Zombz_Crawler34", 1},
		{"SM_Zombz_Crawler35", 1},
		{"SM_Zombz_Crawler36", 1},
		{"SM_Zombz_Crawler37", 1},
		{"SM_Zombz_Crawler38", 1},
		{"SM_Zombz_Crawler39", 1},
		{"SM_Zombz_Crawler40", 1},
		{"SM_Zombz_Crawler41", 1},
		{"SM_Zombz_Crawler42", 1},
		{"SM_Zombz_Crawler43", 1},
		{"SM_Zombz_Crawler45", 1},
		{"SM_Zombz_Crawler46", 1},
		{"SM_Zombz_Crawler47", 1},
		{"SM_Zombz_Crawler48", 1},
		{"SM_Zombz_Crawler49", 1},
		{"SM_Zombz_Crawler50", 1},
		{"SM_Zombz_Crawler51", 1},
		{"SM_Zombz_Crawler52", 1},
		{"SM_Zombz_Crawler53", 1},
		{"SM_Zombz_Crawler54", 1},
		{"SM_Zombz_Crawler55", 1},
		{"SM_Zombz_Crawler56", 1},
		{"SM_Zombz_Crawler57", 1},
		{"SM_Zombz_Crawler58", 1},
		{"SM_Zombz_Crawler60", 1},
		{"SM_Zombz_Crawler61", 1},
		{"SM_Zombz_Crawler62", 1},
		{"SM_Zombz_Crawler63", 1},
		{"SM_Zombz_Crawler64", 1},

		{"SM_Zombz_FemaleWalker1", 1},
		{"SM_Zombz_FemaleWalker2", 1},
		{"SM_Zombz_FemaleWalker3", 1},
		{"SM_Zombz_FemaleWalker4", 1},
		{"SM_Zombz_FemaleWalker5", 1},
		{"SM_Zombz_FemaleCrawler1", 1},
		{"SM_Zombz_FemaleCrawler2", 1},
		{"SM_Zombz_FemaleCrawler3", 1},
		{"SM_Zombz_FemaleCrawler4", 1},
		{"SM_Zombz_FemaleCrawler5", 1}
	};

	// faces...
	SM_FacesArray[] =
	{
		{"SM_Zombie1", 1},
		{"SM_Zombie2", 1},
		{"SM_Zombie3", 1},
		{"SM_Zombie4", 1},
		{"SM_Zombie5", 1},
		{"SM_Zombie6", 1},
		{"SM_Zombie7", 1},
		{"SM_Zombie8", 1},
		{"SM_Zombie9", 1},
		{"SM_Zombie10", 1},
		{"SM_Zombie11", 1},
		{"SM_Zombie13", 1},
		{"SM_Zombie14", 1},
		{"SM_Zombie15", 1},
		{"SM_Zombie16", 1},
		{"SM_Zombie17", 1},
		{"SM_Zombie18", 1},
		{"SM_Zombie19", 1},
		{"SM_Zombie20", 1},
		{"SM_Zombie21", 1},
		{"SM_Zombie22", 1},
		{"SM_Zombie23", 1},
		{"SM_Zombie24", 1},
		{"SM_Zombie25", 1},
		{"SM_Zombie26", 1},
		{"SM_Zombie27", 1},
		{"SM_Zombie28", 1},
		{"SM_Zombie29", 1},
		{"SM_Zombie30", 1},
		{"SM_Zombie31", 1},
		{"SM_Zombie32", 1}
	};

	SM_FaceFemaleArray[] =
	{
		{"SM_ZombieFemale1", 1},
		{"SM_ZombieFemale2", 1},
		{"SM_ZombieFemale3", 1},
		{"SM_ZombieFemale4", 1},
		{"SM_ZombieFemale5", 1},
		{"SM_ZombieFemale6", 1},
		{"SM_ZombieFemale7", 1},
		{"SM_ZombieFemale8", 1},
		{"SM_ZombieFemale9", 1},
		{"SM_ZombieFemale10", 1},
		{"SM_ZombieFemale11", 1}
	};

	//Sounds start
	SM_AttackArray[] =
	{
		{"SM_Zombz_Attack1", 1},
		{"SM_Zombz_Attack2", 1},
		{"SM_Zombz_Attack3", 1},
		{"SM_Zombz_Attack4", 1},
		{"SM_Zombz_Attack5", 1},
		{"SM_Zombz_Attack6", 1},
		{"SM_Zombz_Attack7", 1},
		{"SM_Zombz_Attack8", 1},
		{"SM_Zombz_Attack9", 1},
		{"SM_Zombz_Attack10", 1},
		{"SM_Zombz_Attack11", 1},
		{"SM_Zombz_Attack12", 1},
		{"SM_Zombz_Attack13", 1},
		{"SM_Zombz_Attack14", 1},
		{"SM_Zombz_Attack15", 1},
		{"SM_Zombz_Attack16", 1},
		{"SM_Zombz_Attack17", 1},
		{"SM_Zombz_Attack18", 1},
		{"SM_Zombz_Attack19", 1},
		{"SM_Zombz_Attack20", 1},
		{"SM_Zombz_Attack21", 1},
		{"SM_Zombz_Attack22", 1},
		{"SM_Zombz_Attack23", 1},
		{"SM_Zombz_Attack24", 1},
		{"SM_Zombz_Attack25", 1},
		{"SM_Zombz_Attack26", 1},
		{"SM_Zombz_Attack27", 1},
		{"SM_Zombz_Attack28", 1},
		{"SM_Zombz_Attack29", 1},
		{"SM_Zombz_Attack30", 1},
		{"SM_Zombz_Attack31", 1},
		{"SM_Zombz_Attack32", 1},
		{"SM_Zombz_Attack33", 1},
		{"SM_Zombz_Attack34", 1},
		{"SM_Zombz_Attack35", 1},
		{"SM_Zombz_Attack36", 1},
		{"SM_Zombz_Attack37", 1},
		{"SM_Zombz_Attack38", 1},
		{"SM_Zombz_Attack39", 1},
		{"SM_Zombz_Attack40", 1},
		{"SM_Zombz_Attack41", 1},
		{"SM_Zombz_Attack42", 1},
		{"SM_Zombz_Attack43", 1},
		{"SM_Zombz_Attack44", 1},
		{"SM_Zombz_Attack45", 1},
		{"SM_Zombz_Attack46", 1},
		{"SM_Zombz_Attack47", 1},
		{"SM_Zombz_Attack48", 1},
		{"SM_Zombz_Attack49", 1},
		{"SM_Zombz_Attack50", 1},
		{"SM_Zombz_Attack51", 1},
		{"SM_Zombz_Attack52", 1},
		{"SM_Zombz_Attack53", 1},
		{"SM_Zombz_Attack54", 1},
		{"SM_Zombz_Attack55", 1},
		{"SM_Zombz_Attack56", 1},
		{"SM_Zombz_Attack57", 1},
		{"SM_Zombz_Attack58", 1},
		{"SM_Zombz_Attack59", 1},
		{"SM_Zombz_Attack60", 1},
		{"SM_Zombz_Attack61", 1},
		{"SM_Zombz_Attack62", 1},
		{"SM_Zombz_Attack63", 1},
		{"SM_Zombz_Attack64", 1},
		{"SM_Zombz_Attack65", 1},
		{"SM_Zombz_Attack66", 1},
		{"SM_Zombz_Attack67", 1},
		{"SM_Zombz_Attack68", 1},
		{"SM_Zombz_Attack69", 1},
		{"SM_Zombz_Attack70", 1},
		{"SM_Zombz_Attack71", 1},
		{"SM_Zombz_Attack72", 1},
		{"SM_Zombz_Attack73", 1},
		{"SM_Zombz_Attack74", 1},
		{"SM_Zombz_Attack75", 1}
	};

	SM_AggressiveArray[] =
	{
		{"SM_Zombz_Aggressive1", 1},
		{"SM_Zombz_Aggressive2", 1},
		{"SM_Zombz_Aggressive3", 1},
		{"SM_Zombz_Aggressive4", 1},
		{"SM_Zombz_Aggressive5", 1},
		{"SM_Zombz_Aggressive6", 1},
		{"SM_Zombz_Aggressive7", 1},
		{"SM_Zombz_Aggressive8", 1},
		{"SM_Zombz_Aggressive9", 1},
		{"SM_Zombz_Aggressive10", 1},
		{"SM_Zombz_Aggressive11", 1},
		{"SM_Zombz_Aggressive12", 1},
		{"SM_Zombz_Aggressive13", 1}
	};

	SM_EatingArray[] =
	{
		{"SM_Zombz_Eat1", 1},
		{"SM_Zombz_Eat2", 1},
		{"SM_Zombz_Eat3", 1},
		{"SM_Zombz_Eat4", 1},
		{"SM_Zombz_Eat5", 1},
		{"SM_Zombz_Eat6", 1},
		{"SM_Zombz_Eat7", 1},
		{"SM_Zombz_Eat8", 1},
		{"SM_Zombz_Eat9", 1},
		{"SM_Zombz_Eat10", 1},
		{"SM_Zombz_Eat11", 1},
		{"SM_Zombz_Eat12", 1},
		{"SM_Zombz_Eat13", 1},
		{"SM_Zombz_Eat14", 1},
		{"SM_Zombz_Eat15", 1},
		{"SM_Zombz_Eat16", 1},
		{"SM_Zombz_Eat17", 1},
		{"SM_Zombz_Eat18", 1},
		{"SM_Zombz_Eat19", 1},
		{"SM_Zombz_Eat20", 1},
		{"SM_Zombz_Eat21", 1},
		{"SM_Zombz_Eat22", 1},
		{"SM_Zombz_Eat23", 1},
		{"SM_Zombz_Eat24", 1},
		{"SM_Zombz_Eat25", 1},
		{"SM_Zombz_Eat26", 1},
		{"SM_Zombz_Eat27", 1}
	};

	SM_MoanArray[] =
	{
		{"SM_Zombz_Moan1", 1}
	};

	SM_ScreamArray[] =
	{
		{"SM_Zombz_Scream1", 1},
		{"SM_Zombz_Scream2", 1},
		{"SM_Zombz_Scream3", 1},
		{"SM_Zombz_Scream4", 1},
		{"SM_Zombz_Scream5", 1},
		{"SM_Zombz_Scream6", 1},
		{"SM_Zombz_Scream7", 1}
	};

	SM_VehicleHitArray[] =
	{

	};

	SM_ExplodeHeadArray[] =
	{
		{"SM_Zombz\sounds\explode\1.ogg", 1},
		{"SM_Zombz\sounds\explode\2.ogg", 1},
		{"SM_Zombz\sounds\explode\3.ogg", 1},
		{"SM_Zombz\sounds\explode\4.ogg", 1}
	};
	//Sounds end

	class CfgCodeOverride
	{
		/*
			Example:
			SM_Util_log = "SM_Zombz\override\SM_Util_log.sqf";
		*/
	};
};
