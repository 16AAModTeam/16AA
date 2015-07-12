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

PARAMS_3(_tripod,_unit,_staticItem);

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    _unit playMove "AmovPercMstpSrasWrflDnon_diary";
};

[{
    PARAMS_3(_tripod,_unit,_staticItem);

    [_unit, _staticItem] call ace_common_fnc_addToInventory;
    deleteVehicle _tripod;

}, [_tripod, _unit, _staticItem], 1, 0]call ace_common_fnc_waitAndExecute;
