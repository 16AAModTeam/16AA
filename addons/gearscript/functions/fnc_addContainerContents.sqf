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

#define GET_CLASSNAME(ARRAY) ARRAY select 0
#define GET_AMOUNT(ARRAY) ARRAY select 1

private ["_unit","_type","_containerData","_classes","_items", "_magazines", "_containerClass"];
_unit = _this select 0;
_type = _this select 1;
_containerData = _this select 2;

_classes = _containerData select 0;
_items = _containerData select 1;
_magazines = _containerData select 2;

switch (toLower _type) do {
    case "backpack": {
        if (isNull (backpackContainer _unit)) exitwith {};
        {
            (backpackContainer _unit) addItemCargoGlobal [GET_CLASSNAME(_x), GET_AMOUNT(_x)];
        }foreach _items;
        {
            (backpackContainer _unit) addMagazineCargoGlobal [GET_CLASSNAME(_x), GET_AMOUNT(_x)];
        }foreach _magazines;
    };
    case "uniform": {
        if (isNull (uniformContainer _unit)) exitwith {};
        {
            (uniformContainer _unit) addItemCargoGlobal [GET_CLASSNAME(_x), GET_AMOUNT(_x)];
        }foreach _items;
        {
            (uniformContainer _unit) addMagazineCargoGlobal [GET_CLASSNAME(_x), GET_AMOUNT(_x)];
        }foreach _magazines;
    };
    case "vest": {
        if (isNull (vestContainer _unit)) exitwith {};
        {
            (vestContainer _unit) addItemCargoGlobal [GET_CLASSNAME(_x), GET_AMOUNT(_x)];
        }foreach _items;
        {
            (vestContainer _unit) addMagazineCargoGlobal [GET_CLASSNAME(_x), GET_AMOUNT(_x)];
        }foreach _magazines;
    };
};