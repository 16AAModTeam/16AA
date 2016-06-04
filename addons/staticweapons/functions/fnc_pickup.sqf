/*
 * Author: Grey
 *
 * Pick up static weapon
 *
 * Arguments:
 * 0: vehicle <OBJECT>
 * 1: unit <OBJECT>
 * 2: staticItem <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target,_player,'16aa_tripod'] call lsr_staticweapons_pickup
 *
 * Public: Yes
 */
#include "script_component.hpp"

params ["_vehicle","_unit","_staticItem"];
[{
    params ["_vehicle","_unit","_staticItem"];

    //Add item to players inventory and delete the static weapon
    [_unit, _staticItem] call ace_common_fnc_addToInventory;
    deleteVehicle _vehicle;

}, [_vehicle, _unit, _staticItem], 1, 0]call CBA_fnc_waitAndExecute;
