/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

//Bones Super Advanced Repair System (SARS)
Bones_fnc_salvageAndRepairMenu = compileFinal preprocessFileLineNumbers "Client\AdvancedRepair\Bones_fnc_salvageAndRepairMenu.sqf";

["ace_unconscious", {
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
}] call CBA_fnc_addEventHandler;




// START THE EXILE OUTPUT. EVERYTHING ABOVE THIS LINE IS WRITTEN BY US

if (!hasInterface || isServer) exitWith {};

// 3 NPCs
private _npcs = [
["Exile_Trader_CommunityCustoms", ["c5efe_MichalLoop"], "Trader_Hospital", "GreekHead_A3_05", [[],[],[],["TRYK_U_B_fleece_UCP",[]],[],[],"","rhs_googles_yellow",[],["","","","","",""]], [6878.48, 11773.8, 862.117], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "WhiteHead_11", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [6876.29, 11773.4, 862.163], [0.0784068, -0.996921, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "WhiteHead_06", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","rhs_googles_yellow",[],["","","","","",""]], [6873.69, 11772.9, 862.223], [0.534824, -0.844963, 0], [0, 0, 1]]
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