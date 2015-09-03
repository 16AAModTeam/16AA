/*
Author: Grey

Checks whether barrel can be mounted to static weapon

Arguments:
0: static <OBJECT>
1: unit <OBJECT>
2: barrelClass <STRING>

Return Value:
canMount - True/False

*/
#include "script_component.hpp"

params["_static","_unit","_barrelClass"];
private "_canMount";

_canMount = false;
if(!(_static getVariable [QGVAR(hasBarrel),true]) && (alive _static) && ([_unit,_barrelClass] call ace_common_fnc_hasItem) && ((count (_static magazinesTurret [0])) == 0))then {
    _canMount = true;
};
_canMount