/*
Author: Grey

Raises or lowers tripod

Arguments:
0: staticOld <OBJECT>
1: staticNewClass <STRING>
2: unit <OBJECT>


Return Value:
Nothing

Return value:
 None
*/
#include "script_component.hpp"

PARAMS_3(_staticOld,_staticNewClass,_unit);

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

// TODO kick out anyone inside the static weapon
// TODO lock the static weapon

[{
    PARAMS_3(_staticOld,_staticNewClass,_unit);

    private ["_direction", "_position","_staticNew"];
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
}, [_staticOld,_staticNewClass,_unit], 1, 0] call ace_common_fnc_waitAndExecute;
