/*
 * Author: Grey
 * Dismounts barrel from static weapon
 *
 * Arguments:
 * 0: static <OBJECT>
 * 1: unit <OBJECT>
 * 2: barrelClass <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target,_player,'16aa_static_item_gmg_barrel'] call lsr_staticweapons_dismountBarrel
 *
 * Public: Yes
 */
#include "script_component.hpp"

params["_static","_unit","_barrelClass"];

//Add barrel item to player inventory
[_unit, _barrelClass] call ace_common_fnc_addToInventory;

//Remove barrel from static weapon model and set correct variables
_static setvariable [QGVAR(hasBarrel), false, true];
_static animate ["barrel_hide",1];
_static lockTurret [[0], true];
