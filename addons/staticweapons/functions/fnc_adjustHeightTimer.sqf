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

params["_staticOld","_staticNewClass","_unit"];

private ["_name", "_progressText"];

//_name = getText (configFile >> "CfgVehicles" >> _staticOld >> "displayName");
_name  = "Static Weapon";
_progressText = format["Adjusting Height Of %1", _name];

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

[15, [_staticOld,_staticNewClass,_unit], {(_this select 0) call FUNC(adjustHeight);}, {}, _progressText] call ace_common_fnc_progressBar;
