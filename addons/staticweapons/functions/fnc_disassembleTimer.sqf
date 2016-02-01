/*
 * Author: Grey
 * Dissasembles a static weapon into a set of items and a deployed tripod using a 15 second timer
 *
 * Arguments:
 * 0: staticOld <OBJECT>
 * 1: unit <OBJECT>
 * 2: staticNewClass <STRING>
 * 3: staticItems <ARRAY>
 * 4: timeToPlace <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target,_player,'16aa_tripod_low',['16aa_static_item_gmg_receiver']] call lsr_staticweapons_disassembleTimer
 *
 * Public: Yes
 */
#include "script_component.hpp"

<<<<<<< HEAD
params ["_staticOld","_unit","_staticNewClass","_staticItems","_timeToPlace"];
=======
params ["_staticOld","_unit","_staticNewClass","_staticItems"];
>>>>>>> 0d09b7dd26e9a1bd802388515dd3b7711a2471c8
private ["_name", "_progressText", "_objectClassName"];

//Get displayname of static weapon to be created. Used for progress bar text
_objectClassName = typeOf _staticOld;
_name = getText (configFile >> "CfgVehicles" >> _objectClassName >> "displayName");
_progressText = format["Disassembling: %1", _name];

//Move player to animation if player is standing
if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

[_timeToPlace, [_staticOld,_unit,_staticNewClass,_staticItems,_timeToPlace], {(_this select 0) call FUNC(disassemble);}, {}, _progressText] call ace_common_fnc_progressBar;
