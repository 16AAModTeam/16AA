/*
Author: Grey

Lowers SW & LR radio volume

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

_debugtext = format ["Debug: %1 %2 %3 %4",_haveSW,_radioSW,_haveLR,_radioLR];
hint _debugText;

if (_haveSW)then{
	[_radioSW, 3] call TFAR_fnc_setSwVolume;
};

if (_haveLR)then{
	[(call TFAR_fnc_activeLrRadio) select 0, (call TFAR_fnc_activeLrRadio) select 1, 3] call TFAR_fnc_setLrVolume;
};
_unit setvariable [QGVAR(headsetIsLowered), true, true];

