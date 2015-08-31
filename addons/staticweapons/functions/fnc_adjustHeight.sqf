/*
Author: Grey

Raises or lowers static weapon/tripod

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

params["_staticOld","_staticNewClass","_unit"];

[{
    params["_staticOld","_staticNewClass","_unit"];

    private ["_direction", "_position","_staticNew","_hasBarrelV","_staticName"];
    _direction = getDir _staticOld;
    _position = getPosASL _staticOld;
    _hasBarrelV = false;
    if(_staticOld getVariable [QGVAR(hasBarrel),false])then {
        _hasBarrelV = true;
    };

    deletevehicle _staticOld;

    _staticNew = createVehicle [_staticNewClass, _position, [], 0, "CAN_COLLIDE"];
    _staticNew setPosASL _position;
    _staticNew setDir _direction;
    _staticName = typeOf _staticNew;
    switch (_staticName) do{
        case "16aa_L2A1_Static_Base": {
            if(_hasBarrelV)then {
                _staticNew setvariable [QGVAR(hasBarrel), true, true];
                _staticNew lockTurret [[0], false];
                _staticNew animate ["barrel_hide",0];
            }else{
                _staticNew setvariable [QGVAR(hasBarrel), false, true];
                _staticNew lockTurret [[0], true];
            };
        };
        case "16aa_L2A1_Static_Base_middle": {
             if(_hasBarrelV)then {
                _staticNew setvariable [QGVAR(hasBarrel), true, true];
                _staticNew lockTurret [[0], false];
                _staticNew animate ["barrel_hide",0];
            }else{
                _staticNew setvariable [QGVAR(hasBarrel), false, true];
                _staticNew lockTurret [[0], true];
            };
        };
        case "16aa_L2A1_Static_Base_raised": {
             if(_hasBarrelV)then {
                _staticNew setvariable [QGVAR(hasBarrel), true, true];
                _staticNew lockTurret [[0], false];
                _staticNew animate ["barrel_hide",0];
            }else{
                _staticNew setvariable [QGVAR(hasBarrel), false, true];
                _staticNew lockTurret [[0], true];
            };
        };
        case "16aa_GMG_Static_Base": {
             if(_hasBarrelV)then {
                _staticNew setvariable [QGVAR(hasBarrel), true, true];
                _staticNew lockTurret [[0], false];
                _staticNew animate ["barrel_hide",0];
            }else{
                _staticNew setvariable [QGVAR(hasBarrel), false, true];
                _staticNew lockTurret [[0], true];
            };
        };
        case "16aa_GMG_Static_Base_middle": {
             if(_hasBarrelV)then {
                _staticNew setvariable [QGVAR(hasBarrel), true, true];
                _staticNew lockTurret [[0], false];
                _staticNew animate ["barrel_hide",0];
            }else{
                _staticNew setvariable [QGVAR(hasBarrel), false, true];
                _staticNew lockTurret [[0], true];
            };
        };
        case "16aa_GMG_Static_Base_raised": {
             if(_hasBarrelV)then {
                _staticNew setvariable [QGVAR(hasBarrel), true, true];
                _staticNew lockTurret [[0], false];
                _staticNew animate ["barrel_hide",0];
            }else{
                _staticNew setvariable [QGVAR(hasBarrel), false, true];
                _staticNew lockTurret [[0], true];
            };
        };
    };

    if ((getPosATL _staticNew select 2) - (getPos _staticNew select 2) < 1E-5) then {
        _staticNew setVectorUp (surfaceNormal (position _staticNew));
    };
    _staticNew setPosASL _position; // force that shit on the correct position
    _unit reveal _staticNew;

}, [_staticOld,_staticNewClass,_unit], 1, 0] call ace_common_fnc_waitAndExecute;
