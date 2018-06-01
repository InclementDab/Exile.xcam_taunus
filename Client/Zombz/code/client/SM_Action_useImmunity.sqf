/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

player setVariable ["SM_IsImmune", true, true];
SM_InfectionCleanupThread = [SM_ImmunityLength, { player setVariable ["SM_IsImmune", nil, true]; true }, [], false, "Infection cleanup"] call SM_System_AddTask;

player removeMagazine "SM_Zombz_Item_immunity";

true