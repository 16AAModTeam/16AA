/*
Author: Grey

Checks whether magazine can be unloaded from static weapon

Arguments:
0: static <OBJECT>
1: unit <OBJECT>

Return Value:
canUnloadMagazine - True/False

*/
#include "script_component.hpp"

params["_static","_unit"];
private "_canUnloadMagazine,_hasBarrel";

_canUnloadMagazinee = false;
_hasBarrel = _static getVariable [QGVAR(hasBarrel),true];

if (((count (_static magazinesTurret [0])) > 0) &&  _hasBarrel) then {
	_canUnloadMagazine = true;
};
_canUnloadMagazine