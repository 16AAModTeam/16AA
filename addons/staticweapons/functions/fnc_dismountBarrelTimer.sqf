/*
Author: Grey

Dismounts barrel from static weapon using a timer

Arguments:
0: static <OBJECT>
1: unit <OBJECT>
2: barrelClass <STRING>

Return value:
 None
*/
#include "script_component.hpp"

params["_static","_unit","_barrelClass"];

_progressText = "Detatching Barrel";

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

[15, [_static,_unit,_barrelClass], {(_this select 0) call FUNC(dismountBarrel);}, {}, _progressText] call ace_common_fnc_progressBar;
