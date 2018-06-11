/*
class CfgVehicles {
	
	class Man;
	
	class CAManBase: Man {
		
		class ACE_SelfActions {
		
			class ACE_Equipment {

				class radioEnable {
					
					displayName = "Enable Radio";
					condition = ('itemRadio' in (assignedItems _player)) && ([_player] call {getVariable ["RadioToggle"]});
					icon = "assets\ACE_Interaction_Radio_Icon.paa";
					statement = [true, _player] call radioToggle;
					showDisabled = 0;
					priority = 2.5;
				};
				
				class radioDisable {
					
					displayName = "Disable Radio";
					condition = ('itemRadio' in (assignedItems _player)) && !([_player] call {getVariable ["RadioToggle"]});
					icon = "assets\ACE_Interaction_Radio_Icon.paa";
					statement = [false, _player] call radioToggle;
					showDisabled = 0;
					priority = 2.5;
				};
			};
		};
	};
};