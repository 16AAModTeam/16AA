/*
Author: Grey

Checks whether magazine can be loaded into static weapon

Arguments:
0: static <OBJECT>
1: unit <OBJECT>

Return Value:
canLoadMagazine - True/False

*/
#include "script_component.hpp"

params["_static","_unit"];
private "_canLoadMagazine,_currentMagazine,_weapon,_magazines,_listOfMagNames,_hasCompatibleMagazine,_hasBarrel";

_canLoadMagazine = false;

_currentMagazine = _static currentMagazineTurret [0];
_weapon = (_static weaponsTurret [0]) select 0;

_magazines = magazines _unit;
_listOfMagNames = getArray(configFile >> "cfgWeapons" >> _weapon >> "magazines");
_hasCompatibleMagazine = false;
_hasBarrel = _static getVariable [QGVAR(hasBarrel),true];
{
	if ([_unit,_x] call ace_common_fnc_hasMagazine)  exitWith {_hasCompatibleMagazine = true;};
}forEach _listOfMagNames;

if ( ( ((count (_static magazinesTurret [0])) == 0) || ((_static magazineTurretAmmo [_currentMagazine, [0]]) == 0) ) && _hasCompatibleMagazine && _hasBarrel) then {
	_canLoadMagazine = true;
};
_canLoadMagazine