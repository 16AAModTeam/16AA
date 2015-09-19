/*
Author: Grey

Unloads magazine from static weapon

Arguments:
0: static <OBJECT>
1: unit <OBJECT>

Return Value:
nothing

*/
#include "script_component.hpp"

params["_static","_unit"];
private "_weapon,_currentMagazine,_ammoCount";

_weapon = (_static weaponsTurret [0]) select 0;
_currentMagazine = _static currentMagazineTurret [0];
_ammoCount = _static magazineTurretAmmo [_currentMagazine, [0]];

if (_ammoCount == 0) then {
	["16aa_staticweapons_removeMagazine", [_static], [_static, _currentMagazine]] call ace_common_fnc_targetEvent;
}else {
	_pos = _unit modelToWorldVisual [0,1,0];
    _unit = createVehicle ["WeaponHolder_Single_F",_pos,[],0,"NONE"];
    _unit addMagazineAmmoCargo [_currentMagazine, 1, _ammocount];
    _unit setPosATL _pos;
    ["16aa_staticweapons_removeMagazine", [_static], [_static, _currentMagazine]] call ace_common_fnc_targetEvent;
};