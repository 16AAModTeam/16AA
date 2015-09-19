/*
Author: Grey

Raises SW & LR radio volume

Arguments:
0: unit <OBJECT>

Return value:
 None
*/
#include "script_component.hpp"

params["_unit"];
private "_haveSW,_haveLR,_radioSW,_radioLR";

_haveSW = call TFAR_fnc_haveSWRadio;
_haveLR = call TFAR_fnc_haveLRRadio;

_radioSW = call TFAR_fnc_activeSwRadio;
_radioLR = call TFAR_fnc_activeLrRadio;

if (_haveSW)then{
	[_radioSW, 8] call TFAR_fnc_setSwVolume;
};

if (_haveLR)then{
	[(call TFAR_fnc_activeLrRadio) select 0, (call TFAR_fnc_activeLrRadio) select 1, 8] call TFAR_fnc_setLrVolume;
};
_unit setvariable [QGVAR(headsetIsLowered), false, true];