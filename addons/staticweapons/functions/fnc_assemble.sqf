/*
Author: Grey

Assembles static weapon using an item from the player inventory

Arguments:
0: staticOld <OBJECT>
1: unit <OBJECT>
2: staticNewClass <STRING>
3: staticItem <STRING>

Return Value:
Nothing

Return value:
 None
*/
#include "script_component.hpp"

params["_staticOld","_unit","_staticNewClass","_staticItem"];

_staticItemType = [_staticItem] call ace_common_fnc_getWeaponType;

if (_staticItemtype == -1) then {
    _unit removeItem _staticItem;
} else{
    _unit removeWeapon _staticItem;
};

[{
    params["_staticOld","_unit","_staticNewClass","_staticItem"];

     private ["_direction,_position,_configBarrel"];
    _direction = getDir _staticOld;
    _position = getPosASL _staticOld;
    deletevehicle _staticOld;

    _staticNew = createVehicle [_staticNewClass, _position, [], 0, "CAN_COLLIDE"];
    _staticNew setPosASL _position;
    _staticNew setDir _direction;

    _configBarrel = getNumber (configFile >> "CfgVehicles" >> typeOf _staticNew >> QGVAR(enableBarrel));
    if(_configBarrel == 1) then{
        _staticNew setvariable [QGVAR(hasBarrel), false, true];
        _staticNew lockTurret [[0], true];
    };

    if ((getPosATL _staticNew select 2) - (getPos _staticNew select 2) < 1E-5) then {
        _staticNew setVectorUp (surfaceNormal (position _staticNew));
    };
    _staticNew setPosASL _position;
    _unit reveal _staticNew;

}, [_staticOld,_unit,_staticNewClass,_staticItem], 1, 0] call ace_common_fnc_waitAndExecute;
