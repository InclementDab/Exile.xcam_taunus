/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

"dynamicblur" ppEffectEnable true;
"dynamicblur" ppEffectAdjust [1];
"dynamicblur" ppEffectCommit 0;
"dynamicblur" ppEffectAdjust [0];
"dynamicblur" ppEffectCommit (1 + random 1);

[] call SM_BloodEffect;

if !(SM_ExileEnabled) exitWith {true};

ExileClientPlayerIsInCombat = true;
ExileClientPlayerLastCombatAt = diag_tickTime;
true call ExileClient_gui_hud_toggleCombatIcon;

true
