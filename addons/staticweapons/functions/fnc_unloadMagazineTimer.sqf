/*
 * Author: Grey
 *
 * Unload current magazine from static weapon using a timer
 *
 * Arguments:
 * 0: static <OBJECT>
 * 1: unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target, _player] call lsr_staticweapons_unloadMagazineTimer
 *
 * Public: Yes
 */
#include "script_component.hpp"

params ["_static","_unit"];

private _progressText = "Unloading Magazine";

//Move player into animation if player is standing
if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

[5, [_static,_unit], {(_this select 0) call FUNC(unloadMagazine);}, {}, _progressText] call ace_common_fnc_progressBar;
