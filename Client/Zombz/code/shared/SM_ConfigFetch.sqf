/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params ["_variable","_defaultValue"];
private _configPath = configNull;

//Check if value exists in mission
private _configPath = ([configFile, missionConfigFile] select (str(missionConfigFile >> "SM_Zombz" >> _variable) != "")) >> "SM_Zombz" >> _variable;

if (isNull _configPath) exitWith { _defaultValue };
if ((str _configPath) == "") exitWith { _defaultValue };

//Attempt to get the value
private _return = _defaultValue;
switch (typeName _defaultValue) do
{
	case "SCALAR":
	{
		_return = getNumber _configPath;
	};
	case "ARRAY":
	{
		_return = getArray _configPath;
	};
	case "BOOL":
	{
		_return = (getNumber _configPath) == 1;
	};
	case "STRING":
	{
		_return = getText _configPath;
	};
};

_return