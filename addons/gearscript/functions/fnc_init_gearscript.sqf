/*
 * Author: Glowbal
 * Initalize the gear script for a unit
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

#include "script_component.hpp"

//[{
    private ["_unit", "_roleInfo", "_uniformData", "_vestData", "_backpackData", "_primaryWeaponData", "_secondiaryWeaponData", "_pistolData", "_miscData", "_nvg", "_assignNVG", "_goggles", "_helmet"];
    _unit = _this select 0;

    if !(local _unit) exitwith {};
    if (isNil {_unit getvariable QGVAR(role)}) exitwith {};
    if (_unit getvariable [QGVAR(initalized), false]) exitwith {};

    _roleInfo = [_unit getvariable QGVAR(role)] call FUNC(getRole);
    if (count _roleInfo == 0) exitwith {}; // not a valid role..

    [_unit] call FUNC(clearAllEquipment);

    // handle containers
    _uniformData = _roleInfo select 3;
    _vestData = _roleInfo select 4;
    _backpackData = _roleInfo select 5;
    [_unit, "uniform", _uniformData] call FUNC(addContainer);
    [_unit, "vest", _vestData] call FUNC(addContainer);
    [_unit, "backpack", _backpackData] call FUNC(addContainer);

    // Handle weapons
    _primaryWeaponData = _roleInfo select 0;
    _secondiaryWeaponData = _roleInfo select 1;
    _pistolData = _roleInfo select 2;
    [_unit, _primaryWeaponData select 0, _primaryWeaponData select 1, 0] call FUNC(addWeapon);
    [_unit, _secondiaryWeaponData select 0, _secondiaryWeaponData select 1, 1] call FUNC(addWeapon);
    [_unit, _pistolData select 0, _pistolData select 1, 2] call FUNC(addWeapon);

    // handle misc equipment
    _miscData = _roleInfo select 6;

    _nvg = _miscData select 0;
    _assignNVG = _miscData select 1;
    _goggles = _miscData select 2;
    _helmet = _miscData select 3;
    [_unit, _nvg, _assignNVG, _goggles, _helmet] call FUNC(addMiscEquipment);

    [_unit, "uniform", _uniformData] call FUNC(addContainerContents);
    [_unit, "vest", _vestData] call FUNC(addContainerContents);
    [_unit, "backpack", _backpackData] call FUNC(addContainerContents);

//}, _this, 1, 0] call ace_common_fnc_waitAndExecute;
