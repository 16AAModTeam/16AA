/*
Author: Grey

Checks whether static weapon can be disassembled

Arguments:
0: static <OBJECT>
1: unit <OBJECT>

Return Value:
canMount - True/False

*/
#include "script_component.hpp"

params["_static","_unit"];
private "_canDisassemble";

_canDisassemble = false;
if(!(_static getVariable [QGVAR(hasBarrel),false]) && (alive _static) && (count crew _static == 0))then {
    _canDisassemble = true;
};
_canDisassemble