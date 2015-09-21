/*
Author: Grey

Checks whether unit has a TFAR radio

Arguments:
0: unit <OBJECT>

Return Value:
canLowerHeadset - True/False

*/
#include "script_component.hpp"

private "_canLowerHeadset,_haveSW,_haveLR";

_canLowerHeadset = false;
_haveSW = call TFAR_fnc_haveSWRadio;
_haveLR = call TFAR_fnc_haveLRRadio;

if(_haveSW || _haveLR)then {
	_canLowerHeadset = true;
};

_canLowerHeadset