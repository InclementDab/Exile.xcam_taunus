
//Bones Super Advanced Repair System (SARS)
Bones_fnc_salvageAndRepairMenu = compileFinal preprocessFileLineNumbers "Client\AdvancedRepair\Bones_fnc_salvageAndRepairMenu.sqf";

player ["ace_unconscious", {
    params ["_unit", "_isUnconscious"];
	if (_isUnconscious) then	
	{
		cutText ["", "BLACK FADED", 1.5];
		1.5 fadeSound 0.08;	
	}
	else
	{
		titleCut ["", "BLACK IN", 4]; 
		4 fadeSound 1;
		["DynamicBlur", 400] spawn {
		params ["_name", "_priority", "_handle"];
		while {
			_handle = ppEffectCreate [_name, _priority];
			_handle < 0
		} do {
			_priority = _priority + 1;
		};
			_handle ppEffectEnable true;
			_handle ppEffectAdjust [10];
			_handle ppEffectCommit 0;
			waitUntil {ppEffectCommitted _handle};
			uiSleep 1; 
			_handle ppEffectAdjust [0];
			_handle ppEffectCommit 4;
			waitUntil {ppEffectCommitted _handle};
			_handle ppEffectEnable false;
			ppEffectDestroy _handle;
		};
	};
}, player] call CBA_fnc_targetEvent;

[]execVM "Client\headless\init.sqf";

if ("item_radio" in (assignedItems player))
{
	player setVariable ["RadioToggle", true];
} else {
	player setVariable ["RadioToggle", false];
};


// START THE EXILE OUTPUT. EVERYTHING ABOVE THIS LINE IS WRITTEN BY US

/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

if (!hasInterface || isServer) exitWith {};

// 9 NPCs
private _npcs = [
["Exile_Trader_Armory", [], "Trader_Hospital", "WhiteHead_11", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [6876.55, 11773.9, 862.155], [0.0784068, -0.996921, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Trader_Black_Market", "WhiteHead_06", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","rhs_googles_yellow",[],["","","","","",""]], [6873.69, 11772.9, 862.223], [0.534824, -0.844963, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "Exile_Trader_CommunityCustoms", "WhiteHead_04", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","G_Tactical_Clear",[],["","","","","",""]], [18198.5, 19760.8, 400.021], [0.0566579, -0.998394, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "MikesBikes", "WhiteHead_02", [[],[],[],["TRYK_U_B_BLOD_T",[]],[],["B_Messenger_Black_F",[]],"TRYK_R_CAP_BLK","G_Respirator_white_F",[],["","","","","",""]], [8086.02, 5926.98, 372.306], [0.297405, -0.954752, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "MikesBikes", "WhiteHead_02", [[],[],[],["TRYK_U_B_BLOD_T",[]],[],["B_Messenger_Black_F",[]],"TRYK_R_CAP_BLK","G_Respirator_white_F",[],["","","","","",""]], [12725.8, 2690.22, 137.676], [-0.274373, 0.961623, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "MikesBikes", "Barklem", [[],[],[],["TRYK_U_B_BLOD_T",[]],[],["B_Messenger_Black_F",[]],"TRYK_R_CAP_BLK","G_Respirator_white_F",[],["","","","","",""]], [16297.9, 7548.98, 171.875], [-0.976704, 0.21459, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "MikesBikes", "WhiteHead_14", [[],[],[],["TRYK_U_B_BLOD_T",[]],[],["B_Messenger_Black_F",[]],"TRYK_R_CAP_BLK","G_Respirator_white_F",[],["","","","","",""]], [19297.4, 11474.9, 157.642], [0.136858, -0.990591, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "ArmorTrader", "GreekHead_A3_07", [["hlc_rifle_SG551LB_TAC","","","",["hlc_30Rnd_556x45_EPR_sg550",30],[],""],[],[],["TRYK_U_B_BLK_OD",[]],[],[],"rhs_beanie_green","BWA3_G_Combat_Black",[],["","","","","",""]], [15564.4, 12277.8, 226.184], [-0.997594, 0.0693213, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "MikesBikes", "GreekHead_A3_08", [[],[],[],["TRYK_U_B_BLOD_T",[]],[],["B_Messenger_Black_F",[]],"TRYK_R_CAP_BLK","G_Respirator_white_F",[],["","","","","",""]], [5191.19, 18504, 630.713], [0.497195, 0.867639, 0], [0, 0, 1]]
];

{
    private _logic = "Logic" createVehicleLocal [0, 0, 0];
    private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
    private _animations = _x select 1;
    
    _logic setPosWorld (_x select 5);
    _logic setVectorDirAndUp [_x select 6, _x select 7];
    
    _trader setVariable ["BIS_enableRandomization", false];
    _trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _trader setVariable ["ExileAnimations", _animations];
    _trader setVariable ["ExileTraderType", _x select 2];
    _trader disableAI "ANIM";
    _trader disableAI "MOVE";
    _trader disableAI "FSM";
    _trader disableAI "AUTOTARGET";
    _trader disableAI "TARGET";
    _trader disableAI "CHECKVISIBLE";
    _trader allowDamage false;
    _trader setFace (_x select 3);
    _trader setUnitLoadOut (_x select 4);
    _trader setPosWorld (_x select 5);
    _trader setVectorDirAndUp [_x select 6, _x select 7];
    _trader reveal _logic;
    _trader attachTo [_logic, [0, 0, 0]];
    _trader switchMove (_animations select 0);
    _trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
}
forEach _npcs;