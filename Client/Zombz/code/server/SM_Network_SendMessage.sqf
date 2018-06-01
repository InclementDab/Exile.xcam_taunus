/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params [["_player", objNull],["_messageType", ""],["_data", []]];

if (isNull _player) exitWith { false };

[_messageType, _data] remoteExecCall ["SM_Network_HandleMessage", (owner _player), false];

true
