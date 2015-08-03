/*
Author: Grey

Place down tripod using a timer

Arguments:
0: unit <OBJECT>
1: item <STRING>
2: tripod <STRING>

Return Value:
Nothing

Return value:
 None
*/
#include "script_component.hpp"

PARAMS_3(_unit,_tripodClass,_objectClass);

private ["_name", "_progressText"];
_name = getText (configFile >> "CfgVehicles" >> _objectClass >> "displayName");
_progressText = format["Assembling: %1", _name];

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

[15, [_unit,_tripodClass,_objectClass], {(_this select 0) call FUNC(place);}, {}, _progressText] call ace_common_fnc_progressBar;
