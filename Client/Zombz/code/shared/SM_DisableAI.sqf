/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _zombie = _this select 0;

_zombie allowFleeing 0;
_zombie setMimic "safe";
_zombie setBehaviour "CARELESS";
_zombie disableAI "FSM";
_zombie disableAI "COVER";
_zombie disableAI "AUTOCOMBAT";
_zombie disableAI "AUTOTARGET";
_zombie disableAI "TARGET";
_zombie disableAI "AIMINGERROR";
_zombie disableAI "SUPPRESSION";
_zombie setunitpos "UP";
_zombie disableConversation true;
_zombie setCombatMode "RED";
_zombie setSpeaker "NoVoice";
_zombie setVariable ["Vcm_Disable",true];

true
