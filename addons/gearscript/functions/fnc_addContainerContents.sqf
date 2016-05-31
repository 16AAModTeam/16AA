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
                (backpackContainer _unit) addMagazineCargoGlobal [_classname, _amount];
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
                (uniformContainer _unit) addMagazineCargoGlobal [_classname, _amount];
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
                (vestContainer _unit) addMagazineCargoGlobal [_classname, _amount];
            };
        }foreach _magazines;
    };
};
