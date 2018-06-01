/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _message = _this;
if !(_this isEqualType "") then
{
	switch(SM_NotificatonType) do
	{
		case 1:
		{
			private _rscLayer = "SM_Notificaton" call BIS_fnc_RscLayer;
			_rscLayer cutRsc ["SM_Notification","PLAIN",0.1];
			private _display = uinamespace getVariable ["SM_Notification",displayNull];
			playSound "FD_CP_Clear_F";
			(_display displayCtrl 1000) ctrlSetText "ZOMBIE FRAGGED:";
			private _type = if(SM_ExileEnabled) then {"Respect"} else {"diamonds"};
			(_display displayCtrl 1001) ctrlSetText format["You've received %1 %2",_message,_type];
		};
		case 2:
		{
			switch (true) do
			{
				case (SM_ExileEnabled):
				{
					private _killSummary = [];
					_killSummary pushBack ["ZOMBIE FRAGGED", _message];
					_killSummary call ExileClient_gui_hud_showKillDetails;
				};
				default
				{
					private _type = "diamonds";
					private _message = format["You've received %1 %2", _message, _type];
					systemChat _message;
					hintSilent _message;
				};
			};
		};
		default {};
	};
}
else
{
	switch(SM_NotificatonType) do
	{
		case 1:
		{
			private _rscLayer = "SM_Notificaton" call BIS_fnc_RscLayer;
			_rscLayer cutRsc ["SM_Notification","PLAIN",0.1];
			private _display = uinamespace getVariable ["SM_Notification",displayNull];
			playSound "FD_CP_Clear_F";
			(_display displayCtrl 1000) ctrlSetText "SM_Zombz:";
			(_display displayCtrl 1001) ctrlSetText _message;
		};
		case 2:
		{
			switch (true) do
			{
				case (SM_ExileEnabled):
				{
					["SuccessTitleAndText",["SM_Zombz:",_message]] call ExileClient_gui_toaster_addTemplateToast;
				};
				default
				{
					systemChat _message;
					hintSilent _message;
				};
			};
		};
		default {};
	};	
};

true
