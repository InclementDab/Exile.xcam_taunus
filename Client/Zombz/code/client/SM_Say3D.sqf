/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params [["_object",objNull],["_sound",""]];

if (_sound == "" || {isNull _object} || {isNil "SM_SoundDistance"}) exitWith {true};

_object say3D [_sound, SM_SoundDistance];

//format["Sound has been played by object %1", _object] call SM_Util_Log;

true
