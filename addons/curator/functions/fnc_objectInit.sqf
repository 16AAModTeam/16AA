/*
 * Author: Glowbal
 * Initalize the gear script for a unit
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

#include "script_component.hpp"

if (!isServer) exitwith {};

private "_object";
_object = _this select 0;

if (!(_object getvariable [QGVAR(addObject), GVAR(auto_add_objects)])) exitwith {};

{
    _x addCuratorEditableObjects [[_object], true];
}foreach allCurators;
