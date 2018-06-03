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
	SM_ZombieDamagePlayer = 1.0; // how much damage a zombie does to a player
	SM_ZombieDamagePlayerStrength = 1; // strength in wich a zombie does to a player (based on damage)
	SM_ZombieDamageCar = 0.02; // how much damage a zombie does to a car
	SM_ZombieDamageCarStrength = 1.5; // strength in wich a zombie does to a car (based on damage)
	SM_AttackSpeed = 1.2; // delay from each zombie attack
	SM_BleedingEnabled = 0; // when a zombie attacks a player they can bleed
	SM_BleedTime = 20; // how long a player will bleed if they are attacked by a zombie
	SM_BleedChance = 25; // bleed chance.....
	SM_ZombieTargetPosMemory = 30; // in seconds how long a zombie remembers the position it's walking to
	SM_ZombieSoundDelayAggressive = 5; // seconds between each aggresive sound a zombie makes
	SM_ZombieSoundDelayMoan = 30; // seconds between each moan sound a zombie makes
	SM_ZombieEat = 30; // how long a zombie eats a target
	SM_SoundDistance = 20; // how far a zombie sound travels
	SM_ZombieEatSoundDelay = 7; // seconds between each eating sound
	SM_ZombieSpeedIncreaseEnabled = false; // increase / decrease zombie speed based on distance
	SM_ZombieSpeedDistance = 35; // distance to increase / decrease zombie speed
	SM_ZombieSpeedMultiplyer = 2.5; // multiplier for zombie speed
	SM_ZombiesFastClose = false; // 1 = zombies walk fast close // 0 = zombies walk fast far away
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
	SM_CustomScreenEffects = false; // scratches, bites etc.. on screen when attacked.
	SM_ScreenEffects[] =
	{
		"\SM_Zombz\textures\badger\SM_BloodEffect_1.paa",
		"\SM_Zombz\textures\badger\SM_BloodEffect_2.paa",
		"\SM_Zombz\textures\badger\SM_ZombieBite.paa",
		"\SM_Zombz\textures\badger\SM_ZombieStrike_1.paa",
		"\SM_Zombz\textures\badger\SM_ZombieStrike_2.paa"
	};

	// Infection items: SM_Zombz_Item_immunity, SM_Zombz_Item_Cure
	SM_InfectionIncrease = 0.25; // maximum ammount of infection to increase
	SM_Infection = false; // enable / disable of infection when a player gets hit by a zombie
	SM_InfectionChance = 5; // chance to increase a random infection amount
	SM_InfectionDamage = 0.01; // "multiplyer" for infection damage. 
	SM_InfectionDelay = 2;	// how long in seconds it ticks the infection DOT
	SM_ImmunityLength = 420; // how long in seconds immunity last.

	/*
		SERVER SETTINGS
	*/
	SM_NotificationEnabled = false; //Enable notification of killing zombies?
	SM_ZombieGutsLength = 300; //How long zombie guts last.
	SM_TownSearchTypes[] = //You're also able to put town names
	{
		"Oberursel West",
		"Oberursel Ost",
		"Bad Homburg",
		"Königstein",
		"Kronberg",
		"Rödelheim",
		"Niederursel",
		"Eschborn",
		"Schwalbach",
		"Neuenhain",
		"Sandring",
		"Wehrheim",
		"Saalburgsiedlung",
		"Neu-Anspach",
		"Brombach",
		"Hunoldstal",
		"Treisberg",
		"Finsternthal",
		"Mauloff",
		"Seelenberg",
		"Schmitten",
		"Niederreifenberg",
		"Oberreifenberg",
		"Wüstems",
		"Fischbach",
		"Schneidhain",
		"Oberhöchstadt",
		"Eppstein",
		"Obernhain",
		"Oberstedten",
		"Dornholzhausen",
		"Glashütten",
		"Dorfweil",
		"Arnoldsheim",
		"Rettershof",
		"Wintermühle",
		"Taunusbrücke",
		"Riedelbach",
		"Truppenuebungsplatz",
		"Weisskirchen"
	};
	SM_ZombieMaxDistanceTown = 60; // max distance to spawn zombies from a player in a town
	SM_ZombieMinDistanceTown = 20; // min distance to spawn zombies from a player in a town
	SM_SearchForTownRadius = 100; // will search all towns near a player within 1000 meters.
	SM_ZombiesPerPlayerInTown = 10; // How many zombies a player have in a town.
	SM_ZombiesPerWaveTown = 3; // How many zombies to spawn on a player per wave in town.
	SM_HordeMarkerColor = "ColorRed"; // used for SM_HordeMarkerStyle.
	SM_HordeMarkerStyle = "hd_warning"; // if you have a marker you want to use, set SM_HordeMarkerType to 6.
	SM_HordeMarkerText = ""; //"!!! --- HORDE --- !!!"; // pretty obvious...
	SM_HordeMarkerCleanupEnabled = true; // cleanup the horde marker.
	SM_HordeMarkerType = 1; // 1-5 https://puu.sh/rUpoG/f0e0e59919.png
	SM_HordeNotificationText = "A zombie horde has spawned!";
	SM_DespawnZombieOrKill = false; // eanbled just kills the zombie. disabled despawns the zombie. (on cleanup)
	SM_ZombieSide = "east"; // side to create the zombie.
	SM_HordeNotificationEnabled = false; // notification for hordes.
	SM_HordeMarkerEnabled = false; // markers for hordes.
	SM_ZombiesPerWave = 1; // zombies to spawn on a player per wave.
	SM_HordeMaxDistance = 150; // max distance to spawn horde from a player.
	SM_HordeMinDistance = 25; // min distance to spawn horde from a player.
	SM_HordeMaxDistanceTown = 100; // max distance to spawn horde from a player, in a town.
	SM_HordeMinDistanceTown = 15; // min distance to spawn horde from a player, in a town.
	SM_HordeSpawnMaxDistanceFromPosition = 35; // max meters to spread out horde zombies from their spawn position.
	SM_HordeSpawnMinDistanceFromPosition = 5; // min meters to spread out horde zombies from their spawn position.
	SM_HordeSpawnMaxDistanceFromPositionTown = 20; // max meters to spread out horde zombies from their spawn position, in a town.
	SM_HordeSpawnMinDistanceFromPositionTown = 5; // min meters to spread out horde zombies from their spawn position, in a town.
	SM_ZombieSpawnMaxDistanceFromPosition = 30; // max meters to spread out zombies from their spawn position.
	SM_ZombieSpawnMinDistanceFromPosition = 10; // min meters to spread out zombies from their spawn position.
	SM_ZombieSpawnMaxDistanceFromPositionTown = 20; // min meters to spread out zombies from their spawn position, in a town
	SM_ZombieSpawnMinDistanceFromPositionTown = 5; // max meters to spread out zombies from their spawn position, in a town
	SM_HordeMarkerCleanup = 120; // time it takes for the horde marker to cleanup.
	SM_HordeSpawnDelay = 120; // in seconds how long it takes to do check to spawn hordes. (check horde chance)
	SM_HordesEnabled = false; // hordes enabled 1 = on.
	SM_SpawnHordeChance = 2.5; // chance to spawn a horde.
	SM_MaxZombiesInHorde = 69; // max zombies to spawn in a horde.
	SM_MinZombiesInHorde = 10; // min zombies to spawn in a horde.
	SM_MaxZombiesInHordeTown = 50; // max zombies to spawn in a horde, in a town.
	SM_MinZombiesInHordeTown = 5; // min zombies to spawn in horde, in a town.
	SM_ZombieCleanupDeath = 120; // how long it takes for a zombie body to get cleand up.
	SM_ZombieWaveCount = 1; // how many players to spawn zombies on per wave.
	SM_ZombieItemCount = 5; // max amount of items to spawn on a zombie when it's killed.
	SM_ZombieSpawnDelay = 240; // in seconds how long it takes to spawn more zombies.
	SM_ZombieMaxDistance = 100; // max distance to spawn zombies from a player.
	SM_ZombieMinDistance = 25; // min distance to spawn zombies from a player.
	SM_ZombieCleanup = 120; // in seconds when the cleanup runs.
	SM_ZombieCleanupDistance = 300; // cleanup zombies that are past this distance (from the controlling player)
	SM_MaxZombies = 300; // max zombies to have on map.
	SM_ZombiesPerPlayer = 10; // max zombies a player can have.
	SM_ZombieHealth = 0.5; // health a zombie can have. ( 1 = dead )
	SM_GiveZombiePoptabs = true; // enable giving zombies poptabs?
	SM_MaxPoptabs = 500; // max amount of poptabs to give zombies.
	SM_PopTabsChance = 65; // 100 - 65 = 35% chance.
	SM_GivePlayerRespect = true; // enable giving players respect when they kill a zombie.
	SM_MaxRespect = 25; // max amount of respect to give a player when they kill a zombie.
	SM_ChanceOfLoot = 25; // chance of a zombie having loot.
	SM_MaxItemDrop = 2; // maximum amount of loot to have on a zombie.
	SM_ShuffleArrayDelay = 300; // Time to randomize loot, and zombie spawn classes.
	SM_Zombie_GlowingFace = true; // glowing zombie face.
	SM_RespawnDelayForPlayerEnabled = true; // Enables delaying of spawns for a player.
	SM_RespawnDelayForPlayer = 240; // How long (in seconds) it waits to spawn more zombies for a player.
	SM_RespawnDelayForPlayerTown = 30; // how long (in seconds) it waits to spawn more zombies for a player in a town.
	SM_TownsOnly = false; // Makes it so zombies only spawn at towns.
	SM_TownSearchEnabled = true; // enable the searching of towns. 

		
	/*
		{
	// 0	{1250,219},
	// 1	1300,
	// 2	14, 
	// 3	5,
	// 4	30,
	// 5	5,
	// 6	10,
	// 7	"SM_Zombz_Marker4"
	// 8	true,
	// 9	true,
	// 10	"ELLIPSE",
	// 11	"",
	// 12	"ColorRed",
	// 13	0.1,
	// 14	"SolidFull",
	// 15	0.5,
	// 16	15,
	// 17	300,
	// 18	{
				"SM_Zombz_walker73",
				"SM_Zombz_walker200",
				"SM_Zombz_walker69"
			}
		}

		0 - 2d position.
		1 - max distance from 2d position.
		2 - zombies per wave.
		3 - min distance to spawn zombies from player.
		4 - max distance to spawn zombies from player.
		5 - min distance to spawn zombies from spawn position.
		6 - max distance to spawn zombies from spawn position.
		7 - Marker type.
		8 - enable / disable marker.
		9 - enable / disable area highlighter.
		10 - area highlighter shape.
		11 - marker text.
		12 - area highlighter color.
		13 - area highlighter alpha. ( from 0 to 1 )
		14 - area highlighter brush type.
		15 - marker alpha. ( from 0 to 1 )
		16 - max zombies per player.
		17 - spawn delay for zombies in seconds, for a player. (only works with SM_RespawnDelayForPlayerEnabled enabled!)
		18 - Zombie classes to spawn at the zone, use {} for default classes.
	*/
	SM_HordeZonesEnabled = false; // Zoning for hordes.
	SM_HordeCanSpawnRandomly = false; // horde randomly spawn, if player is in zone, it will use zone config.
	SM_ZombieZonesEnabled = true; // zombies spawn in zones, via the config below.
	SM_ZombiesCanSpawnRandomly = false; // zombies randomly spawn, even if a player is not in a zone.
	SM_HordeUseZombieZones = false; // horde zones will use the zombie zones (to make the config smaller) (will also use SM_MaxZombiesInHorde and SM_MinZombiesInHorde)
	SM_DisableZombieSpawnsUntilInNewZoneEnabled = false; // disable spawning of new zombies until a player gets in a new zone. (Requires zones to be enabled!)
	SM_ZombieZones[] =
	{
		{
			{6086.311, 1601.508},
			1200,
			10,
			20,
			150,
			0,
			300,
			"SM_Zombz_Marker4",
			false,
			false,
			"ELLIPSE",
			"",
			"ColorRed",
			0,
			"SolidFull",
			0,
			30,
			30,
			{}
		},
		{
			{5231.551, 2017.546},
			300,
			10,
			20,
			150,
			0,
			100,
			"SM_Zombz_Marker4",
			false,
			false,
			"ELLIPSE",
			"",
			"ColorRed",
			0,
			"SolidFull",
			0,
			30,
			30,
			{}
		},
		{
			{7381.919, 5613.197},
			1200,
			10,
			20,
			150,
			0,
			100,
			"SM_Zombz_Marker4",
			false,
			false,
			"ELLIPSE",
			"",
			"ColorRed",
			0,
			"SolidFull",
			0,
			30,
			30,
			{}
		},
	};


	/* HORDE ZONE CONFIGURATION */

	/*
		{
	// 0	{1250,219},
	// 1	1300,
	// 2	5,
	// 3	30,
	// 4	5,
	// 5	10,
	// 6 	5,
	// 7	20,
	// 8	"SM_Zombz_Marker4"
	// 9	true,
	// 10	true,
	// 11	"ELLIPSE",
	// 12	"",
	// 13	"ColorRed",
	// 14	0.1,
	// 15	"SolidFull",
	// 16	0.5,
	// 17	{}
		}

		0 - 2d position.
		1 - max distance from 2d position.
		2 - min distance to spawn horde from player.
		3 - max distance to spawn horde from player.
		4 - min distance to spawn horde from spawn position.
		5 - max distance to spawn horde from spawn position.
		6 - min zombies to spawn in horde.
		7 - max zombies to spawn in horde.
		8 - Marker type.
		9 - enable / disable marker.
		10 - enable / disable area highlighter.
		11 - area highlighter shape.
		12 - marker text.
		13 - area highlighter color.
		14 - area highlighter alpha. ( from 0 to 1 )
		15 - area highlighter brush type.
		16 - marker alpha. ( from 0 to 1 )
		17 - horde classes to spawn at the zone, use {} for default classes.
	*/
	SM_HordeZones[] = 
	{
		// some place
		{
			{11250,21119},
			300,
			5,
			30,
			5,
			10,
			"SM_Zombz_Marker4"
			true,
			true,
			"ELLIPSE",
			"Dizz is a horde zone!",
			"ColorGreen",
			0.1,
			"SolidFull",
			0.5,
			{}
		},
	};


	/* THESE ARE FOR VANILLA ARMA 3, EXILE SAFEZONES / BASES ARE AUTOMATICALLY DETECTED! */
	SM_UserBaseCheck = true; // Custom base checking
	SM_UserBaseCheckDistance = 50; // meters to check for custom base objects / plotpile
	SM_UserBaseCheckType = 1; //1 = object // 2 = marker
	SM_UserBaseCheckMarkerObjects = "";	//Object or marker type to check for

	SM_UserSafezoneCheck = true; // custom safezone checking
	SM_UserSafezoneCheckDistance = 50; // meters to check for objects / markers
	SM_UserSafezoneCheckType = 1; //1 = object // 2 = marker;
	SM_UserSafezoneCheckMarkerObjects = ""; //Object or marker type to check for
	/* THESE ARE FOR VANILLA ARMA 3, EXILE SAFEZONES / BASES ARE AUTOMATICALLY DETECTED! */

	/*
	//long configurable settings...

	//GET YOUR LOOT HERE, GET YA LOOT, 50% OFF FIRST TIME!
	SM_LootItems[] =
	{
		"hgun_P07_F",
		"hgun_ACPC2_F",
		"hgun_Rook40_F"
	};
	*/
	
	//Will only use this if Exile is enabled.
	SM_LootItemsExile[] =
	{
		"Exile_Item_Moobar",
		"Exile_Item_Raisins",
		"Exile_Item_PowerDrink",
		"Exile_Item_SeedAstics",
		"Exile_Item_CockONut",
		"Exile_Item_Noodles",
		"Exile_Item_DsNuts",
		"Exile_Item_BBQSandwich",
		"Exile_Item_BeefParts",
		"Exile_Item_Dogfood",
		"Exile_Item_CatFood",
		"Exile_Item_MacasCheese",
		"Exile_Item_SausageGravy",
		"Exile_Item_Surstromming",
		"Exile_Item_Cheathas",
		"Exile_Item_GloriousKnakworst",
		"Exile_Item_Matches",
		"Exile_Item_CanOpener"
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
		"SM_Zombz_walker1",
		"SM_Zombz_walker2",
		"SM_Zombz_walker3",
		"SM_Zombz_walker4",
		"SM_Zombz_walker5",
		"SM_Zombz_walker6",
		"SM_Zombz_walker7",
		"SM_Zombz_walker8",
		"SM_Zombz_walker9",
		"SM_Zombz_walker10",
		"SM_Zombz_walker11",
		"SM_Zombz_walker12",
		"SM_Zombz_walker13",
		"SM_Zombz_walker14",
		"SM_Zombz_walker15",
		"SM_Zombz_walker16",
		"SM_Zombz_walker17",
		"SM_Zombz_walker18",
		"SM_Zombz_walker19",
		"SM_Zombz_walker20",
		"SM_Zombz_walker21",
		"SM_Zombz_walker22",
		"SM_Zombz_walker23",
		"SM_Zombz_walker24",
		"SM_Zombz_walker25",
		"SM_Zombz_walker26",
		"SM_Zombz_walker27",
		"SM_Zombz_walker28",
		"SM_Zombz_walker29",
		"SM_Zombz_walker30",
		"SM_Zombz_walker31",
		"SM_Zombz_walker32",
		"SM_Zombz_walker33",
		"SM_Zombz_walker34",
		"SM_Zombz_walker35",
		"SM_Zombz_walker36",
		"SM_Zombz_walker37",
		"SM_Zombz_walker38",
		"SM_Zombz_walker39",
		"SM_Zombz_walker40",
		"SM_Zombz_walker41",
		"SM_Zombz_walker42",
		"SM_Zombz_walker43",
		"SM_Zombz_walker44",
		"SM_Zombz_walker45",
		"SM_Zombz_walker46",
		"SM_Zombz_walker47",
		"SM_Zombz_walker48",
		"SM_Zombz_walker49",
		"SM_Zombz_walker50",
		"SM_Zombz_walker51",
		"SM_Zombz_walker52",
		"SM_Zombz_walker53",
		"SM_Zombz_walker54",
		"SM_Zombz_walker55",
		"SM_Zombz_walker56",
		"SM_Zombz_walker57",
		"SM_Zombz_walker58",
		"SM_Zombz_walker59",
		"SM_Zombz_walker60",
		"SM_Zombz_walker61",
		"SM_Zombz_walker62",
		"SM_Zombz_walker63",
		"SM_Zombz_walker64",

		"SM_Zombz_FemaleWalker1",
		"SM_Zombz_FemaleWalker2",
		"SM_Zombz_FemaleWalker3",
		"SM_Zombz_FemaleWalker4",
		"SM_Zombz_FemaleWalker5"
	};

	// faces...
	SM_FacesArray[] =
	{
		"SM_Zombie1",
		"SM_Zombie2",
		"SM_Zombie3",
		"SM_Zombie4",
		"SM_Zombie5",
		"SM_Zombie6",
		"SM_Zombie7",
		"SM_Zombie8",
		"SM_Zombie9",
		"SM_Zombie10",
		"SM_Zombie11",
		"SM_Zombie13",
		"SM_Zombie14",
		"SM_Zombie15",
		"SM_Zombie16",
		"SM_Zombie17",
		"SM_Zombie18",
		"SM_Zombie19",
		"SM_Zombie20",
		"SM_Zombie21",
		"SM_Zombie22",
		"SM_Zombie23",
		"SM_Zombie24",
		"SM_Zombie25",
		"SM_Zombie26",
		"SM_Zombie27",
		"SM_Zombie28",
		"SM_Zombie29",
		"SM_Zombie30",
		"SM_Zombie31",
		"SM_Zombie32"
	};

	SM_FaceFemaleArray[] =
	{
		"SM_ZombieFemale1",
		"SM_ZombieFemale2",
		"SM_ZombieFemale3",
		"SM_ZombieFemale4",
		"SM_ZombieFemale5",
		"SM_ZombieFemale6",
		"SM_ZombieFemale7",
		"SM_ZombieFemale8",
		"SM_ZombieFemale9",
		"SM_ZombieFemale10",
		"SM_ZombieFemale11"
	};

	//Sounds start
	SM_AttackArray[] =
	{
		"SM_Zombz_Attack1",
		"SM_Zombz_Attack2",
		"SM_Zombz_Attack3",
		"SM_Zombz_Attack4",
		"SM_Zombz_Attack5",
		"SM_Zombz_Attack6",
		"SM_Zombz_Attack7",
		"SM_Zombz_Attack8",
		"SM_Zombz_Attack9",
		"SM_Zombz_Attack10",
		"SM_Zombz_Attack11",
		"SM_Zombz_Attack12",
		"SM_Zombz_Attack13",
		"SM_Zombz_Attack14",
		"SM_Zombz_Attack15",
		"SM_Zombz_Attack16",
		"SM_Zombz_Attack17",
		"SM_Zombz_Attack18",
		"SM_Zombz_Attack19",
		"SM_Zombz_Attack20",
		"SM_Zombz_Attack21",
		"SM_Zombz_Attack22",
		"SM_Zombz_Attack23",
		"SM_Zombz_Attack24",
		"SM_Zombz_Attack25",
		"SM_Zombz_Attack26",
		"SM_Zombz_Attack27",
		"SM_Zombz_Attack28",
		"SM_Zombz_Attack29",
		"SM_Zombz_Attack30",
		"SM_Zombz_Attack31",
		"SM_Zombz_Attack32",
		"SM_Zombz_Attack33",
		"SM_Zombz_Attack34",
		"SM_Zombz_Attack35",
		"SM_Zombz_Attack36",
		"SM_Zombz_Attack37",
		"SM_Zombz_Attack38",
		"SM_Zombz_Attack39",
		"SM_Zombz_Attack40",
		"SM_Zombz_Attack41",
		"SM_Zombz_Attack42",
		"SM_Zombz_Attack43",
		"SM_Zombz_Attack44",
		"SM_Zombz_Attack45",
		"SM_Zombz_Attack46",
		"SM_Zombz_Attack47",
		"SM_Zombz_Attack48",
		"SM_Zombz_Attack49",
		"SM_Zombz_Attack50",
		"SM_Zombz_Attack51",
		"SM_Zombz_Attack52",
		"SM_Zombz_Attack53",
		"SM_Zombz_Attack54",
		"SM_Zombz_Attack55",
		"SM_Zombz_Attack56",
		"SM_Zombz_Attack57",
		"SM_Zombz_Attack58",
		"SM_Zombz_Attack59",
		"SM_Zombz_Attack60",
		"SM_Zombz_Attack61",
		"SM_Zombz_Attack62",
		"SM_Zombz_Attack63",
		"SM_Zombz_Attack64",
		"SM_Zombz_Attack65",
		"SM_Zombz_Attack66",
		"SM_Zombz_Attack67",
		"SM_Zombz_Attack68",
		"SM_Zombz_Attack69",
		"SM_Zombz_Attack70",
		"SM_Zombz_Attack71",
		"SM_Zombz_Attack72",
		"SM_Zombz_Attack73",
		"SM_Zombz_Attack74",
		"SM_Zombz_Attack75"
	};

	SM_AggressiveArray[] =
	{
		"SM_Zombz_Aggressive1",
		"SM_Zombz_Aggressive2",
		"SM_Zombz_Aggressive3",
		"SM_Zombz_Aggressive4",
		"SM_Zombz_Aggressive5",
		"SM_Zombz_Aggressive6",
		"SM_Zombz_Aggressive7",
		"SM_Zombz_Aggressive8",
		"SM_Zombz_Aggressive9",
		"SM_Zombz_Aggressive10",
		"SM_Zombz_Aggressive11",
		"SM_Zombz_Aggressive12",
		"SM_Zombz_Aggressive13"
	};

	SM_EatingArray[] =
	{
		"SM_Zombz_Eat1",
		"SM_Zombz_Eat2",
		"SM_Zombz_Eat3",
		"SM_Zombz_Eat4",
		"SM_Zombz_Eat5",
		"SM_Zombz_Eat6",
		"SM_Zombz_Eat7",
		"SM_Zombz_Eat8",
		"SM_Zombz_Eat9",
		"SM_Zombz_Eat10",
		"SM_Zombz_Eat11",
		"SM_Zombz_Eat12",
		"SM_Zombz_Eat13",
		"SM_Zombz_Eat14",
		"SM_Zombz_Eat15",
		"SM_Zombz_Eat16",
		"SM_Zombz_Eat17",
		"SM_Zombz_Eat18",
		"SM_Zombz_Eat19",
		"SM_Zombz_Eat20",
		"SM_Zombz_Eat21",
		"SM_Zombz_Eat22",
		"SM_Zombz_Eat23",
		"SM_Zombz_Eat24",
		"SM_Zombz_Eat25",
		"SM_Zombz_Eat26",
		"SM_Zombz_Eat27"
	};

	SM_MoanArray[] =
	{
		"SM_Zombz_Moan1"
	};

	SM_ScreamArray[] =
	{
		"SM_Zombz_Scream1",
		"SM_Zombz_Scream2",
		"SM_Zombz_Scream3",
		"SM_Zombz_Scream4",
		"SM_Zombz_Scream5",
		"SM_Zombz_Scream6",
		"SM_Zombz_Scream7"
	};

	SM_VehicleHitArray[] =
	{
		""
	};
	//Sounds end

	class CfgCodeOverride
	{
		SM_ZombieAttackTarget = "Client\Zombz\code\client\SM_ZombieAttackTarget.sqf";
	};
};
