/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

params [["_type", ""],["_data", []]];
switch (toLower _type) do
{
	case "updatelocality":
	{
		_data spawn SM_Network_UpdateLocality;
	};
	case "killzombie":
	{
		_data call SM_Network_KillZombie;
	};
	case "addguts":
	{
		_data call SM_Network_AddGuts;
	};
	case "explodehead":
	{
		_data call SM_Network_HandleDamage;
	};
	case "gut":
	{
		_data call SM_Network_Gut;
	};
	case "gutvariable":
	{
		_data call SM_Network_GutVariable;
	};
	default {};
};

true
