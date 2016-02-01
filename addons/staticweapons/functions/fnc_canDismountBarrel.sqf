/*
 * Author: Grey
 * Checks whether a static weapon can have its barrel removed
 *
 * Arguments:
 * 0: static <OBJECT>
 * 1: unit <OBJECT>
 *
 * Return Value:
 * canDismountBarrel <BOOL>
 *
 * Example:
 * [_target,_player] call lsr_staticweapons_canDismountBarrel
 *
 * Public: Yes
 */
#include "script_component.hpp"

params ["_static","_unit"];
private "_canDismountBarrel";

_canDismountBarrel = false;
//If static weapon has a barrel, is alive, has no crew and no magazine then its barrel can be removed
if((_static getVariable [QGVAR(hasBarrel),true]) && (alive _static) && ((count (_static magazinesTurret [0])) == 0) )then {
    _canDismountBarrel = true;
};
_canDismountBarrel
