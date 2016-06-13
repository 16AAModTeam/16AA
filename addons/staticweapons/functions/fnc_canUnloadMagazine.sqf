/*
 * Author: Grey
 * Checks whether magazine can be unloaded from static weapon
 *
 * Arguments:
 * 0: static <OBJECT>
 * 1: unit <OBJECT>
 *
 * Return Value:
 * canUnloadMagazine <BOOL>
 *
 * Example:
 * [_target,_player] call lsr_staticweapons_canUnloadMagazine
 *
 * Public: Yes
 */
#include "script_component.hpp"

params ["_static","_unit"];
private ["_canUnloadMagazine","_hasBarrel"];

_canUnloadMagazine = false;
_hasBarrel = _static getVariable [QGVAR(hasBarrel),true];
//If static weapon has a magazine and a barrel then you can unload the magazine
if (((count (_static magazinesTurret [0])) > 0) &&  _hasBarrel) then {
	_canUnloadMagazine = true;
};
_canUnloadMagazine
