/*
Author: Grey

Pick up tripod

Arguments:
0: tripod <OBJECT>
1: unit <OBJECT>
2: staticItem<String>

Return Value:
Nothing

Return value:
None
*/
#include "script_component.hpp"

params["_tripod","_unit","_staticItem"];
[{
    params["_tripod","_unit","_staticItem"];

    [_unit, _staticItem] call ace_common_fnc_addToInventory;
    deleteVehicle _tripod;

}, [_tripod, _unit, _staticItem], 1, 0]call ace_common_fnc_waitAndExecute;
