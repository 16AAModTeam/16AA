/*
Author: Grey

Dissasembles a static weapon into a set of items and a deployed tripod

Arguments:
0: staticOld <OBJECT>
1: unit <OBJECT>
2: staticNewClass <STRING>
3: staticItems <ARRAY>

Return Value:
Nothing

Return value:
 None
*/
#include "script_component.hpp"

PARAMS_4(_staticOld,_unit,_staticNewClass,_staticItems);
//TODO Add progress bar / delay to make it more realistic
if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    _unit playMove "AmovPercMstpSrasWrflDnon_diary";
};

[{
    PARAMS_4(_staticOld,_unit,_staticNewClass,_staticItems);

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
    {
        //Checks whether the staticItem is actually an item or a weapon. Adds it the correct way depending on weapon type
        _staticItemType = [_x] call ace_common_fnc_getWeaponType;
        if (_staticItemtype == -1) then {
            [_unit, _x] call ace_common_fnc_addToInventory;

        } else{
            _unit addWeapon _x;
        };
    }foreach _staticItems;

}, [_staticOld,_unit,_staticNewClass,_staticItems], 1, 0] call ace_common_fnc_waitAndExecute;
