class CfgExileEnvironment
{
	class Altis 
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 1;

			// At this hour fire flies begin to spawn
			startHour = 18;

			// At this hour fire flies stop spawning
			endHour = 4;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour anomalies begin to spawn
			startHour = 19;

			// At this hour anomalies stop spawning
			endHour = 6;
		};

		class Breathing
		{
			// 1 = enabled, 0 = disabled
			enable = 0;
		};

		class Snow
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// https://community.bistudio.com/wiki/surfaceType
			surfaces[] = {};
		};

		class Radiation 
		{
			// 1 = enabled, 0 = disabled
			enable = 1;
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = 
		
			// Temperature change in °C when it is 100% overcast
			overcast = -2;

			// Temperature change in °C when it is 100% raining
			rain = -5;

			// Temperature change in °C when it is 100% windy
			wind = -1;

			// Temperature change per 100m altitude in °C
			altitude = -0.5;

			// Difference from the daytime temperature to the water temperature
			water = -5;
		};
	};

	class xcam_taunus: Altis 
	{
		class FireFlies: FireFlies
		{
			enable = 1;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
			surfaces[] = {"#nam_snow"};
		};

		class Radiation: Radiation
		{
			enable = 1;
			contaminatedZones[] = 
			{
				{{3785.621,	3006.02,	250.862}, 	2000, 	4000}
			};
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
			
			overcast[] = {-3};
			
			rain[] = {-3};
			
			wind[] = {-5};
		};
	};	
};
