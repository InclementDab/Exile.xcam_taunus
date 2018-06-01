/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _player = _this;
private _canSpawn = true;

switch (true) do
{
	case (_player call SM_IsSafezoneNear):
	{
		format["Player %1 (%2): Failed to spawn zombies due to being in a safezone", (name _player), (getPlayerUID _player)] call SM_Util_Log;
		_canSpawn = false;
	};
	case (isObjectHidden _player):
	{
		format["Player %1 (%2): failed to spawn zombies due to being invisable!", (name _player), (getPlayerUID _player)] call SM_Util_Log;
		_canSpawn = false;
	};
	case ((typeOf _player) isKindOf "Exile_Unit_GhostPlayer"):
	{
		format["Player %1 (%2): failed to spawn zombies due to being ghost player!", (name _player), (getPlayerUID _player)] call SM_Util_Log;
		_canSpawn = false;
	};
	case (!alive _player):
	{
		format["Player %1 (%2): failed to spawn zombies due to being dead", (name _player), (getPlayerUID _player)] call SM_Util_Log;
		_canSpawn = false;
	};
};

_canSpawn
