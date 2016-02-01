/*
 * Author: Grey
 * Loads Magazine into static weapon using a timer
 *
 * Arguments:
 * 0: static <OBJECT>
 * 1: unit <OBJECT>
 * 2: magazineClassOptional <OPTIONAL><STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target,_player,'16aa_static_magazine_l16_illum'] call lsr_staticweapons_loadMagazineTimer
 *
 * Public: Yes
 */
#include "script_component.hpp"

params ["_static","_unit","_magazineClassOptional","_timeToLoad"];

private _progressText = "Loading Magazine";
//Move player into animation if player is standing
if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

[_timeToLoad, [_static,_unit,_magazineClassOptional], {(_this select 0) call FUNC(loadMagazine);}, {}, _progressText] call ace_common_fnc_progressBar;
