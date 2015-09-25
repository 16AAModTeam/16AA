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

params["_vehicle","_unit"];
private ["_canMount"];
_canMount = false;

if(('16aa_l7a2' in (weapons _unit)) && !( _vehicle getVariable [QGVAR(hasGPMG),true]) )then {
	_canMount = true;
};
_canMount


