/*
 * Author: Glowbal
 * Adds an container contents to given unit
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

params ["_unit", "_type","_containerData"];
_containerData params ["_classes","_items", "_magazines"];
// Ammo multiplier
private ["_ammoMultiplier","_newAmmoCount"];
_ammoMultiplier = getNumber (configfile >> "LSR_gearManagement" >> "modifiers" >> "ammunition");
if (isText (missionConfigFile >> "LSR_gearManagement" >> "modifiers" >> "ammunition")) then {
    _ammoMultiplier = getNumber (missionConfigFile >> "LSR_gearManagement" >> "modifiers" >> "ammunition");
};
if (isText (configFile >> "LSR_gearManagement" >> "roles" >> _role >> "magazineModifier")) then {
    _ammoMultiplier = getNumber (configFile >> "LSR_gearManagement" >> "roles" >> _role >> "ammunitionModifier");
};
if (isText (missionConfigFile >> "LSR_gearManagement" >> "roles" >> _role >> "magazineModifier")) then {
    _ammoMultiplier = getNumber (missionConfigFile >> "LSR_gearManagement" >> "roles" >> _role >> "ammunitionModifier");
};
switch (toLower _type) do {
    case "backpack": {
        if (isNull (backpackContainer _unit)) exitwith {};
        {
            if (_x params ["_classname", "_amount"]) then {
                (backpackContainer _unit) addItemCargoGlobal [_classname, _amount];
            };
        }foreach _items;
        {
            if (_x params ["_classname", "_amount"]) then {
                _newAmmoCount = (_amount * ((_ammoMultiplier - 1) / 1));
                (backpackContainer _unit) addMagazineCargoGlobal [_classname, _newAmmoCount];
            };
        }foreach _magazines;
    };
    case "uniform": {
        if (isNull (uniformContainer _unit)) exitwith {};
        {
            if (_x params ["_classname", "_amount"]) then {
                (uniformContainer _unit) addItemCargoGlobal [_classname, _amount];
            };
        }foreach _items;
        {
            if (_x params ["_classname", "_amount"]) then {
                _newAmmoCount = (_amount * ((_ammoMultiplier - 1) / 1));
                (uniformContainer _unit) addMagazineCargoGlobal [_classname, _newAmmoCount];
            };
        }foreach _magazines;
    };
    case "vest": {
        if (isNull (vestContainer _unit)) exitwith {};
        {
            if (_x params ["_classname", "_amount"]) then {
                (vestContainer _unit) addItemCargoGlobal [_classname, _amount];
            };
        }foreach _items;
        {
            if (_x params ["_classname", "_amount"]) then {
                _newAmmoCount = (_amount * ((_ammoMultiplier - 1) / 1));
                (vestContainer _unit) addMagazineCargoGlobal [_classname, _newAmmoCount];
            };
        }foreach _magazines;
    };
};
