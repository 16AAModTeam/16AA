/*
 * Author: Grey
 * Loads Magazine into static weapon
 *
 * Arguments:
 * 0: static <OBJECT>
 * 1: unit <OBJECT>
 * 2: magazineClassOptional <OPTIONAL><STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target,_player,'16aa_static_magazine_l16_illum'] call lsr_staticweapons_loadMagazine
 *
 * Public: Yes
 */
#include "script_component.hpp"

params ["_static","_unit","_magazineClassOptional"];
<<<<<<< HEAD
private ["_weapon","_currentMagazine","_magazines","_magazineDetails","_listOfMagNames","_magazineClass","_magazineClassDetails","_parsed","_roundsLeft","_configMortar"];
=======
private ["_weapon","_currentMagazine","_count","_magazines","_magazineDetails","_listOfMagNames","_magazineClass","_magazineClassDetails","_parsed","_roundsLeft","_configMortar"];
>>>>>>> 0d09b7dd26e9a1bd802388515dd3b7711a2471c8

//Get weapon & magazine information of static weapon
_weapon = (_static weaponsTurret [0]) select 0;
_currentMagazine = (magazinesAllTurrets _static) select 1;
_currentMagazineClass = _currentMagazine select 0;
_count = _currentMagazine select 2;

//Check all of the players magazines to see if they are compatible with the static weapon. First magazine that is compatible is chosen
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
//If the static weapon already has an empty magazine then remove it
if (_count == 0) then {
	["16aa_staticweapons_removeMagazine", [_staticNew, _currentMagazineClass]] call ace_common_fnc_globalEvent;
};
//Find out the ammo count of the compatible magazine found
if (_magazineClassDetails != "") then{
	_parsed = _magazineClassDetails splitString "([]/: )";
	_parsed params ["_type", "", "", "_roundsLeftText", "_maxRoundsText"];
	_roundsLeft = parseNumber _roundsLeftText;
	_roundsMax = parseNumber _maxRoundsText;
	_magType = _type;
};

//_configMortar = getNumber (configFile >> "CfgMagazines" >> _magazineClass >> QGVAR(isMortarRound));
//If function has been called with an optional classname hten add that magazine to the static weapon. Otherwise add the compatible magazine
if(_magazineClassOptional !="") then{
		_unit removeMagazine _magazineClassOptional;
		["16aa_staticweapons_addMagazine", [_static, _magazineClassOptional]] call ace_common_fnc_globalEvent;
	}else{
		_unit removeMagazine _magazineClass;
		["16aa_staticweapons_addMagazine", [_static, _magazineClass]] call ace_common_fnc_globalEvent;
		["16aa_staticweapons_setAmmo", _static, [_static, _magazineClass,_roundsLeft]] call ace_common_fnc_targetEvent;
<<<<<<< HEAD
};
=======
	};
>>>>>>> 0d09b7dd26e9a1bd802388515dd3b7711a2471c8
