/*
Author: Grey

Loads magazine using a timer

Arguments:
0: static <OBJECT>
1: unit <OBJECT>
2: magazineClassOptional <Optional>

Return value:
 None
*/
#include "script_component.hpp"

params["_static","_unit","_magazineClassOptional","_timeToLoad"];

_progressText = "Loading Magazine";

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

[_timeToLoad, [_static,_unit,_magazineClassOptional], {(_this select 0) call FUNC(loadMagazine);}, {}, _progressText] call ace_common_fnc_progressBar;
