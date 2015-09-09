/*
Author: www.3commandobrigade.com
Resupply ammo to a vehicle's weapon from the vehicle's inventory
Arguments:
0: vehicle
Return Value:
None
*/
#include "script_component.hpp"
	params ["_vehicle", "_turretIndex", "_magName"];
	private ["_magName", "_listOfMags", "_listOfQuantities", "_i", "_quantity"];

	_listOfMags = getMagazineCargo _vehicle;
	_listOfQuantities = _listOfMags select 1;
	clearMagazineCargoGlobal _vehicle;
	_i=0;
	{
		_quantity = _listOfQuantities select _i;
		if (_x == _magName) then {
			_quantity = _quantity - 1;
			if (_quantity > 0) then {
				_vehicle addMagazineCargoGlobal [_x, _quantity];
			};
		} else {
			_vehicle addMagazineCargoGlobal [_x, _quantity];
		};
		_i = _i + 1;

	} forEach (_listOfMags select 0);

	["16aa_jackals_removeMagazine", [_vehicle,_magName ,_turretIndex]] call ace_common_fnc_globalEvent;
	["16aa_jackals_addMagazine", [_vehicle,_magName ,_turretIndex]] call ace_common_fnc_globalEvent;



