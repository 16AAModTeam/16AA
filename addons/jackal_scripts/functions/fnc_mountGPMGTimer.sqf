/*
Author: Grey
Mounts GPMG using a timer

Arguments:
0: vehicle <OBJECT>
1: unit <OBJECT>

Return Value:
Nothing

Return value:
 None
*/
#include "script_component.hpp"

PARAMS_2(_vehicle,_unit);

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

[10, [_vehicle, _unit], {(_this select 0) call FUNC(mountGPMG);}, {}, "Mounting GPMG"] call ace_common_fnc_progressBar;
