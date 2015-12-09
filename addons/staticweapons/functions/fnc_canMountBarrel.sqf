/*
 * Author: Grey
 * Checks whether barrel can be mounted to static weapon
 *
 * Arguments:
 * 0: static <OBJECT>
 * 1: unit <OBJECT>
 * 2: barrelClass <STRING>
 *
 * Return Value:
 * canMountBarrel <BOOL>
 *
 * Example:
 * [_target,_player,'16aa_static_item_l2a1_barrel'] call lsr_staticweapons_canMountBarrel
 *
 * Public: Yes
 */
#include "script_component.hpp"

params["_static","_unit","_barrelClass"];
private "_canMountBarrel";

_canMountBarrel = false;
//If the static weapon has a barrel, is alive, player has specified item in their inventory and the static weapon has no magazine then the barrel can be mounted
if(!(_static getVariable [QGVAR(hasBarrel),true]) && (alive _static) && ([_unit,_barrelClass] call ace_common_fnc_hasItem) && ((count (_static magazinesTurret [0])) == 0))then {
    _canMountBarrel = true;
};
_canMountBarrel