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

    _staticNew = _staticNewClass createVehicle _position;
    _staticNew = (typeOf staticNewClass) createVehicle [0, 0, 0];
    _staticNew setPosASL _position;
    _staticNew setDir _direction;

    if ((getPosATL _staticNew select 2) - (getPos _staticNew select 2) < 1E-5) then {
        _staticNew setVectorUp (surfaceNormal (position _staticNew));
    };
    _unit reveal _staticNew;
}, [_staticOld,_staticNewClass,_unit], 1, 0] call EFUNC(common,waitAndExecute);


//Old script
/*
_static = _this select 0;
_phase = _this select 1;
_direction = getDir _static;
_position = getPosASL _static;
deletevehicle _static;
switch (_phase) do {
    case 0: {
    _newStatic = createvehicle["lsr_Static_GPMG_BLU", [0,0,0],[], 0, "CAN_COLLIDE"];
    _newStatic setDir _direction;
    _newStatic setPosASL _position;
    if ((getPosATL _newStatic select 2) - (getPos _newStatic select 2) < 1E-5) then {
        _newStatic setVectorUp (surfaceNormal (position _newStatic));};
    };
    case 1: {
    _newStatic = createvehicle["lsr_Static_GPMG_Middle_BLU", [0,0,0],[], 0, "CAN_COLLIDE"];
    _newStatic setDir _direction;
    _newStatic setPosASL _position;
    if ((getPosATL _newStatic select 2) - (getPos _newStatic select 2) < 1E-5) then {
        _newStatic setVectorUp (surfaceNormal (position _newStatic));};
    };
    case 2: {
    _newStatic = createvehicle["lsr_Static_GPMG_Raised_BLU", [0,0,0],[], 0, "CAN_COLLIDE"];
    _newStatic setDir _direction;
    _newStatic setPosASL _position;
    if ((getPosATL _newStatic select 2) - (getPos _newStatic select 2) < 1E-5) then {
        _newStatic setVectorUp (surfaceNormal (position _newStatic));};
    };
};
*/