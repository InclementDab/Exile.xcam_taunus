/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params [["_victim", objNull],["_selection", ""],["_damage", 0],["_damager", objNull],"_hmd","_headExplode"];

if ((_selection != "head") || {_damage < 1} || {(face _victim) == "SM_ZombzNoFace"}) exitWith { _damage };

_victim setFace "SM_ZombzNoFace";
["ExplodeHead", [(netId _victim)]] call SM_Network_SendMessage;

_damage
