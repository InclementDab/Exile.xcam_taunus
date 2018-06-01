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
		if (SM_ExileSearchForBaseMaxRange) then
		{
			_maxRange = getNumber (missionConfigFile >> "CfgTerritories" >> "maximumRadius");
			_isNear = !((_position nearObjects ["Exile_Construction_Flag_Static", _maxRange]) isEqualTo []);
		}
		else
		{
			// No one seems to like this, because it searches based on the territory level size.
			_isNear = _position call ExileClient_util_world_isInTerritory;
		};
	};
	case (SM_UserBaseCheck):
	{
		private _nearBases = [];
		switch (SM_UserBaseCheckType) do
		{
			case 1:
			{
				_nearBases = _position nearObjects [SM_UserBaseCheckMarkerObjects, SM_UserBaseCheckDistance];
			};
			case 2:
			{
				{
					if ((getmarkerType _x) in SM_UserBaseCheckMarkerObjects) then
					{
						_nearBases pushBack (getMarkerPos _x);
					};
				} forEach allMapMarkers;
			};
		};

		{
			if ((_position distance _x) <= SM_UserBaseCheckDistance) exitWith
			{
				_isNear = true;
			};
		} forEach _nearBases;
	};
};

_isNear
