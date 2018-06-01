/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

if (player getVariable ["SM_HasZombieGuts",false]) exitWith {};
["AddGuts",[(netid player)]] call SM_Network_SendMessage;

[] call SM_ScreenAddBlood;

true
