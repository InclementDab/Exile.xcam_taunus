/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

if (SM_Debug) then
{
	private _version = getText(configFile >> "CfgPatches" >> "SM_Zombz_code" >> "version");
	diag_log format["SM_Zombz %1: %2", _version, _this];

	if (hasInterface) then
	{
		systemchat format["SM_Zombz %1: %2", _version, _this];
	};
};

true
