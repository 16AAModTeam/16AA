/*
 * Author: Grey
 * Checks whether a static weapon can be disassembled
 *
 * Arguments:
 * 0: static <OBJECT>
 * 1: unit <OBJECT>
 *
 * Return Value:
 * canDisassemble <BOOL>
 *
 * Example:
 * [_target,_player] call lsr_staticweapons_canDisassemble
 *
 * Public: Yes
 */
#include "script_component.hpp"

params ["_static","_unit"];
private "_canDisassemble";

_canDisassemble = false;
//If static weapon doesn't have a barrel, is alive, has no crew and no magazine then it can be disassembled
if(!(_static getVariable [QGVAR(hasBarrel),false]) && (alive _static) && (count crew _static == 0) && ((count (_static magazinesTurret [0])) == 0) ) then {
    _canDisassemble = true;
};
_canDisassemble
