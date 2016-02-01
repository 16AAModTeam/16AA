/*
 * Author: Grey
 * Called when the mortar is fired. Removes the magazine if its empty
 *
 * Arguments:
 * 0: vehicle - Object the event handler is assigned to <OBJECT>
 * 1: weapon - Fired weapon <STRING>
 * 2: muzzle - Muzzle that was used <STRING>
 * 3: mode - Current mode of the fired weapon <STRING>
 * 4: ammo - Ammo used <STRING>
 * 5: magazine - Magazine name which was used <STRING>
 * 6: projectile - Object of the projectile that was shot <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [clientFiredBIS-XEH] call lsr_staticweapons_handleFiredMortar
 *
 * Public: No
 */

#include "script_component.hpp"
params ["_vehicle","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile"];
private ["_static","_magazineName","_count"];
_static = _this select 0;
_magazineName = _this select 5;
//Get ammo count of loaded magazine
_count = ((magazinesAllTurrets _static) select 1) select 2;

//If magazine is empty then remove it
 if (_count == 0) then {
 	["16aa_staticweapons_removeMagazine", [_static, _magazineName]] call ace_common_fnc_globalEvent;
};
