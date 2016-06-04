/*
 * Author: Glowbal
 * Initalize the gear script for a unit
 *
 * Arguments:
 * 0: unit OBJECT
 *
 * Return Value:
 * None
 *
 * Public: No
 */

#include "script_component.hpp"

private ["_unit", "_roleInfo", "_uniformData", "_vestData", "_backpackData", "_primaryWeaponData", "_secondaryWeaponData", "_pistolData", "_miscData", "_nvg", "_assignNVG", "_goggles", "_helmet", "_standard", "_miscEquip"];
_unit = _this select 0;

if !(local _unit) exitwith {};
if (isNil {_unit getvariable QGVAR(role)}) exitwith {};
if (_unit getvariable [QGVAR(initalized), false]) exitwith {};

_roleInfo = [_unit getvariable QGVAR(role)] call FUNC(getRole);
// if (count _roleInfo == 0 && !GVAR(useBaseRoleAsDefault)) exitwith {}; // not a valid role..

if (count _roleInfo == 0) then {
    diag_log format["%1 has role %2 but no roleInfo is configured. Switching to baseRole", _unit, _unit getvariable QGVAR(role)];
    _roleInfo = ["baseRole"] call FUNC(getRole);
};
if (count _roleInfo == 0) exitwith {};
 //diag_log format["%1 using %2. Assigning: %3", _unit, _unit getvariable QGVAR(role), _roleInfo];

[_unit] call FUNC(clearAllEquipment);

[{
    params ["_unit", "_roleInfo"];
    _unit setvariable [QGVAR(initalized),true,true]; // mark unit as initalized to avoid duplicate execution

    _roleInfo params ["_primaryWeaponData", "_secondaryWeaponData", "_pistolData", "_uniformData", "_vestData","_backpackData", "_miscData"];
    // handle containers
    [_unit, "uniform", _uniformData] call FUNC(addContainer);
    [_unit, "vest", _vestData] call FUNC(addContainer);
    [_unit, "backpack", _backpackData] call FUNC(addContainer);

    // handle misc equipment
    _miscData params ["_nvg","_assignNVG", "_goggles", "_helmet", "_standard", "_miscEquip"];
    [_unit, _nvg, _assignNVG, _goggles, _helmet, _standard, _miscEquip] call FUNC(addMiscEquipment);

    [_unit, "uniform", _uniformData] call FUNC(addContainerContents);
    [_unit, "vest", _vestData] call FUNC(addContainerContents);
    [_unit, "backpack", _backpackData] call FUNC(addContainerContents);

    // Handle weapons
    [_unit, _primaryWeaponData select 0, _primaryWeaponData select 1, 0] call FUNC(addWeapon);
    [_unit, _secondaryWeaponData select 0, _secondaryWeaponData select 1, 1] call FUNC(addWeapon);
    [_unit, _pistolData select 0, _pistolData select 1, 2] call FUNC(addWeapon);


}, [_unit, _roleInfo]] call CBA_fnc_waitUntilAndExecute;
