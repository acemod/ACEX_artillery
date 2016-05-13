/*
 * Author: p1nga
 *
 * Toggle The Post Light Position.
 *
 * Argument:
 * 0: Any object <OBJECT>
 *
 * 0 = High Position, 1 = Low Position
 *
 * Return Value:
 * None
 *
 * Public: Yes
 */
#include "script_component.hpp"
params ["_object"];

diag_log _object;

_lightPos = _object animationPhase "move_post_light";

if (_lightPos == 0) then {
    _object animate ["move_post_light",1];
} else {
    _object animate ["move_post_light",0];
};
