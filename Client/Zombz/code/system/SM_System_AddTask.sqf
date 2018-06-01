/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

_this spawn
{
	params[["_interval", 0],["_code", {}],["_params", []],["_persistant", false],["_name", "Not set"]];
	scriptName _name;
	if (_persistant) then
	{
		while {true} do
		{
			uiSleep _interval;
			_params call _code;
		};
	}
	else
	{
		uiSleep _interval;
		_params call _code;
	};
};
