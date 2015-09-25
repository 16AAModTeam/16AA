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
private "_vehicle_debug,_cammandersGun";
_cammandersGun = (_vehicle weaponsTurret [0]) select 0;

_vehicle_debug =  format["Commanders Gun: %1",_cammandersGun];
hint _vehicle_debug;