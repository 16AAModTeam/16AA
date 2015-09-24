/*
Author: Grey

Loads Magazine into static weapon

Arguments:
0: static <OBJECT>
1: unit <OBJECT>
2: magazineClassOptional <Optional>

Return Value:
nothing

*/
#include "script_component.hpp"

params["_static","_unit","_magazineClassOptional"];
private "_weapon,_currentMagazine,_magazines,_magazineDetails,_listOfMagNames,_magazineClass,_magazineClassDetails,_parsed,_roundsLeft,_configMortar";

_weapon = (_static weaponsTurret [0]) select 0;
_currentMagazine = _static currentMagazineTurret [0];
_magazines = magazines _unit;
_magazineDetails = magazinesDetail _unit;
_listOfMagNames = getArray(configFile >> "cfgWeapons" >> _weapon >> "magazines");
_magazineClass = "";
_magazineClassDetails = "";
_parsed  ="";
_roundsLeft = 0;
{
	if (_x in _listOfMagNames) exitWith {
		_magazineClass = _magazines select _forEachIndex;
		_magazineClassDetails = _magazineDetails select _forEachIndex;
	};
}forEach _magazines;

if ((_static magazineTurretAmmo [_currentMagazine, [0]]) == 0) then {

	["16aa_staticweapons_addMagazine", [_staticNew, _currentMagazine]] call ace_common_fnc_globalEvent;
};

if (_magazineClassDetails != "") then{
	_parsed = _magazineClassDetails splitString "([]/: )";
	_parsed params ["_type", "", "", "_roundsLeftText", "_maxRoundsText"];
	_roundsLeft = parseNumber _roundsLeftText;
	_roundsMax = parseNumber _maxRoundsText;
	_magType = _type;
};

_configMortar = getNumber (configFile >> "CfgMagazines" >> _magazineClass >> QGVAR(isMortarRound));
if(_magazineClassOptional !="") then{
		_unit removeMagazine _magazineClassOptional;
		["16aa_staticweapons_addMagazine", [_static, _magazineClassOptional]] call ace_common_fnc_globalEvent;
	}else{
		_unit removeMagazine _magazineClass;
		["16aa_staticweapons_addMagazine", [_static, _magazineClass]] call ace_common_fnc_globalEvent;
	};