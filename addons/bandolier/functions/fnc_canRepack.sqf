/*
Author: Greyparams ["_target", "_player"];



Arguments:
0: unit <OBJECT>

Return Value:


*/
#include "script_component.hpp"
private ["_hasBandolier","_unitMagazines", "_unitMagCounts","_debug"];

_hasBandolier = [ARR_2(_player,'16aa_bandolier_556_200Rnds')] call ace_common_fnc_hasItem;
params ["_player"];

// get all mags and ammo count
_unitMagazines = [];
_unitMagCounts = [];
{
    private "_xFullMagazineCount";
    _x params ["_xClassname", "_xCount", "_xLoaded", "_xType"];

    _xFullMagazineCount = getNumber (configFile >> "CfgMagazines" >> _xClassname >> "count");

    //for every partial magazine, that is either in inventory or can be moved there
    if ((_xCount < _xFullMagazineCount) && {_xCount > 0} && {(!_xLoaded) || {_player canAdd _xClassname}}) then {
        _index = _unitMagazines find _xClassname;
        if (_index == -1) then {
            _unitMagazines pushBack _xClassname;
            _unitMagCounts pushBack [_xCount];
        } else {
            (_unitMagCounts select _index) pushBack _xCount;
        };
    };
} forEach (magazinesAmmoFull _player);
