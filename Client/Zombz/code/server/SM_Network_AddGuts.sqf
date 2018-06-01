/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _player = objectFromNetId (_this select 0);

_player removeMagazine "SM_Zombz_Item_Heart";
_player setVariable ["SM_HasZombieGuts", true, true];

// :| server cleanup guts..
[SM_ZombieGutsLength,SM_CleanupZombieGuts,[(_this select 0)],false,"Guts Task"] call SM_System_AddTask;

// Give the player a bloody effect.
_player setObjectMaterialGlobal [0, "A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat"];

true
