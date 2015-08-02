/*
 * Author: Glowbal
 * Called when the listbox selection is changed for an options (eg: chaning a setting from false to true)
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ACE_optionsmenu_fnc_onListBoxSettingsChanged
 *
 * Public: No
 */

#include "script_component.hpp"

private ["_unit", "_nvgClassname", "_assignNVG", "_goggles", "_helmet", "_standard", "_miscEquip"];
_unit = _this select 0;
_nvgClassname = _this select 1;
_assignNVG = _this select 2;
_goggles = _this select 3;
_helmet = _this select 4;
_standard = _this select 5;
_miscEquip = if (count _this > 6) then {_this select 6} else {[]};


if (count _nvgClassname > 0) then {
    _nvgClassname = (_nvgClassname select (floor(random(count _nvgClassname))));
    if (_nvgClassname != "") then {
        switch (_assignNVG) do {
            case 0: {_unit addItem _nvgClassname;};
            case 1: {_unit linkItem _nvgClassname;};
            case 2: {if (call ace_common_fnc_ambientBrightness < 0.3) then { _unit linkItem _nvgClassname; } else {_unit addItem _nvgClassname}};
            default {_unit addItem _nvgClassname;};
        };
    };
};

if (count _goggles > 0) then {
    _goggles = (_goggles select (floor(random(count _goggles))));
    if (_goggles != "") then {
        _unit addGoggles _goggles;
    };
};

if (count _helmet > 0) then {
    _helmet = (_helmet select (floor(random(count _helmet))));
    if (_helmet != "") then {
        _unit addHeadgear _helmet;
    };
};

{
    _unit addWeapon _x;
}foreach _standard;
{
    _unit addWeapon _x;
}foreach _miscEquip;
