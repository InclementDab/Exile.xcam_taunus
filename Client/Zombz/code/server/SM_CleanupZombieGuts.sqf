/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _player = objectFromNetId (_this select 0);

if (isNull _player) exitWith 
{
	"Zombie Guts cleanup failed, due to player object being null!" call SM_Util_Log;
};

_player setVariable ["SM_HasZombieGuts",false,true];

[_player,"RemoveGuts",[]] call SM_Network_SendMessage;


true
