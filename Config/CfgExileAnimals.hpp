class CfgExileAnimals
{
	/**
	 * Should animals spawn on your server? Y/N?
	 */
	enabled = 1;

	/**
	 * Should vanilla Arma animals (fish, rabbits, bees, etc.) be disabled?
	 * We think it should, since it might confuse players if they cant eat them. *munches on bees*
	 */
	disableVanillaAnimals = 0;

	/**
	 * Which animals to spawn. 
	 * Exile automatically spawns a color variation of that animal, if variations exist.
	 * Each player (client) has a maximum of one animal at a time.
	 * Exile checks which animal type can spawn in front of the player and then
	 * picks a random one. 
	 *
	 * For now it is like this:
	 * 
	 * - Goats spawn on hill tops, but not in forests
	 * - Sheep spawn on meadows, but not next to forests and not on hill tops
	 * - Hens and roosters spawn next to buildings only
	 *
	 * => More animal types will follow in upcoming Exile versions, hopefully.
	 */
	animalTypes[] = 
	{
		"Exile_Animal_Rooster_Abstract",
		"Exile_Animal_Hen_Abstract",
		"Exile_Animal_Goat_Abstract",
		"Exile_Animal_Sheep_Abstract"
	};

	/**
	 * Animals are always spawned in front of the player, but
	 * at least a certain distance away. The radius is applied on top.
	 *
	 * Example:
	 * Distance = 150
	 * Radius = 50
	 *
	 * => Minimum Distance from Player = 150 
	 * => Maximum Distance from Player = 150 + 50 * 2
	 */
	spawnDistance = 150;
	spawnRadius = 50;

	/**
	 * Specifies the minimum time in seconds between spawning animals.
	 * When the animal diededed, this time has to pass before it spawns
	 * a new one.
	 *
	 * It is a min/max setting, so the intervals will be uneven and a bit random.
	 * By default it will take 5 to 10 minutes to respawn a new animal.
	 */
	minimumSpawnDelay = 5 * 60;
	maximumSpawnDelay = 10 * 60;

	/**
	 * Clients will despawn animals if no player is in this radius around the animal
	 * This check is ran every 1 minute, so it is pretty unprecise, but performance-friendly. 
	 */
	keepAliveRadius = 500;

	/**
	 * Defines the minimum lifetime of an animal in seconds. During this time, right after spawning,
	 * it will not despawn. (+-0..1 minute delay)
	 */
	minimumLifetime = 5 * 60;
};
