#include "script_component.hpp"

["16aa", "16AA_Key_Adjust_Headset", "Lower/Raise Radio Headset",
{
	if!([ACE_player] call FUNC(canLowerHeadset)) exitWith {false};

	[ACE_player] call FUNC(lowerHeadset);
	ACE_player;
},
{false},
[0, [false, false, false]],false] call cba_fnc_addKeybind;