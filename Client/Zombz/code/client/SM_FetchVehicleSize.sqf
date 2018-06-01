/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _vehicle = vehicle _this;
(boundingBoxReal _vehicle) params ["_dif0","_dif1"];

private _distance = 1;
switch (true) do
{
	case (_vehicle isKindOf "Man"):
	{
		_distance = _dif0 distance2D _dif1;
	};
	case (_vehicle isKindOf "Air"):
	{
		_distance = (_dif0 distance2D _dif1) / 1.6;
	};
	default
	{
		_distance = (_dif0 distance2D _dif1) / 1.3;
	};
};

_distance
