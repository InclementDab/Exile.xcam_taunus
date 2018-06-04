class CfgExileEnvironment
{
	class xcam_taunus
	{
		class FireFlies
		{
			enable = 1;
		};

		class Anomalies
		{
			enable = 0;
		};

		class Breathing
		{
			enable = 0;
		};

		class Snow
		{
			enable = 0;
			surfaces[] = {"#nam_snow"};
		};

		class Radiation
		{
			enable = 1;
			contaminatedZones[] = 
			{
				{{3785.621,	3006.02,	250.862}, 	2000, 	4000}
			};
		};

		class Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
			
			overcast[] = {-3};
			
			rain[] = {-3};
			
			wind[] = {-5};
		};
	};	
};
