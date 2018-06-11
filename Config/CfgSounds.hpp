


class CfgSounds
{
	class Radio
	{
		sounds[] = { RadioEnable, RadioDisable };
		
		class RadioEnable {
			name = "RadioEnable";
			sound[] = {"\assets\Radio_on.wss", db-10, 1};
		};
		
		class RadioDisable {
			name = "RadioDisable";
			sound[] = {"\assets\Radio_off.wss", db-10, 1};
		};
	};
};
