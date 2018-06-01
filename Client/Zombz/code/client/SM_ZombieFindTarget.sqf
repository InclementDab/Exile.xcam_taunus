/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

private _target = objNull;
private _zombie = _this;

doStop _zombie;

if ((face _zombie) == "SM_ZombzNoFace") exitWith
{
	objNull
};

if !((player distance _zombie) > 1000) then
{
	private _targets = [];
	{
		if ((_zombie distance _x) < 200) then
		{
			_targets pushBack _x;
		};
	} forEach (allPlayers - entities "HeadlessClient_F");
	private _smokes = _zombie nearObjects ["SmokeShell", 200];

	_targets append _smokes;

	private _distance = 200;
	{
		private _unit = _x;
		private _vehicle = vehicle _unit;
		private _tmpDistace = _vehicle distance _zombie;
		private _isvisible = _tmpDistace <= _distance;
		private _detectionnumber = 0;
		if (isPlayer _unit) then
		{
			if (!(_vehicle getVariable ["SM_HasZombieGuts",false]) && {!(_vehicle getVariable ["SM_HasBeenEaten",false])} && {!(isObjectHidden _vehicle)} && {_isvisible}) then
			{	
				if (_unit == _vehicle) then
				{
					switch (stance _unit) do 
					{
						case "STAND": { _detectionnumber = _detectionnumber + 0.50 };
						case "CROUCH": { _detectionnumber = _detectionnumber + 0.35 };
						case "PRONE": { _detectionnumber = _detectionnumber + 0.25 };
						default { _detectionnumber = _detectionnumber + 0 };
					};
				}
				else
				{
					_detectionnumber = random 0.50;
				};
				_detectionnumber = _detectionnumber + call
				{
					if (_tmpDistace < 5) exitWith { 1 };
					if (_tmpDistace >= 5 && {_tmpDistace < 10}) exitWith { 0.50 };
					if (_tmpDistace >= 10 && {_tmpDistace < 20}) exitWith { 0.40 };
					if (_tmpDistace >= 20 && {_tmpDistace < 35}) exitWith { 0.30 };
					if (_tmpDistace >= 35 && {_tmpDistace < 50}) exitWith { 0.25 };
					if (_tmpDistace >= 50 && {_tmpDistace < 100}) exitWith { 0.20 };
					if (_tmpDistace >= 100 && {_tmpDistace < 500}) exitWith { 0.15 };
					0.10
				};

				_detectionnumber = _detectionnumber + random 0.50;

				if ([_zombie, _vehicle] call SM_IsInfrontOf) then 
				{
					_detectionnumber = _detectionnumber + 0.25;
				};

				_isvisible = _detectionnumber >= 1;
			}
			else
			{
				_isvisible = false;
			};
		}
		else
		{
			if (_isvisible) then
			{
				_detectionnumber = _detectionnumber + call
				{
					if (_tmpDistace < 5) exitWith { 1 };
					if (_tmpDistace >= 5 && {_tmpDistace < 10}) exitWith { 0.50 };
					if (_tmpDistace >= 10 && {_tmpDistace < 20}) exitWith { 0.40 };
					if (_tmpDistace >= 20 && {_tmpDistace < 35}) exitWith { 0.30 };
					if (_tmpDistace >= 35 && {_tmpDistace < 50}) exitWith { 0.25 };
					if (_tmpDistace >= 50 && {_tmpDistace < 100}) exitWith { 0.20 };
					if (_tmpDistace >= 100 && {_tmpDistace < 500}) exitWith { 0.15 };
					0.10
				};

				_detectionnumber = _detectionnumber + (random 0.50);

				if ([_zombie, _unit] call SM_IsInfrontOf) then 
				{
					_detectionnumber = _detectionnumber + 0.25;
				};

				_isvisible = _detectionnumber >= 1;
			};
		};
		if (_isvisible) then
		{
			if (_vehicle isKindOf "ChemLight") then
			{
				if (daytime >= 19 || {daytime < 5}) then
				{
					_distance = _tmpDistace;
					_target = _unit;
				};
			}
			else
			{
				_distance = _tmpDistace;
				_target = _unit;
			};
		};
	} forEach _targets;
};

if !(isNull _target) then
{
	_zombie doMove position _target;
};

_target
