/*
 * Author: Glowbal
 * Retreive the gear beloning to the given role
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

private ["_role", "_config", "_primairyWeapon", "_secondiaryWeapon", "_pistolWeapon", "_primairyWeaponItems", "_secondiaryWeaponItems", "_pistolWeaponItems", "_uniform", "_vest", "_backpack", "_helmet", "_goggles", "_nvg", "_assignNVG", "_uniformMagazines", "_vestMagazines", "_backpackMagazines", "_uniformItems", "_vestItems", "_backpackItems", "_primaryWeaponData", "_secondiaryWeaponData", "_pistolData", "_uniformData", "_vestData", "_backpackData", "_miscData"];
_role = _this select 0;

_config = (configfile >> "16AA_gearManagement" >> "roles" >> _role);
if !(isclass _config) then {
    _config = (missionConfigFile >> "16AA_gearManagement" >> "roles" >> _role);
};
// not a valid role..
if !(isClass _config) exitwith {[]};

_primairyWeapon = getArray (_config >> "primairyWeapon");
_secondiaryWeapon = getArray (_config >> "secondairyWeapon");
_pistolWeapon = getArray (_config >> "pistol");

_primairyWeaponItems = getArray (_config >> "primairyWeaponItems");
_secondiaryWeaponItems = getArray (_config >> "secondairyWeaponItems");
_pistolWeaponItems = getArray (_config >> "pistolItems");

_uniform = getArray (_config >> "uniform");
_vest = getArray (_config >> "vest");
_backpack = getArray (_config >> "backpack");
_helmet = getArray (_config >> "helmet");
_goggles = getArray (_config >> "goggles");
_nvg = getArray (_config >> "nvg");
_assignNVG = getNumber (_config >> "assignNVG");

_uniformMagazines = getArray (_config >> "uniformMagazines");
_vestMagazines = getArray (_config >> "vestMagazines");
_backpackMagazines = getArray (_config >> "backpackMagazines");

_uniformItems = getArray (_config >> "uniformItems");
_vestItems = getArray (_config >> "vestItems");
_backpackItems = getArray (_config >> "backpackItems");

_config = (missionConfigFile >> "16AA_gearManagement" >> "roles" >> _role);
if (isClass _config) then {
    _primairyWeapon = if (isArray (_config >> "primairyWeapon")) then { getArray (_config >> "primairyWeapon");} else {_primairyWeapon};
    _secondiaryWeapon = if (isArray (_config >> "secondairyWeapon")) then { getArray (_config >> "secondairyWeapon");} else {_secondiaryWeapon};
    _pistolWeapon = if (isArray (_config >> "pistol")) then { getArray (_config >> "pistol");} else {_pistolWeapon};

    _primairyWeaponItems = if (isArray (_config >> "primairyWeaponItems")) then { getArray (_config >> "primairyWeaponItems");} else {_primairyWeaponItems};
    _secondiaryWeaponItems = if (isArray (_config >> "secondairyWeaponItems")) then { getArray (_config >> "secondairyWeaponItems");} else {_secondiaryWeaponItems};
    _pistolWeaponItems = if (isArray (_config >> "pistolItems")) then { getArray (_config >> "pistolItems");} else {_pistolWeaponItems};

    _uniform = if (isArray (_config >> "uniform")) then { getArray (_config >> "uniform");} else {_uniform};
    _vest = if (isArray (_config >> "vest")) then { getArray (_config >> "vest");} else {_vest};
    _backpack = if (isArray (_config >> "backpack")) then { getArray (_config >> "backpack");} else {_backpack};
    _helmet = if (isArray (_config >> "helmet")) then { getArray (_config >> "helmet");} else {_helmet};
    _goggles = if (isArray (_config >> "goggles")) then { getArray (_config >> "goggles");} else {_goggles};
    _nvg = if (isArray (_config >> "nvg")) then { getArray (_config >> "nvg");} else {_nvg};
    _assignNVG = if (isArray (_config >> "assignNVG")) then { getNumber (_config >> "assignNVG");} else {_assignNVG};

    _uniformMagazines = if (isArray (_config >> "uniformMagazines")) then { getArray (_config >> "uniformMagazines");} else {_uniformMagazines};
    _vestMagazines = if (isArray (_config >> "vestMagazines")) then { getArray (_config >> "vestMagazines");} else {_vestMagazines};
    _backpackMagazines = if (isArray (_config >> "backpackMagazines")) then { getArray (_config >> "backpackMagazines");} else {_backpackMagazines};

    _uniformItems = if (isArray (_config >> "uniformItems")) then { getArray (_config >> "uniformItems");} else {_uniformItems};
    _vestItems = if (isArray (_config >> "vestItems")) then { getArray (_config >> "vestItems");} else {_vestItems };
    _backpackItems = if (isArray (_config >> "backpackItems")) then { getArray (_config >> "backpackItems");} else {_backpackItems};
};

// misc data
_primaryWeaponData = [_primairyWeapon, _primairyWeaponItems];
_secondiaryWeaponData = [_secondiaryWeapon, _secondiaryWeaponItems];
_pistolData = [_pistolWeapon, _pistolWeaponItems];
_uniformData = [_uniform, _uniformItems, _uniformMagazines];
_vestData = [_vest, _vestItems, _vestMagazines];
_backpackData = [_backpack, _backpackItems, _backpackMagazines];
_miscData = [_nvg, _assignNVG, _goggles, _helmet];

[_primaryWeaponData, _secondiaryWeaponData, _pistolData, _uniformData, _vestData, _backpackData, _miscData];
