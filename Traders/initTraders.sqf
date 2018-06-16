/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

if (!hasInterface || isServer) exitWith {};

// 16 NPCs
private _npcs = [
["Exile_Trader_CommunityCustoms", [], "Trader_Military_Weapons", "WhiteHead_04", [[],[],[],["BWA3_Uniform_Crew_Fleck",[]],["BWA3_Vest_Fleck",[]],[],"BWA3_Booniehat_Fleck","rhsusf_shemagh2_od",[],["","","","","","TRYK_Headphone_NV"]], [18198.5, 19760.8, 400.021], [0.0566579, -0.998394, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "Mikes_Bikes", "WhiteHead_02", [[],[],[],["TRYK_U_B_BLOD_T",[]],[],["B_Messenger_Black_F",[]],"TRYK_R_CAP_BLK","G_Respirator_white_F",[],["","","","","",""]], [8086.02, 5926.98, 372.306], [0.297408, -0.95475, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "Mikes_Bikes", "WhiteHead_02", [[],[],[],["TRYK_U_B_BLOD_T",[]],[],["B_Messenger_Black_F",[]],"TRYK_R_CAP_BLK","G_Respirator_white_F",[],["","","","","",""]], [12725.8, 2690.22, 137.676], [-0.274379, 0.961622, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "Mikes_Bikes", "Barklem", [[],[],[],["TRYK_U_B_BLOD_T",[]],[],["B_Messenger_Black_F",[]],"TRYK_R_CAP_BLK","G_Respirator_white_F",[],["","","","","",""]], [16297.9, 7548.98, 171.875], [-0.976706, 0.214582, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "Mikes_Bikes", "WhiteHead_14", [[],[],[],["TRYK_U_B_BLOD_T",[]],[],["B_Messenger_Black_F",[]],"TRYK_R_CAP_BLK","G_Respirator_white_F",[],["","","","","",""]], [19297.4, 11474.9, 157.642], [0.136857, -0.990591, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "Mikes_Bikes", "GreekHead_A3_07", [["hlc_rifle_SG551LB_TAC","","","",["hlc_30Rnd_556x45_EPR_sg550",30],[],""],[],[],["TRYK_U_B_BLK_OD",[]],[],[],"rhs_beanie_green","BWA3_G_Combat_Black",[],["","","","","",""]], [15564.4, 12277.8, 226.184], [-0.997594, 0.0693213, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "Mikes_Bikes", "GreekHead_A3_08", [[],[],[],["TRYK_U_B_BLOD_T",[]],[],["B_Messenger_Black_F",[]],"TRYK_R_CAP_BLK","G_Respirator_white_F",[],["","","","","",""]], [5191.19, 18504, 630.713], [0.497201, 0.867635, 0], [0, 0, 1]],
["Exile_Trader_Armory", ["HubSittingChairA_idle1","HubSittingChairA_idle2","HubSittingChairA_idle3","HubSittingChairA_move1"], "Trader_Civilian_Weapons", "WhiteHead_11", [["CSW_LVOA_C_Block","","","",["CSW_LVOA_30rnd_Mk318_SOST_mag",30],[],""],[],[],["TRYK_U_B_BLK_OD_Rollup_CombatUniform",[]],["V_Rangemaster_belt",[]],[],"TRYK_R_CAP_BLK","G_Spectacles",[],["","","","","",""]], [6877.39, 11781.9, 861.952], [0.104131, -0.989944, 0.0957539], [-0.0871557, 0.0868241, 0.992404]],
["Exile_Trader_Equipment", [], "Trader_Civilian_SurvivalGear", "WhiteHead_06", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","rhs_googles_yellow",[],["","","","","",""]], [6869.92, 11781.6, 862.211], [0.534824, -0.844963, 0], [0, 0, 1]],
["Exile_Trader_Abstract", [], "Trader_Civilian_Clothing", "WhiteHead_12", [[],[],[],["rhs_uniform_g3_blk",[]],[],[],"","G_Respirator_yellow_F",[],["","","","","",""]], [6869.76, 11775.3, 862.293], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", [], "Trader_Civilian_Vehicles", "WhiteHead_21", [[],[],[],["U_Marshal",[]],[],[],"rds_Villager_cap1","BWA3_G_Combat_Black",[],["","","","","",""]], [6876.17, 11775.6, 862.153], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Office", [], "Exile_Trader_Office", "GreekHead_A3_05", [[],[],[],["TRYK_SUITS_BLK_F",[]],[],[],"","G_Spectacles_Tinted",[],["","","","","",""]], [6880.02, 11778.2, 862.043], [-0.959221, 0.282657, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Trader_Hardware", "WhiteHead_11", [[],[],[],["U_C_Poor_1",[]],[],[],"H_Construction_earprot_yellow_F","G_Lady_Blue",[],["","","","","",""]], [6874.02, 11784.1, 862.095], [-0.0164576, -0.999865, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "Trader_Military_SurvivalGear", "WhiteHead_20", [[],[],[],["BWA3_Uniform_Crew_Fleck",[]],["BWA3_Vest_Fleck",[]],[],"BWA3_Booniehat_Fleck","rhsusf_shemagh2_od",[],["","","","","","TRYK_Headphone_NV"]], [18201.4, 19760.5, 400.02], [0.0566579, -0.998394, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "Trader_Black_Market", "WhiteHead_02", [[],[],[],["BWA3_Uniform_Crew_Fleck",[]],["BWA3_Vest_Fleck",[]],[],"BWA3_Booniehat_Fleck","rhsusf_shemagh2_od",[],["","","","","","TRYK_Headphone_NV"]], [18203.4, 19760.5, 400.041], [0.0566579, -0.998394, 0], [0, 0, 1]],
["Exile_Trader_CommunityCustoms", [], "Trader_Military_Vehicles", "WhiteHead_06", [[],[],[],["BWA3_Uniform_Crew_Fleck",[]],["BWA3_Vest_Fleck",[]],[],"BWA3_Booniehat_Fleck","rhsusf_shemagh2_od",[],["","","","","","TRYK_Headphone_NV"]], [18205.9, 19760.7, 400.041], [0.0566579, -0.998394, 0], [0, 0, 1]]
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