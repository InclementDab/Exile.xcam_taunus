/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _zombie = _this;

["GutVariable",(netID _zombie)] call SM_Network_SendMessage;

player switchMove "AinvPknlMstpSlayWrflDnon_medic";

if !(player getVariable ["SM_HasZombieGuts", false]) then
{
	[] call SM_ScreenAddBlood;
};

uiSleep 6;

if !(player getVariable ["SM_HasZombieGuts", false]) then
{
	[] call SM_ScreenRemoveBlood;
};

["Gut",[(netId _zombie),(netId player)]] call SM_Network_SendMessage;

true
