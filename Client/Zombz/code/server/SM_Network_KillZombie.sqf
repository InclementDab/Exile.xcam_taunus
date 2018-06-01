/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _zombie = objectFromNetId _this;

if (isNull _zombie || {!(_zombie isKindOf "SM_Zombz_Base")}) exitWith {true};

deleteVehicle _zombie;

true
