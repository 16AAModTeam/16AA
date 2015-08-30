/*
Author: Grey

Removes the commanders GPMG from a jackal and adds it to the player

Arguments:
0: vehicle <OBJECT>
1: unit <OBJECT>

Return Value:
Nothing

Return value:
None
*/
#include "script_component.hpp"

PARAMS_2(_vehicle,_unit);

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    _unit playMove "AmovPercMstpSrasWrflDnon_diary";
};

[{
    PARAMS_2(_vehicle,_unit);
    _vehicle removeWeaponTurret ["16aa_GPMG_veh",[0]];

    _vehicle setvariable [QGVAR(hasGPMG), false, true];

    _pos = _unit modelToWorldVisual [0,1,0.05];
    _unit = createVehicle ["WeaponHolder_Single_F",_pos,[],0,"NONE"];
    _unit addWeaponCargoGlobal ['16aa_l7a2',1];
    _unit setPosATL _pos;

	_vehicle setObjectTextureGlobal [3, ""];

}, [_vehicle, _unit], 1, 0]call ace_common_fnc_waitAndExecute;