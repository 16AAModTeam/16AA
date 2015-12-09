/*
 * Author: Grey
 * Mounts barrel to static weapon
 *
 * Arguments:
 * 0: staticOld <OBJECT>
 * 1: unit <OBJECT>
 * 2: barrelClass <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target,_player,'16aa_static_item_gmg_barrel'] call lsr_staticweapons_mountBarrel
 *
 * Public: Yes
 */
#include "script_component.hpp"

params["_static","_unit","_barrelClass"];
//Remove barrel item to players inventory
_unit removeItem _barrelClass;

//Add barrel to static weapon and set appropriate variables
_static setvariable [QGVAR(hasBarrel), true, true];
_static animate ["barrel_hide",0];
_static lockTurret [[0], false];
