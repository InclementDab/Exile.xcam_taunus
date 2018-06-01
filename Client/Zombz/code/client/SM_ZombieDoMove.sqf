/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params ["_zombie","_anim"];
if !(_zombie isKindOf "SM_Zombz_Base") exitWith {};

_zombie switchMove _anim;

//format["Animation %1 has been played by object %2", _anim, _zombie] call SM_Util_Log;

true
