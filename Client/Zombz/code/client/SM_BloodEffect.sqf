/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

disableSerialization;

if (SM_CustomScreenEffects) then
{
	_rscLayer = "SM_ScreenEffect" call bis_fnc_rsclayer;
	_rscLayer cutRsc ["SM_ScreenEffect","PLAIN",0.6];
	_display = uinamespace getvariable ["SM_ScreenEffect",displayNull];
	(_display displayCtrl 1200) ctrlSetText (selectRandom SM_ScreenEffects);
	(_display displayCtrl 1200) ctrlSetTextColor [1,1,1,(0.1 min (random 0.45))];
};

[] call SM_ScreenAddBlood;
[] spawn
{
	uiSleep 1.5;
	[] call SM_ScreenRemoveBlood;
	true
};

true
