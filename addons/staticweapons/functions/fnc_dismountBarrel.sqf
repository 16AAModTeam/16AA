/*
Author: Grey

Dismounts barrel from static weapon

Arguments:
0: static <OBJECT>
1: unit <OBJECT>
2: barrelClass <STRING>

Return value:
 None
*/
#include "script_component.hpp"

params["_static","_unit","_barrelClass"];

[_unit, _barrelClass] call ace_common_fnc_addToInventory;

_static setvariable [QGVAR(hasBarrel), false, true];

_static animate ["barrel_hide",1];

_static lockTurret [[0], true];
