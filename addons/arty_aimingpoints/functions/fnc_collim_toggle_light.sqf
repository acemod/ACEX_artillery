/*
 * Author: p1nga
 *
 * Toggle The Light On The Collimator
 *
 * Argument:
 * 0: Any object <OBJECT>
 *
 * The Current Light Status Is Determined From The AnimationPhase of 'collimator_illuminate'
 * 0 = Off, 1 =On
 *
 * Return Value:
 * Updated Status
 *
 * Public: Yes
 */
#include "script_component.hpp"
params ["_object"];

diag_log _object;

_lightStatus = _object animationPhase "collimator_illuminate";

if (_lightStatus == 0) then {
	_object animate ["collimator_illuminate", 1];
}else{
	_object animate ["collimator_illuminate", 0];
};
