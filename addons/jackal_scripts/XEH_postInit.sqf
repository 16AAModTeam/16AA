#include "script_component.hpp"

["16aa_jackals_setWeaponTurretGPMG", {
    params ["_vehicle", "_add"];

    if (_add) then {
        _vehicle addWeaponTurret ["16aa_GPMG_veh",[0]];
    } else {
        _vehicle removeWeaponTurret ["16aa_GPMG_veh",[0]];
    };
}] call ace_common_fnc_addEventhandler;
