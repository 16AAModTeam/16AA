/*
Author: Grey

Checks whether unit has a radio, if so it checks if its not already lowered

Arguments:
0: unit <OBJECT>

Return Value:
canLowerHeadset - True/False

*/
#include "script_component.hpp"

params["_unit"];
private "_canLowerHeadset,_haveSW,_haveLR,_isLowered";

_canLowerHeadset = false;
_haveSW = call TFAR_fnc_haveSWRadio;
_haveLR = call TFAR_fnc_haveLRRadio;
_isLowered = _unit getVariable [QGVAR(headsetIsLowered),false];

if((_haveSW || _haveLR) && !_isLowered)then {
	_canLowerHeadset = true;
};

_canLowerHeadset