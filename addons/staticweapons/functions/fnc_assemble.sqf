/*
Author: Grey

Assembles static weapon using an item from the player inventory

Arguments:
0: staticOld <OBJECT>
2: unit <OBJECT>
1: staticNewClass <STRING>
2: staticItem <STRING>

Return Value:
Nothing

Return value:
 None
*/
#include "script_component.hpp"

PARAMS_4(_staticOld,_unit,_staticNewClass,_staticItem);

_unit removeItem _staticItem;
if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    _unit playMove "AmovPercMstpSrasWrflDnon_diary";
};

[{
    PARAMS_4(_staticOld,_unit,_staticNewClass,_staticItem);

     private ["_direction", "_position"];
    _direction = getDir _staticOld;
    _position = getPosASL _staticOld;
    deletevehicle _staticOld;

    _staticNew = createVehicle [_staticNewClass, _position, [], 0, "CAN_COLLIDE"];
    _staticNew setPosASL _position;
    _staticNew setDir _direction;

    if ((getPosATL _staticNew select 2) - (getPos _staticNew select 2) < 1E-5) then {
        _staticNew setVectorUp (surfaceNormal (position _staticNew));
    };
    _staticNew setPosASL _position; // force that shit on the correct position
    _unit reveal _staticNew;

}, [_staticOld,_unit,_staticNewClass,_staticItem], 1, 0] call ace_common_fnc_waitAndExecute;
