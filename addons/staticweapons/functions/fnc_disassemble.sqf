/*
 * Author: Grey
 * Dissasembles a static weapon into a set of items and a deployed tripod
 *
 * Arguments:
 * 0: staticOld <OBJECT>
 * 1: unit <OBJECT>
 * 2: staticNewClass <STRING>
 * 3: staticItems <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target,_player,'16aa_tripod_low',['16aa_static_item_gmg_receiver']] call lsr_staticweapons_disassemble
 *
 * Public: Yes
 */
#include "script_component.hpp"

params ["_staticOld","_unit","_staticNewClass","_staticItems"];

[{
    params ["_staticOld","_unit","_staticNewClass","_staticItems"];

    private ["_direction", "_position"];
    //Get position of old static weapon then delete it
    _direction = getDir _staticOld;
    _position = getPosASL _staticOld;
    deletevehicle _staticOld;
    //Create new static weapon in the position of the old one
    _staticNew = createVehicle [_staticNewClass, _position, [], 0, "CAN_COLLIDE"];
    _staticNew setPosASL _position;
    _staticNew setDir _direction;
    //If new static weapon is spawned into the ground then move it to surface level
    if ((getPosATL _staticNew select 2) - (getPos _staticNew select 2) < 1E-5) then {
        _staticNew setVectorUp (surfaceNormal (position _staticNew));
    };
    //Force new static weapon into position
    _staticNew setPosASL _position;
    _unit reveal _staticNew;
    //Add staticItems to player inventory
    {
        _staticItemType = [_x] call ace_common_fnc_getWeaponType;
        if (_staticItemtype == -1) then {
            [_unit, _x] call ace_common_fnc_addToInventory;

        } else{
            _pos = _unit modelToWorldVisual [0,1,0.05];
            _unit = createVehicle ["WeaponHolder_Single_F",_pos,[],0,"NONE"];
            _unit addWeaponCargoGlobal [_x,1];
            _unit setPosATL _pos;
        };
    }foreach _staticItems;

}, [_staticOld,_unit,_staticNewClass,_staticItems], 1, 0] call ace_common_fnc_waitAndExecute;
