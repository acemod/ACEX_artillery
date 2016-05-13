/*
 * Author: p1nga
 *
 * Toggle The Aiming Post Light.
 *
 * Argument:
 * 0: Any object <OBJECT>

 * The Current Light Status Is Determined From The AnimationPhase of 'light_mode'
 * 0 = Off, 1 = Green, 2 = Red

 *
 * Return Value:
 * Updated Status
 *
 * Public: Yes
 */
#include "script_component.hpp"
params ["_object"];

diag_log _object;

_lightStatus = _object animationPhase "light_mode";

switch (_lightStatus) do {
	case 0: {
		_object animate ["light_mode",1];
	};
	case 1: {
		_object animate ["light_mode",2];
	};
	case 2: {
		_object animate ["light_mode",0];
	};
	default {
		hint "Something Went Wrong With AimingPost";
	};
};
