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
private "_canDismount,_gpmgTexture";
_canDismount = true;

_gpmgTexture = (getObjectTextures _vehicle) select 3;

if(_gpmgTexture == "")then {
	_canDismount = false;
};
_canDismount