/*
Author: Grey

Loads Magazine into static weapon

Arguments:
0: static <OBJECT>
1: unit <OBJECT>

Return Value:
nothing

*/
#include "script_component.hpp"

params["_static","_unit"];
private "_weapon,_currentMagazine,_magazines,_listOfMagNames,_magazineClass";

_weapon = (_static weaponsTurret [0]) select 0;
_currentMagazine = _static currentMagazineTurret [0];
_magazines = magazines _unit;
_listOfMagNames = getArray(configFile >> "cfgWeapons" >> _weapon >> "magazines");
_magazineClass = "";

{
	if ([_unit,_x] call ace_common_fnc_hasMagazine) exitWith {_magazineClass = _listOfMagNames select _forEachIndex;};
}forEach _listOfMagNames;

if ((_static magazineTurretAmmo [_currentMagazine, [0]]) == 0) then {
	_static removeMagazineTurret[_currentMagazine,[0]];
};

_unit removeMagazine _magazineClass;
_static addMagazineTurret [_magazineClass,[0]];