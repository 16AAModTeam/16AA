/*
Author: Grey

Checks if player can mount a GPMG on a Jackal

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
private "_canMount,_commandersGun";
_canMount = false;
_commandersGun = getObjectTextures _vehicle;

if(('16aa_l7a2' in (weapons _unit)) && ( _vehicle getVariable [QGVAR(hasGPMG),true]) )then {
	_canMount = true;
};
_canMount


