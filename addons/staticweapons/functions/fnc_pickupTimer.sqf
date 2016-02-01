/*
 * Author: Grey
 *
 * Pick up static weapon using a 15 second timer
 *
 * Arguments:
 * 0: vehicle <OBJECT>
 * 1: unit <OBJECT>
 * 2: staticItem <STRING>
 * 3: timeToPlace <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target,_player,'16aa_tripod'] call lsr_staticweapons_pickupTimer
 *
 * Public: Yes
 */
#include "script_component.hpp"

<<<<<<< HEAD
params ["_vehicle","_unit","_staticItem","_timeToPlace"];
=======
params ["_vehicle","_unit","_staticItem"];
>>>>>>> 0d09b7dd26e9a1bd802388515dd3b7711a2471c8
private ["_name", "_progressText", "_objectClassName"];

//Get displayname of static weapon to be picked up. Used for progress bar text
_objectClassName = typeOf _vehicle;
_name = getText (configFile >> "CfgVehicles" >> _objectClassName >> "displayName");
_progressText = format["Disassembling: %1", _name];

//Move player to animation if player is standing
if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

[_timeToPlace, [_vehicle,_unit,_staticItem,_timeToPlace], {(_this select 0) call FUNC(pickup);}, {}, _progressText] call ace_common_fnc_progressBar;
