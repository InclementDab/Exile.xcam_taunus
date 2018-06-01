/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _position = _this;
private _isNear = false;

switch (true) do
{
	case (SM_ExileEnabled):
	{
		_isNear = _position call ExileClient_util_world_isInTraderZone;
	};
	case (SM_UserSafezoneCheck):
	{
		private _nearSafeZones = [];
		switch (SM_UserSafezoneCheckType) do
		{
			case 1:
			{
				_nearSafeZones = _position nearObjects [SM_UserSafezoneCheckMarkerObjects, SM_UserSafezoneCheckDistance];
			};
			case 2:
			{
				{
					if ((getmarkerType _x) == SM_UserSafezoneCheckMarkerObjects) then
					{
						_nearSafeZones pushBack (getMarkerPos _x);
					};
				} forEach allMapMarkers;
			};
		};

		{
			if ((_position distance _x) <= SM_UserSafezoneCheckDistance) exitWith
			{
				_isNear = true;
			};
		} forEach _nearSafeZones;
	};
};

_isNear
