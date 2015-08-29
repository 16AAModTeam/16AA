/*
Author: Grey

Removes the a GPMG from players inventory and "mounts" it to a Jackal

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

    _unit removeWeapon '16aa_l7a2';

    _vehicle addWeaponTurret ["16aa_GPMG_veh",[0]];

	_vehicle setObjectTextureGlobal [3, "16aa_vehicles_common\weapons\gpmg\m240_co.paa"];

}, [_vehicle, _unit], 1, 0]call ace_common_fnc_waitAndExecute;