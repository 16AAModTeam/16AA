/*
Author: Grey

Checks whether barrel can be dismounted from static weapon

Arguments:
0: static <OBJECT>
1: unit <OBJECT>

Return value:
canDismount - True/False
*/
#include "script_component.hpp"

params["_static","_unit"];
private "_canDismount";

_canDismount = false;
if((_static getVariable [QGVAR(hasBarrel),true]) && (alive _static) && ((count (_static magazinesTurret [0])) == 0) )then {
    _canDismount = true;
};
_canDismount