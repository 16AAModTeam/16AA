#include "script_component.hpp"
["16aa_staticweapons_addMagazine", {
    params ["_static", "_magazine"];

    _static addMagazineTurret [_magazine,[0]];

}] call ace_common_fnc_addEventhandler;

["16aa_staticweapons_removeMagazine", {
    params ["_static", "_magazine"];

    _static removeMagazineTurret[_magazine,[0]];

}] call ace_common_fnc_addEventhandler;

["16aa_staticweapons_setAmmo", {
    params ["_static", "_magazine","_ammoCount"];

    _static setMagazineTurretAmmo [_magazine, _ammoCount, [0]];

}] call CBA_fnc_addEventHandler;
