/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _player = _this;
private _currentZombiesArray = _player getVariable ["SM_CurrentZombies", [0, []]];

if (_currentZombiesArray isEqualTo [0, []]) exitWith { _currentZombiesArray };

_currentZombiesArray params ["_currentZombies","_currentZombieSpawned"];

if (_currentZombies != (count _currentZombieSpawned)) then
{
	{
		private _zombie = objectFromNetId _x;
		if (!isNull _zombie && {alive _zombie}) then
		{
			_currentZombies = _currentZombies + 1;
		}
		else
		{
			_currentZombieSpawned = _currentZombieSpawned - [_x];
		};
	} forEach _currentZombieSpawned;
};

_player setVariable ["SM_CurrentZombies", [_currentZombies, _currentZombieSpawned]];

[_currentZombies, _currentZombieSpawned]
