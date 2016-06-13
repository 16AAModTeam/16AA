/*
 * Author: Grey
 *
 * Adjusts SW & LR radio volume
 * 
 * Arguments:
 * 0: unit <OBJECT>
 *
 * Return value:
 * None
 */
#include "script_component.hpp"

#define VOLUME_NORMAL 8
#define VOLUME_LOW 3

private ["_haveSW","_haveLR","_radioSW"];

_haveSW = call TFAR_fnc_haveSWRadio;
_haveLR = call TFAR_fnc_haveLRRadio;

_radioSW = call TFAR_fnc_activeSwRadio;
(call TFAR_fnc_activeLrRadio) params ["_radioObject", "_radioID"];

if(ACE_player getVariable [QGVAR(headsetIsLowered),false]) then{
	if (_haveSW)then{
		[_radioSW, 8] call TFAR_fnc_setSwVolume;
	};

	if (_haveLR)then{
		[_radioObject, _radioID, VOLUME_NORMAL] call TFAR_fnc_setLrVolume;
	};
	ACE_player setvariable [QGVAR(headsetIsLowered), false, true];

	0 cutFadeOut 0;
}else{
	if (_haveSW)then{
		[_radioSW, 3] call TFAR_fnc_setSwVolume;
	};

	if (_haveLR)then{
		[_radioObject, _radioID, VOLUME_LOW] call TFAR_fnc_setLrVolume;
	};
	ACE_player setvariable [QGVAR(headsetIsLowered), true, true];

	0 cutRsc ["RscLSRLoweredHeadset", "PLAIN", 1, false];
};
