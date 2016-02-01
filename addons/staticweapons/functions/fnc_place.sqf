/*
 * Author: Grey
 *
 * Place static weapon
 *
 * Arguments:
 * 0: unit <OBJECT>
 * 1: itemClass <STRING>
 * 2: vehicleClass <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_player,'16aa_tripod','16aa_tripod_low'] call lsr_staticweapons_place
 *
 * Public: Yes
 */
#include "script_component.hpp"

params["_unit","_itemClass","_vehicleClass"];

//Remove item needed to assemble static weapon
_unit removeItem _itemClass;

[{
    params ["_unit","_vehicleClass"];
    private ["_direction", "_position", "_vehicle"];

    //Get position of the player
    _direction = getDir _unit;
    _position = (getPosASL _unit) vectorAdd [0.8 * sin(_direction), 0.8 * cos(_direction), 0.02];

    //Create static weapon infront of the player
    _vehicle = createVehicle [_vehicleClass, _position, [], 0, "CAN_COLLIDE"];
    _vehicle setPosASL _position;
    _vehicle setDir _direction;

    //If static weapon is spawned in the ground move it to surface level
    if ((getPosATL _vehicle select 2) - (getPos _vehicle select 2) < 1E-5) then {
        _vehicle setVectorUp (surfaceNormal (position _vehicle));
    };
    _unit reveal _vehicle;

}, [_unit, _vehicleClass], 1, 0] call ace_common_fnc_waitAndExecute;
