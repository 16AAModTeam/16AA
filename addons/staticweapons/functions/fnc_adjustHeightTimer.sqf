/*
 * Author: Grey
 * Raises or lowers static weapon/tripod by calling the adjustHeight function after a 15 second timer has completed
 *
 * Arguments:
 * 0: staticOld <OBJECT>
 * 1: staticNewClass <STRING>
 * 2: unit <OBJECT>
 * 3: timeToPlace <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target,'16aa_L2A1_Static_Base_raised',_player] call lsr_staticweapons_adjustHeightTimer
 *
 * Public: Yes
 */
#include "script_component.hpp"

<<<<<<< HEAD
params ["_staticOld","_staticNewClass","_unit","_timeToPlace"];
=======
params ["_staticOld","_staticNewClass","_unit"];
>>>>>>> 0d09b7dd26e9a1bd802388515dd3b7711a2471c8

private ["_name", "_progressText"];

//Get displayname of the new static weapon to be created. Used for progress bar text
_name = getText (configFile >> "CfgVehicles" >> _staticNewClass >> "displayName");
_progressText = format["Assembling: %1", _name];

//Move player into an animation if player is standing
if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

[_timeToPlace, [_staticOld,_staticNewClass,_unit,_timeToPlace], {(_this select 0) call FUNC(adjustHeight);}, {}, _progressText] call ace_common_fnc_progressBar;
