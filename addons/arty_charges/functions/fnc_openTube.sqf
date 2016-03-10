/*
 * Author: P1NGA
 * 
 *
 * Arguments:
 * 0: 
 * 1: 
 *
 * Return Value:
 * None
 *
 * Public: Yes
 */
#include "script_component.hpp"

params ["_object", ["_id", "false"]];
//private ["_eventNames", "_eventFunctions", "_eventIndex"];

_typeOf = typeOf _object;
diag_log 'Starting';

if (_id != "false") exitWith {
	diag_log 'Passed';
	if (_typeOf == "ACE_MACS_M231_Pallet_F") then {
		diag_log 'Step Into';
		_anim = "open_" + _id;
		diag_log _anim;
		_center = "center_" + _id;
		diag_log _center;
		_object animate [_anim, 1];
		_sleeve = "ACE_MACS_M231_Sleeve_F" createVehicle (position _object);
		_sleeve attachTo [_object, [0,0,0], _center];
		_charge = [_sleeve] call FUNC(spawnChargeInSleeve);
	};
	if (_typeOf == "ACE_MACS_M232_Pallet_F") then {
	diag_log 'Step Into';
		_anim = "open_" + _id;
		diag_log _anim;
		_center = "center_" + _id;
		diag_log _center;
		_object animate [_anim, 1];
		_vector = (_object selectionPosition "slingload_point_02") vectorFromTo (_object selectionPosition "slingload_point_01");
		_sleeve = "ACE_MACS_M232_Sleeve_F" createVehicle (position _object);
		_sleeve attachTo [_object, [0,0,0], _center];
		_sleeve setVectorUp [_vector select 0, (_vector select 1)-0.001, (_vector select 2) + 0.001];
		diag_log _vector;
		_charge = [_sleeve] call FUNC(spawnChargeInSleeve);
	};
	diag_log 'Finished';
};
