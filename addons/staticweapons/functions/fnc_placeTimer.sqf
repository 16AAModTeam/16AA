/*
 * Author: Grey
 *
 * Place static weapon using a 15 second timer
 *
 * Arguments:
 * 0: unit <OBJECT>
 * 1: itemClass <STRING>
 * 2: vehicleClass <STRING>
 * 3: timeToPlace <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_player,'16aa_tripod','16aa_tripod_low',15] call lsr_staticweapons_placeTimer
 *
 * Public: Yes
 */
#include "script_component.hpp"

params["_unit","_itemClass","_vehicleClass","_timeToPlace"];
private ["_name, _progressText"];

//Get displayname of the static weapon to be created. Used in progress bar text
_name = getText (configFile >> "CfgVehicles" >> _vehicleClass >> "displayName");
_progressText = format["Assembling: %1", _name];

//Move player to animation if player is standing
if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

[_timeToPlace, [_unit,_itemClass,_vehicleClass,_timeToPlace], {(_this select 0) call FUNC(place);}, {}, _progressText] call ace_common_fnc_progressBar;
