/*
Author: Grey

Checks whether static weapon can be disassembled

Arguments:
0: static <OBJECT>
1: unit <OBJECT>

Return Value:
canAdjustHeight - True/False

*/
#include "script_component.hpp"

params["_static","_unit"];
private "_canAdjustHeight";
_canAdjustHeight = false;
if( (alive _static) && (count (crew _static) == 0) && ((count (_static magazinesTurret [0])) == 0) )then {
    _canAdjustHeight = true;
};

_canAdjustHeight