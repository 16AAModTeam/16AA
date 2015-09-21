/*
Author: Grey

Adjusts SW & LR radio volume

Arguments:
0: unit <OBJECT>

Return value:
None
*/
#include "script_component.hpp"

private "_haveSW,_haveLR,_radioSW,_radioLR,_isLowered";

_haveSW = call TFAR_fnc_haveSWRadio;
_haveLR = call TFAR_fnc_haveLRRadio;

_radioSW = call TFAR_fnc_activeSwRadio;
_radioLR = call TFAR_fnc_activeLrRadio;

_isLowered = ACE_player getVariable [QGVAR(headsetIsLowered),false];
if(_isLowered) then{
	if (_haveSW)then{
		[_radioSW, 8] call TFAR_fnc_setSwVolume;
	};

	if (_haveLR)then{
		[(call TFAR_fnc_activeLrRadio) select 0, (call TFAR_fnc_activeLrRadio) select 1, 8] call TFAR_fnc_setLrVolume;
	};
	ACE_player setvariable [QGVAR(headsetIsLowered), false, true];
	0 cutFadeOut 0;
}else{
	if (_haveSW)then{
		[_radioSW, 3] call TFAR_fnc_setSwVolume;
	};

	if (_haveLR)then{
		[(call TFAR_fnc_activeLrRadio) select 0, (call TFAR_fnc_activeLrRadio) select 1, 3] call TFAR_fnc_setLrVolume;
	};
	ACE_player setvariable [QGVAR(headsetIsLowered), true, true];
	0 cutRsc ["RscLoweredHeadset", "PLAIN", 1, false];
};
