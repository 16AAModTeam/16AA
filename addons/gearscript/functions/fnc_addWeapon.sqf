/*
 * Author: Glowbal
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

private ["_unit", "_weaponclasses", "_items", "_weaponType"];
_unit = _this select 0;
_weaponclasses = _this select 1;
_items = _this select 2;
_weaponType = _this select 3;

_weapon = _weaponclasses;
if (typeName _weaponclasses == "ARRAY") then {
    if (count _weaponclasses == 0) exitwith { _weapon = ""; };
    _weapon = (_weaponclasses select (floor(random(count _weaponclasses))));
};

if (_weapon == "") exitwith {};

_unit addWeapon _weapon;

if (_weaponType == 0) then {
    {
        _unit addPrimaryWeaponItem _x;
    }foreach _items;
} else {
    if (_weaponType == 1) then {
        {
            _unit addSecondaryWeaponItem _x;
        }foreach _items;
    } else {
        if (_weaponType == 2) then {
            {
                _unit addHandgunItem _x;
            }foreach _items;
        };
    };
}
