

class CfgVehicles {
	
	class Man;
	
	class CAManBase: Man {
		
		class ACE_SelfActions {
		
			class ACE_Equipment {

				class radioEnable {
					
					displayName = "Turn Radio On";
					condition = (("item_radio" in (assignedItems player)) && (player getVariable "radioToggle"));
					icon = "assets\ACE_Interaction_Radio_Icon.paa";
					