/*
 * Author: Grey
 * Repairs a static weapon
 *
 * Arguments:
 * 0: staticOld <OBJECT>
 * 1: staticNewClass <STRING>
 * 2: unit <OBJECT>
 * 3: timeToPlace <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target,_player] call lsr_staticweapons_repair
 *
 * Public: Yes
 */
#include "script_component.hpp"

params ["_vehicle","_unit"];
[{
    params ["_vehicle","_unit"];
    //Move player into an animation if player is standing
	if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
	    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
	};

	if ((damage _vehicle) < 1) then {
 			_vehicle setDamage 0;
	}else {
		[_vehicle,(typeOf _vehicle),_unit] call lsr_staticweapons_adjustHeight;
	};

}, [_vehicle, _unit], 1, 0]call ace_common_fnc_waitAndExecute;
