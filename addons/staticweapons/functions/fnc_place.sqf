/*
Author: Grey

Place down tripod

Arguments:
0: unit <OBJECT>
1: tripod class <STRING>

Return Value:
Nothing

Return value:
 None
*/
#include "script_component.hpp"

PARAMS_2(_unit,_tripodClass);

_unit removeItem _tripodClass;

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    _unit playMove "AmovPercMstpSrasWrflDnon_diary";
};

[{
    PARAMS_1(_unit);

    private ["_direction", "_position", "_tripod"];
    _direction = getDir _unit;
    _position = (getPosASL _unit) vectorAdd [0.8 * sin(_direction), 0.8 * cos(_direction), 0.02];

    _tripod = "lsr_tripod_low" createVehicle [0, 0, 0];
    _tripod setPosASL _position;
    _tripod setDir _direction;

    if ((getPosATL _tripod select 2) - (getPos _tripod select 2) < 1E-5) then {
        _tripod setVectorUp (surfaceNormal (position _tripod));
    };
    _unit reveal _tripod;
}, [_unit], 1, 0] call EFUNC(common,waitAndExecute);