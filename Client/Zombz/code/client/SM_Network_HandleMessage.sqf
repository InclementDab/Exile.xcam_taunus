/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

// Very basic network system...
params [["_type", ""],["_data", []]];
switch (toLower _type) do
{
	case "explodehead":
	{
		_data call SM_Network_ExplodeHead;
	};
	case "notification":
	{
		_data call SM_Network_Notification;
	};
	case "removeguts":
	{
		_data call SM_Network_RemoveGuts;
	};
	case "playsound":
	{
		_data call SM_Say3D;
	};
	default {};
};

true
