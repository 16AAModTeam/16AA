/*
 * Author: Grey
 *
 * Pick up static weapon using a 15 second timer
 *
 * Arguments:
 * 0: vehicle <OBJECT>
 * 1: unit <OBJECT>
 * 2: staticItem <STRING>
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

params["_vehicle","_unit","_staticItem"];
private ["_name, _progressText, _objectClassName"];

//Get displayname of static weapon to be picked up. Used for progress bar text
_objectClassName = typeOf _vehicle;
_name = getText (configFile >> "CfgVehicles" >> _objectClassName >> "displayName");
_progressText = format["Disassembling: %1", _name];

//Move player to animation if player is standing
if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

[15, [_vehicle,_unit,_staticItem], {(_this select 0) call FUNC(pickup);}, {}, _progressText] call ace_common_fnc_progressBar;
