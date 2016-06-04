/*
 * Author: Grey
 * Raises or lowers static weapon/tripod by swapping 2 models.
 *
 * Arguments:
 * 0: staticOld <OBJECT>
 * 1: staticNewClass <STRING>
 * 2: unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target,'16aa_L2A1_Static_Base_raised',_player] call lsr_staticweapons_adjustHeight
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_staticOld","_staticNewClass","_unit"];

[{
    params ["_staticOld","_staticNewClass","_unit"];

    private ["_direction","_position","_staticNew","_hasBarrelV","_configBarrel","_currentMagazine","_ammoCount","_hasMagazine","_defaultMag"];
    _direction = getDir _staticOld;
    _position = getPosASL _staticOld;

    //Get weapon & magazine information of the object
    _hasBarrelV = false;
    _weapon = (_staticOld weaponsTurret [0]) select 0;
    _listOfMagNames = getArray(configFile >> "cfgWeapons" >> _weapon >> "magazines");
    _defaultMag = _listOfMagNames select 0;
    _currentMagazine = _staticOld currentMagazineTurret [0];

    //If the static weapon doesn't have a current magazine then use a default one
    if!(_currentMagazine != "") then {
        _currentMagazine = _defaultMag;
    };

    _ammoCount = 0;
    _hasMagazine = false;
    //If static weapon has a barrel & magazine then set appropriate variables to true
    if(_staticOld getVariable [QGVAR(hasBarrel),false])then {
        _hasBarrelV = true;
    };
    if ((count (_staticOld magazinesTurret [0])) == 1) then {
        _ammoCount = ((magazinesAllTurrets _staticOld) select 1) select 2;
        _hasMagazine = true;
    };

    //Delete the old static weapon and creates a new one
    deletevehicle _staticOld;
    _staticNew = createVehicle [_staticNewClass, _position, [], 0, "CAN_COLLIDE"];
    _staticNew setPosASL _position;
    _staticNew setDir _direction;
    //If old static weapon used a seperate barrel then set the new static weapon to use the same
    _configBarrel = getNumber (configFile >> "CfgVehicles" >> typeOf _staticNew >> QGVAR(enableBarrel));
    if(_configBarrel == 1)  then{
        if(_hasBarrelV)then {
            _staticNew setvariable [QGVAR(hasBarrel), true, true];
            _staticNew lockTurret [[0], false];
            _staticNew animate ["barrel_hide",0];
        }else{
            _staticNew setvariable [QGVAR(hasBarrel), false, true];
            _staticNew lockTurret [[0], true];
        };
    };
    //If old static weapon had a magazine then set the new static weapon to use the same magazine
    if (_hasMagazine) then {
        ["16aa_staticweapons_addMagazine", [_staticNew, _currentMagazine]] call CBA_fnc_globalEvent;
        ["16aa_staticweapons_setAmmo", _staticNew, [_staticNew, _currentMagazine,_ammoCount]] call CBA_fnc_targetEvent;
    };
    //If new static weapon is spawned into the ground then move it to surface level
    if ((getPosATL _staticNew select 2) - (getPos _staticNsew select 2) < 1E-5) then {
        _staticNew setVectorUp (surfaceNormal (position _staticNew));
    };
    //Force new static weapon into position
    _staticNew setPosASL _position;
    _unit reveal _staticNew;

}, [_staticOld,_staticNewClass,_unit], 1, 0] call CBA_fnc_waitAndExecute;
