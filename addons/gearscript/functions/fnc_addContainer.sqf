/*
 * Author: Glowbal
 * Adds an container to given unit
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

_containerClass = "";
if (typeName _classes == "ARRAY" && {count _classes > 0}) then {
    _containerClass = (_classes select (floor(random(count _classes))));
};
if (_containerClass == "") exitwith {}; // no container to add

switch (toLower _type) do {
    case "backpack": {
        _unit addBackpack _containerClass;
    };
    case "uniform": {
        _unit addUniform _containerClass;
    };
    case "vest": {
        _unit addVest _containerClass;
    };
};