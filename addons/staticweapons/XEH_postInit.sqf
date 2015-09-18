#include "script_component.hpp"
["16aa_staticweapons_addMagazine", {
    params ["_static", "_magazine"];

    if (!local _static) exitWith{};

    _static addMagazineTurret [_magazine,[0]];

}] call ace_common_fnc_addEventhandler;

["16aa_staticweapons_removeMagazine", {
    params ["_static", "_magazine"];

    if (!local _static) exitWith{};

    _static removeMagazineTurret[_magazine,[0]];

}] call ace_common_fnc_addEventhandler;
