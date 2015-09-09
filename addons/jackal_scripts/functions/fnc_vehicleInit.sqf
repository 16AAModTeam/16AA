/*
Author: www.3commandobrigade.com
1. Add CBA key bind for vehicle weapon reload.
2. Add CBA key bind for high/low beam lights
Arguments:
none
Return Value:
none
*/
#include "script_component.hpp"
["16aa", "16AA_Key_Reload_Vehicle_Weapon", localize LSTRING(ReloadWeapon),
{
     [ACE_player, vehicle ACE_player] call FUNC(resupplyAmmo);
     true
},
{false},
[19, [false, false, false]]] call cba_fnc_addKeybind;