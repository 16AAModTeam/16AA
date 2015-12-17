/*
 * Author: Grey
 * Assembles a static weapon using an item from the players inventory
 *
 * Arguments:
 * 0: staticOld <OBJECT>
 * 1: unit <OBJECT>
 * 2: staticNewClass <STRING>
 * 3: staticItem <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target,_player,'16aa_GMG_Static_Base','16aa_static_item_gmg_receiver'] call lsr_staticweapons_assemble
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_staticOld","_unit","_staticNewClass","_staticItem"];

//If staticItem is of a specific type then use the correct method to remove that item
_staticItemType = [_staticItem] call ace_common_fnc_getWeaponType;
if (_staticItemtype == -1) then {
    _unit removeItem _staticItem;
} else{
    _unit removeWeapon _staticItem;
};

[{
    params["_staticOld","_unit","_staticNewClass","_staticItem"];

     private ["_direction","_position","_configBarrel"];
     //Get position of object called when assembling then delete it
    _direction = getDir _staticOld;
    _position = getPosASL _staticOld;
    deletevehicle _staticOld;

    //Create new object with the classname of staticNewClass
    _staticNew = createVehicle [_staticNewClass, _position, [], 0, "CAN_COLLIDE"];
    _staticNew setPosASL _position;
    _staticNew setDir _direction;

    //If new object can use a barrel then set appropriate variables
    _configBarrel = getNumber (configFile >> "CfgVehicles" >> typeOf _staticNew >> QGVAR(enableBarrel));
    if(_configBarrel == 1) then{
        _staticNew setvariable [QGVAR(hasBarrel), false, true];
        _staticNew lockTurret [[0], true];
    };
    //If object is spawned into the ground then move it to surface level
    if ((getPosATL _staticNew select 2) - (getPos _staticNew select 2) < 1E-5) then {
        _staticNew setVectorUp (surfaceNormal (position _staticNew));
    };
    //Force new object into the correct position
    _staticNew setPosASL _position;
    _unit reveal _staticNew;

}, [_staticOld,_unit,_staticNewClass,_staticItem], 1, 0] call ace_common_fnc_waitAndExecute;
