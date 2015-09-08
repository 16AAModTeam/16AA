/*
Author: Grey

Mounts barrel to static weapon

Arguments:
0: static <OBJECT>
1: unit <OBJECT>
2: barrelClass <STRING>

Return value:
 None
*/
#include "script_component.hpp"

params["_static","_unit","_barrelClass"];

_unit removeItem _barrelClass;

_static setvariable [QGVAR(hasBarrel), true, true];

_static animate ["barrel_hide",0];

_static lockTurret [[0], false];
