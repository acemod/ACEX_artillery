/*
 * Author: p1nga
 *
 * Toggle The Aiming Post Light Position.
 *
 * Argument:
 * 0: Any object <OBJECT>

 * 0 = Upper Position, 1 = Lower Position

 *
 * Return Value:
 * Updated Status
 *
 * Public: Yes
 */
#include "script_component.hpp"
params ["_object"];

diag_log _object;

_lightPosition = _object animationPhase "move_post_light";

if (_lightPosition == 0) then {
	diag_log 'Move Light Down';
	_object animate ["move_post_light",1];
} else {
	diag_log 'Move Light Up';
	_object animate ["move_post_light",0];
};
