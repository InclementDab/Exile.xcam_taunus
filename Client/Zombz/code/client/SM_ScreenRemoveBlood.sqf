/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

disableSerialization;

private _display = uinamespace getVariable ["SM_RscHealthTextures", displayNull];

if (isNull _display) exitWith {};

private _lower = _display displayctrl 1211;
private _middle = _display displayctrl 1212;
private _upper = _display displayctrl 1213;
private _left = _display displayCtrl 1214;
private _right = _display displayCtrl 1215; 

_lower ctrlsetfade 1;
_middle ctrlsetfade 1;
_upper ctrlsetfade 1;
_left ctrlSetFade 1;
_right ctrlSetFade 1;

_upper ctrlcommit 1.5;
_middle ctrlcommit 1;
_lower ctrlcommit 0.8;
_left ctrlCommit 1;
_right ctrlCommit 1;

true
