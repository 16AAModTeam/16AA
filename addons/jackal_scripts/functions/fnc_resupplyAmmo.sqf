/*
Author: www.3commandobrigade.com
Resupply ammo to a vehicle's weapon from the vehicle's inventory
Arguments:
0: vehicle
Return Value:
None
*/
#include "script_component.hpp"
params ["_vehicle", "_unit"];
private ["_unit","_vehicle","_weapon", "_turret", "_magazines", "_listOfMagNames", "_magName","_turretIndex"];
_unit = ACE_player;
_vehicle = vehicle ACE_player;
_turretIndex = [_unit] call ace_common_fnc_getTurretIndex;

if (((_turretIndex  select 0) == 1) || ((_turretIndex  select 0) == 0))  then {
	{
		// Look for unit in the vehicle crew
		if ((_x select 0) == _unit) then {

			if (((weaponState [_vehicle, _turretIndex]) select 4) < 1) then {
				_weapon = (_vehicle weaponsTurret _turretIndex) select 0;
				_listOfMagNames = getArray(configFile >> "cfgWeapons" >> _weapon >> "magazines");
				_magazines = (getMagazineCargo _vehicle) select 0;

				//debugText = format["*** Turret=%1, Weapon=%2, Mags=%3, Mags in Inv=%4 ***", _turretIndex, _weapon, _listOfMagNames, _magazines];

				_magName = "";
				{
					if (_x in _magazines) exitWith {
						_magName = _x;
					};
				} forEach _listOfMagNames;
				if (_magName != "") exitWith {
					["16aa_jackals_removeMagazine", [_vehicle,_magName ,_turretIndex]] call ace_common_fnc_globalEvent;
					[_vehicle, _turretIndex, _magName] call FUNC(addMagazine);
				};
			};
		};
	} forEach fullCrew _vehicle;
};
