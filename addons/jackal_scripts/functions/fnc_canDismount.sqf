/*
Author: Grey

Checks if player can dismount a GPMG from a Jackal

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
private "_canDismount,_commandersGun";
_canDismount = true;
_commandersGun = (_vehicle weaponsTurret [0]) select 0;

if(_commandersGun == '16aa_GPMG_veh')then {
	_canDismount = false;
};
_canDismount