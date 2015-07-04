/*
 * Author: Glowbal
 *
 *
 * Arguments:
 *
 *
 * Return Value:
 *
 *
 * Public: No
 */

private ["_playerName"];
_playerName = if (typeName _this == "ARRAY") then {_this select 0} else {_this};

{ if (toLower (name _x) == toLower _playerName) exitwith {_x setPosATL (getPosATL ACE_player)}}foreach playableUnits;
