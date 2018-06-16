class CfgVehicles 
{
	class NonStrategic;
	class Exile_Construction_Abstract_Static: NonStrategic
	{
		armor = 500;
		//cost = 1000;
		destrType = "DestructBuilding";
	};
	class Exile_Construction_WoodWall_Static: Exile_Construction_Abstract_Static
	{
		displayName="Wood Wall (Debug)";	
	};
};

