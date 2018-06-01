/**
 * Author; StokesMagee
 * Website; www.stokesmagee.net
 * Copyright; © 2017 StokesMagee
 *
 * This work is property of StokesMagee. You do not have permissions to use/edit/distribute any of this content
 * without written permission from StokesMagee.
 */

if !(SM_TownSearchEnabled) exitWith { false };

private _player = _this;
private _inTown = false;
{
    private _town = text _x;
    private _pos = getArray (configFile >> "CfgWorlds" >> worldName >> "Names" >> _town >> "position");
    if !(_pos isEqualTo []) then
    {
        private _sizeX = (getNumber (configFile >> "CfgWorlds" >> worldName >> "Names" >> _town >> "radiusA")) / 2;
        private _sizeY = (getNumber (configFile >> "CfgWorlds" >> worldName >> "Names" >> _town >> "radiusB")) / 1.5;
        (getpos _player) params ["_posX","_posY"];
        _pos params ["_tPosX","_tPosY"];

        private _dif = _posX - _tPosX;
        private _dif1 = _posY - _tPosY;
        private _sizeX1 = (_sizeX - _sizeX) - _sizeX;
        private _sizeY1 = (_sizeY - _sizeY) - _sizeY;
        if (((_dif <= _sizeX) && {(_dif >= _sizeX1)}) && {((_dif1 <= _sizeY) && {(_dif1 >= _sizeY1)})}) then
        {
            _inTown = true;
        };
    };
} forEach nearestLocations [getPos _player, SM_TownSearchTypes, SM_SearchForTownRadius];

_inTown
