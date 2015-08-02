/*
Author: Grey

Place down tripod using a timer

Arguments:
0: unit <OBJECT>
1: item <STRING>
2: tripod <STRING>

Return Value:
Nothing

Return value:
 None
*/
#include "script_component.hpp"

PARAMS_3(_unit,_tripodClass,_objectClass);

_name = configName(configFile >> "CfgVehicles" >> _objectClass >> "displayName");
_progressText = format["Assembling: %1",_name];

[5, [_unit,_tripodClass,_objectClass], {(_this select 0) call FUNC(place)}, {},_progressText] call ace_common_fnc_progressBar;