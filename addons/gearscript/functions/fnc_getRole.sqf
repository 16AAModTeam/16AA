/*
 * Author: Glowbal
 * Retreive the gear belonging to the given role
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

private ["_role", "_config", "_primaryWeapon", "_secondaryWeapon", "_pistolWeapon", "_primaryWeaponItems", "_secondaryWeaponItems", "_pistolWeaponItems", "_uniform", "_vest", "_backpack", "_helmet", "_goggles", "_nvg", "_assignNVG", "_uniformMagazines", "_vestMagazines", "_backpackMagazines", "_uniformItems", "_vestItems", "_backpackItems", "_primaryWeaponData", "_secondaryWeaponData", "_pistolData", "_uniformData", "_vestData", "_backpackData", "_miscData", "_standard", "_miscEquip", "_bino", "_bino"];
_role = _this select 0;

_config = (configfile >> "LSR_gearManagement" >> "roles" >> _role);
if !(isclass _config) then {
    _config = (missionConfigFile >> "LSR_gearManagement" >> "roles" >> _role);
};
// not a valid role..
if !(isClass _config) exitwith {[]};

_primaryWeapon = getArray (_config >> "primaryWeapon");
_secondaryWeapon = getArray (_config >> "secondaryWeapon");
_pistolWeapon = getArray (_config >> "pistol");

_primaryWeaponItems = getArray (_config >> "primaryWeaponItems");
_secondaryWeaponItems = getArray (_config >> "secondaryWeaponItems");
_pistolWeaponItems = getArray (_config >> "pistolItems");

_uniform = getArray (_config >> "uniform");
_vest = getArray (_config >> "vest");
_backpack = getArray (_config >> "backpack");
_helmet = getArray (_config >> "helmet");
_goggles = getArray (_config >> "goggles");
_nvg = getArray (_config >> "nvg");
_assignNVG = getNumber (_config >> "assignNVG");
_standard = getArray (_config >> "standardItems");
_miscEquip = getArray (_config >> "miscEquipment");
_bino = getArray (_config >> "binoculars");

_uniformMagazines = getArray (_config >> "uniformMagazines");
_vestMagazines = getArray (_config >> "vestMagazines");
_backpackMagazines = getArray (_config >> "backpackMagazines");

_uniformItems = getArray (_config >> "uniformItems");
_vestItems = getArray (_config >> "vestItems");
_backpackItems = getArray (_config >> "backpackItems");

_config = (missionConfigFile >> "LSR_gearManagement" >> "roles" >> _role);
if (isClass _config) then {
    _primaryWeapon = if (isArray (_config >> "primaryWeapon")) then { getArray (_config >> "primaryWeapon");} else {_primaryWeapon};
    _secondaryWeapon = if (isArray (_config >> "secondaryWeapon")) then { getArray (_config >> "secondaryWeapon");} else {_secondaryWeapon};
    _pistolWeapon = if (isArray (_config >> "pistol")) then { getArray (_config >> "pistol");} else {_pistolWeapon};

    _primaryWeaponItems = if (isArray (_config >> "primaryWeaponItems")) then { getArray (_config >> "primaryWeaponItems");} else {_primaryWeaponItems};
    _secondaryWeaponItems = if (isArray (_config >> "secondaryWeaponItems")) then { getArray (_config >> "secondaryWeaponItems");} else {_secondaryWeaponItems};
    _pistolWeaponItems = if (isArray (_config >> "pistolItems")) then { getArray (_config >> "pistolItems");} else {_pistolWeaponItems};

    _uniform = if (isArray (_config >> "uniform")) then { getArray (_config >> "uniform");} else {_uniform};
    _vest = if (isArray (_config >> "vest")) then { getArray (_config >> "vest");} else {_vest};
    _backpack = if (isArray (_config >> "backpack")) then { getArray (_config >> "backpack");} else {_backpack};
    _helmet = if (isArray (_config >> "helmet")) then { getArray (_config >> "helmet");} else {_helmet};
    _goggles = if (isArray (_config >> "goggles")) then { getArray (_config >> "goggles");} else {_goggles};
    _nvg = if (isArray (_config >> "nvg")) then { getArray (_config >> "nvg");} else {_nvg};
    _assignNVG = if (isArray (_config >> "assignNVG")) then { getNumber (_config >> "assignNVG");} else {_assignNVG};
    _standard = if (isArray (_config >> "standardItems")) then { getArray (_config >> "standardItems");} else {_standard};
    _miscEquip = if (isArray (_config >> "miscEquipment")) then { getArray (_config >> "miscEquipment");} else {_miscEquip};
    _bino = if (isArray (_config >> "binoculars")) then { getArray (_config >> "binoculars");} else {_bino};

    _uniformMagazines = if (isArray (_config >> "uniformMagazines")) then { getArray (_config >> "uniformMagazines");} else {_uniformMagazines};
    _vestMagazines = if (isArray (_config >> "vestMagazines")) then { getArray (_config >> "vestMagazines");} else {_vestMagazines};
    _backpackMagazines = if (isArray (_config >> "backpackMagazines")) then { getArray (_config >> "backpackMagazines");} else {_backpackMagazines};

    _uniformItems = if (isArray (_config >> "uniformItems")) then { getArray (_config >> "uniformItems");} else {_uniformItems};
    _vestItems = if (isArray (_config >> "vestItems")) then { getArray (_config >> "vestItems");} else {_vestItems };
    _backpackItems = if (isArray (_config >> "backpackItems")) then { getArray (_config >> "backpackItems");} else {_backpackItems};
};

// Uniform modifications
private "_uniformModifier";
_uniformModifier = getText (configfile >> "LSR_gearManagement" >> "modifiers" >> "uniform");
if (isText (missionConfigFile >> "LSR_gearManagement" >> "modifiers" >> "uniform")) then {
    _uniformModifier = getText (missionConfigFile >> "LSR_gearManagement" >> "modifiers" >> "uniform");
};
if (isText (configFile >> "LSR_gearManagement" >> "roles" >> _role >> "uniformModifier")) then {
    _uniformModifier = getText (configFile >> "LSR_gearManagement" >> "roles" >> _role >> "uniformModifier");
};
if (isText (missionConfigFile >> "LSR_gearManagement" >> "roles" >> _role >> "uniformModifier")) then {
    _uniformModifier = getText (missionConfigFile >> "LSR_gearManagement" >> "roles" >> _role >> "uniformModifier");
};

{
    private "_classname";
    _classname = [_x, "[type]", _uniformModifier] call CBA_fnc_replace;
    _uniform set [_forEachIndex, _classname];
}foreach _uniform;

// Weapon modifications
private "_weaponModifier";
_weaponModifier = getText (configfile >> "LSR_gearManagement" >> "modifiers" >> "weapon");
if (isText (missionConfigFile >> "LSR_gearManagement" >> "modifiers" >> "weapon")) then {
    _weaponModifier = getText (missionConfigFile >> "LSR_gearManagement" >> "modifiers" >> "weapon");
};
if (isText (configFile >> "LSR_gearManagement" >> "roles" >> _role >> "weaponModifier")) then {
    _weaponModifier = getText (configFile >> "LSR_gearManagement" >> "roles" >> _role >> "weaponModifier");
};
if (isText (missionConfigFile >> "LSR_gearManagement" >> "roles" >> _role >> "weaponModifier")) then {
    _weaponModifier = getText (missionConfigFile >> "LSR_gearManagement" >> "roles" >> _role >> "weaponModifier");
};

{
    private "_classname";
    _classname = [_x, "[type]", _weaponModifier] call CBA_fnc_replace;
    _primaryWeapon set [_forEachIndex, _classname];
}foreach _primaryWeapon;
{
    private "_classname";
    _classname = [_x, "[type]", _weaponModifier] call CBA_fnc_replace;
    _secondaryWeapon set [_forEachIndex, _classname];
}foreach _secondaryWeapon;


// magazine modifications
private "_magModifier";
_magModifier = getText (configfile >> "LSR_gearManagement" >> "modifiers" >> "magazine");
if (isText (missionConfigFile >> "LSR_gearManagement" >> "modifiers" >> "magazine")) then {
    _magModifier = getText (missionConfigFile >> "LSR_gearManagement" >> "modifiers" >> "magazine");
};
if (isText (configFile >> "LSR_gearManagement" >> "roles" >> _role >> "magazineModifier")) then {
    _magModifier = getText (configFile >> "LSR_gearManagement" >> "roles" >> _role >> "magazineModifier");
};
if (isText (missionConfigFile >> "LSR_gearManagement" >> "roles" >> _role >> "magazineModifier")) then {
    _magModifier = getText (missionConfigFile >> "LSR_gearManagement" >> "roles" >> _role >> "magazineModifier");
};

{
    private "_classname";
    _classname = [_x select 0, "[type]", _magModifier] call CBA_fnc_replace;
    _classname = [_classname, _x select 1];
    _uniformMagazines set [_forEachIndex, _classname];
}foreach _uniformMagazines;
{
    private "_classname";
    _classname = [_x select 0, "[type]", _magModifier] call CBA_fnc_replace;
    _classname = [_classname, _x select 1];
    _vestMagazines set [_forEachIndex, _classname];
}foreach _vestMagazines;

{
    private "_classname";
    _classname = [_x select 0, "[type]", _magModifier] call CBA_fnc_replace;
    _classname = [_classname, _x select 1];
    _backpackMagazines set [_forEachIndex, _classname];
}foreach _backpackMagazines;

// misc data
_primaryWeaponData = [_primaryWeapon, _primaryWeaponItems];
_secondaryWeaponData = [_secondaryWeapon, _secondaryWeaponItems];
_pistolData = [_pistolWeapon, _pistolWeaponItems];
_uniformData = [_uniform, _uniformItems, _uniformMagazines];
_vestData = [_vest, _vestItems, _vestMagazines];
_backpackData = [_backpack, _backpackItems, _backpackMagazines];
_miscData = [_nvg, _assignNVG, _goggles, _helmet, _standard, _miscEquip + _bino];

[_primaryWeaponData, _secondaryWeaponData, _pistolData, _uniformData, _vestData, _backpackData, _miscData];
