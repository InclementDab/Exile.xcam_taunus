/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params["_zombie","_player"];

uiSleep 1.5;
private _doTheDo = 
{
	params["_zombie","_player"];

	private _ret = false;
	isNil {_ret = _zombie setOwner (owner _player); true}; // Because this works better unscheduled
	if !(_ret) then // Because this works better unscheduled
	{
		private _startTime = diag_tickTime;
		while {(owner _zombie) != (owner _player)} do
		{
			if (isNull _zombie) exitWith
			{
				"Update zombie locality failed, zombie nolonger exists." call SM_Util_Log;
			};
			if (isNull _player) exitWith
			{
				"Update zombie locality failed, player nolonger exists." call SM_Util_Log;
				deleteVehicle _zombie;
			};

			isNil {_ret = _zombie setOwner (owner _player); true}; // Because this works better unscheduled
			if (_ret) exitWith
			{
				"Locality transfered succesfully" call SM_Util_Log;
			};
			if ((diag_tickTime - _startTime) >= 5) exitWith
			{
				deleteVehicle _zombie;
				"Update zombie locality failed, timed out" call SM_Util_Log;
			};
			uiSleep 0.1;
		};
	};
};

if (_zombie isEqualType []) then
{
	{
		[_x, _player] call _doTheDo;
	} forEach _zombie;
}
else
{
	_this call _doTheDo;
};

true