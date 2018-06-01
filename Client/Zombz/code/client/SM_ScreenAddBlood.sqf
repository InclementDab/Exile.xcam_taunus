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

if (isNull _display) then 
{
	(["HealthPP_blood"] call bis_fnc_rscLayer) cutrsc ["SM_RscHealthTextures", "PLAIN"];
	_display = uiNamespace getVariable ["SM_RscHealthTextures", displayNull];
};


private _lower = _display displayctrl 1211;
private _middle = _display displayctrl 1212;
private _upper = _display displayctrl 1213;
private _left = _display displayctrl 1214;
private _right = _display displayctrl 1215;

_lower ctrlsetfade 0.7;	 
_middle ctrlsetfade 0.7;  
_upper ctrlsetfade 0.7;  
_left ctrlSetFade 0.7;
_right ctrlSetFade 0.7;

_lower ctrlcommit 0.2;
_middle ctrlcommit 0.2;
_upper ctrlcommit 0.2;
_left ctrlCommit 0.2;
_right ctrlCommit 0.2;

true
