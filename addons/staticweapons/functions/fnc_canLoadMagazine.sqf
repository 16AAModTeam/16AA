/*
 * Author: Grey
 * Checks whether magazine can be loaded into static weapon
 *
 * Arguments:
 * 0: static <OBJECT>
 * 1: unit <OBJECT>
 * 2: magazineClassOptional <OPTIONAL><STRING>
 *
 * Return Value:
 * canLoadMagazine <BOOL>
 *
 * Example:
 * [_target,_player,'16aa_static_magazine_1Rnd_105mm_HE'] call lsr_staticweapons_canLoadMagazine
 *
 * Public: Yes
 */

#include "script_component.hpp"

params ["_static","_unit","_magazineClassOptional"];
private ["_canLoadMagazine","_currentMagazine","_currentMagazineClass","_weapon","_magazines","_listOfMagNames","_hasCompatibleMagazine","_hasBarrel","_count","_parsed"];

_canLoadMagazine = false;
_currentMagazine = (magazinesAllTurrets _static) select 1;
_currentMagazineClass = _currentMagazine select 0;
_weapon = (_static weaponsTurret [0]) select 0;

_magazines = magazines _unit;
_listOfMagNames = getArray(configFile >> "cfgWeapons" >> _weapon >> "magazines");
_hasCompatibleMagazine = false;
_hasBarrel = _static getVariable [QGVAR(hasBarrel),true];
_count = 0;
_parsed  ="";

//If function is called with an optional string then check if player has that magzine otherwise check all magazines of the player to see if they are compatible with the static weapon
if (_magazineClassOptional != "")then{
	if ([_unit,_magazineClassOptional] call ace_common_fnc_hasMagazine)  then {
		_hasCompatibleMagazine = true;
	};
}else{
	{
		if ([_unit,_x] call ace_common_fnc_hasMagazine)  exitWith {_hasCompatibleMagazine = true;};
	}forEach _listOfMagNames;
};
//If static weapon has a magazine then find the ammo count
if ((count (_static magazinesTurret [0])) > 0)then{
	_count = _currentMagazine select 2;
	//If current magazine is empty then just remove it.
	if (_count == 0)then {
		["16aa_staticweapons_removeMagazine", [_static, _currentMagazineClass]] call ace_common_fnc_globalEvent;
	};
};

//If the static weapon doesn't have a magzine or a magazine with no bullets, the player has a compatible magazine and the static weapon has a barrel then you can load a magazine
if ( ( ((count (_static magazinesTurret [0])) == 0) || (_count == 0) ) && _hasCompatibleMagazine && _hasBarrel) then {
	_canLoadMagazine = true;
};
_canLoadMagazine
