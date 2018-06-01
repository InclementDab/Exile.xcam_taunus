/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params [["_center", []],["_minDistance", 0],["_maxDistance", 0]];
private _radius = round ((random (_maxDistance - _minDistance)) + _minDistance);
private _angle = round (random 360);
private _position = [round ((_center select 0) + (_radius * (cos _angle))), round((_center select 1) + (_radius * (sin _angle)))];

switch (true) do
{
	case (_position call SM_IsSafezoneNear):
	{
		_position = [];
		"Position is near a safezone" call SM_Util_Log;
	};
	case (_position call SM_BaseAreaCheck):
	{
		_position = [];
		"Position is near a base" call SM_Util_Log;		
	};
	case (surfaceIsWater _position):
	{
		_position = [];
		"Position is in water" call SM_Util_Log;		
	};
};

_position
