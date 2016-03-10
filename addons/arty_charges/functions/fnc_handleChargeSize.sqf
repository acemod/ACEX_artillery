/*
 * Author: P1NGA
 * Handle Changing The Model Dependant On Charge Size (Charge Stack).
 *
 * Arguments:
 * 0: Charge Refernce <OBJECT>
 * 1: Charge Size <INTEGER>
 *
 * Return Value:
 * None
 *
 * Public: Yes
 */
#include "script_component.hpp"

params ["_object", "_size"];

//private ["_eventNames", "_eventFunctions", "_eventIndex"];

if (_object isKindOf "ACE_MACS_M231_Charge_F") then {
  _object animate ["charge_size", _size];
};
if (_object isKindOf "ACE_MACS_M232_Charge_F") then {
  _object animate ["charge_size", _size];
};
