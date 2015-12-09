/*
Author: Grey

Checks whether unit has a TFAR radio

Arguments:
0: unit <OBJECT>

Return Value:
canLowerHeadset - True/False

*/
#include "script_component.hpp"

(call TFAR_fnc_haveSWRadio || {call TFAR_fnc_haveLRRadio})