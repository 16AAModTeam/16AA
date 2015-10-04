/*
 * Author: Grey
 * Checks whether a static weapon can have its height adjusted
 *
 * Arguments:
 * 0: static <OBJECT>
 * 1: unit <OBJECT>
 *
 * Return Value:
 * canAdjustHeight <BOOL>
 *
 * Example:
 * [_target,_player] call lsr_staticweapons_canAdjustHeight
 *
 * Public: Yes
 */
#include "script_component.hpp"

params["_static","_unit"];
private "_canAdjustHeight";

_canAdjustHeight = false;
//If the static weapon is alive and has no crew then it have its height adjusted
if( (alive _static) && (count (crew _static) == 0) )then {
    _canAdjustHeight = true;
};
_canAdjustHeight