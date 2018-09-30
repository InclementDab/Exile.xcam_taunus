private _mapsizeX = worldSize; 
private _mapsizeY = worldSize; 
private _gridSize = 1400;
private _vehicleConfig = configFile >> "CfgSettings" >> "VehicleSpawn";
if (_gridSize < 1) exitWith { "Failed to spawn dynamic vehicles: _gridSize" call ExileServer_util_log; true };
private _gridVehicles = getNumber(_vehicleConfig >> "vehiclesGridAmount");
if (_gridVehicles < 1) exitWith { "Failed to spawn dynamic vehicles: _gridVehicles" call ExileServer_util_log; true };
private _gridSizeOffset = _gridSize % 2;
private _vehicleCount = 0;
private _vehicles = getArray (_vehicleConfig >> "Ground");
private _ships = getArray (_vehicleConfig >> "water");
private _vehicleClassNames = [[],[]];
private _shipClassNames = [[],[]];
{
	private _tmp = _vehicleClassNames select 0;
	private _tmp1 = _vehicleClassNames select 1;

	_tmp pushBack (_x select 0);
	_tmp1 pushBack (_x select 1);

	_vehicleClassNames set[0, _tmp];
	_vehicleClassNames set[1, _tmp1];
} forEach _vehicles;

{
	private _tmp = _shipClassNames select 0;
	private _tmp1 = _shipClassNames select 1;

	_tmp pushBack (_x select 0);
	_tmp1 pushBack (_x select 1);

	_shipClassNames set[0, _tmp];
	_shipClassNames set[1, _tmp1];
} forEach _ships;

if (_vehicleClassNames isEqualTo []) exitWith { "Failed to spawn dynamic vehicles: _vehicleClassNames" call ExileServer_util_log; true };
if (_shipClassNames isEqualTo []) exitWith { "Failed to spawn dynamic vehicles: _shipClassNames" call ExileServer_util_log; true };
private _maximumDamage = getNumber (_vehicleConfig >> "maximumDamage");
private _damageChance = getNumber (_vehicleConfig >> "damageChance");
private _fuel = (getNumber(_vehicleConfig >> "fuel"));
private _ammo = (getNumber(_vehicleConfig >> "ammo"));

format ["Spawning Dynamic Vehicles. GridSize: %1 Vehs/Grid: %2",_gridSize,_gridVehicles] call ExileServer_util_log;

for "_xSize" from 0 to _mapsizeX step _gridSize do
{
	private _workingXSize = _xSize + _gridSizeOffset;
	for "_ySize" from 0 to _mapsizeY step _gridSize do
	{
		private _workingYSize = _ySize + _gridSizeOffset;
		private _position = [_workingXSize,_workingYSize];
		private _spawned = 0;
		private _spawnedPositions = [];
		while {_spawned < _gridVehicles} do 
		{
			private _positionReal = [_position, 25, _gridSize, 5, 1, 1, 0, _spawnedPositions] call BIS_fnc_findSafePos;
			_positionReal set[2, 0];
			private _spawnControl = [[(_positionReal select 0) - 50, (_positionReal select 1) + 50],[(_positionReal select 0) + 50,(_positionReal select 1) - 50]];
			_spawnedPositions pushBack _spawnControl;
			_positionReal params["_posX","_posY"];
			private _isInside = (_posX < worldSize && {_posY < worldSize} && {_posX > 0} && {_posY > 0});
			if (_isInside) then
			{
				private _vehicleClassName = call
				{
					private _return = "";
					if !(surfaceIsWater _positionReal) then
					{ 
						_return = (_vehicleClassNames select 0) selectRandomWeighted (_vehicleClassNames select 1);
					}
					else
					{ 
						_return = (_shipClassNames select 0) selectRandomWeighted (_shipClassNames select 1);
					};
					_return
				};
				if (_vehicleClassName == "") exitWith { true };
				//format["Spawning vehicle: %1", _vehicleClassName] call ExileServer_util_log;
				private _vehicle = [_vehicleClassName, _positionReal, random 360, !(surfaceIsWater _positionReal)] call ExileServer_object_vehicle_createNonPersistentVehicle;
				private _hitpointsData = getAllHitPointsDamage _vehicle;
				if !(_hitpointsData isEqualTo []) then 
				{
					private _hitpoints = _hitpointsData select 0;
					{
					    if ((random 100) < _damageChance) then
					    {
					        _vehicle setHitPointDamage [_x, random _maximumDamage];
					    };
					} forEach _hitpoints;
				};
				_vehicle setFuel (random _fuel);
				_vehicle setVehicleAmmo (random _ammo);

				private _lootConfig = missionConfigFile >> "CfgExileLootSettings";
				private _maximumNumberOfItemsPerLootSpot = getNumber (_lootConfig >> "maximumNumberOfItemsPerLootSpot");
				private _numberOfItemsToSpawn = (floor (random _maximumNumberOfItemsPerLootSpot)) + 1;
				private _spawnedItemClassNames = [];
				
				/*
				for "_n" from 1 to _numberOfItemsToSpawn do
				{
					private _itemClassName = "Residential" call ExileServer_system_lootManager_dropItem;
					if !(_itemClassName in _spawnedItemClassNames) then
					{
						private _cargoType = _itemClassName call ExileClient_util_cargo_getType;
						switch (_cargoType) do
						{
							case 1: 	
							{ 
								if (_itemClassName isEqualTo "Exile_Item_MountainDupe") then
								{
									_vehicle addMagazineCargoGlobal [_itemClassName, 2]; 
								}
								else 
								{
									_vehicle addMagazineCargoGlobal [_itemClassName, 1]; 
								};
							};
							case 3: 	
							{ 
								_vehicle addBackpackCargoGlobal [_itemClassName, 1]; 
							};
							case 2: 	
							{ 
								_vehicle addWeaponCargoGlobal [_itemClassName, 1]; 
								if !(_itemClassName isKindOf ["Exile_Melee_Abstract", configFile >> "SubMachineGuns"]) then
								{
									private _magazineClassNames = getArray(configFile >> "SubMachineGuns" >> _itemClassName >> "magazines");
									if (count(_magazineClassNames) > 0) then
									{
										private _magazineClassName = selectRandom _magazineClassNames;
										private _numberOfMagazines = 1 + floor(random 0); 
										_vehicle addMagazineCargoGlobal [_magazineClassName, _numberOfMagazines];
										_spawnedItemClassNames pushBack _magazineClassName;
									};
								};
								_numberOfItemsToSpawn = -1;
							};
							default
							{ 
								_vehicle addItemCargoGlobal [_itemClassName, 1]; 
							};
						};
						_spawnedItemClassNames pushBack _itemClassName;
					};
				};
				*/

				_spawned = _spawned + 1;
				_vehicleCount = _vehicleCount + 1;
				//format ["Spawned dynamic vehicle %1",_vehicleCount] call ExileServer_util_log;
			};
		};
	};
};
format ["Dynamic vehicles spawned. Count : %1",_vehicleCount] call ExileServer_util_log;
true
