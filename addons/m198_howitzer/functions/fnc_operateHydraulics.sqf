/*
 * Author: p1nga
 *
 *
 *
 * Argument:
 * 0: Any object <OBJECT>
 *
 *
 * Return Value:
 *
 *
 * Public: Yes
 */
#include "script_component.hpp"
params ["_object"];
// private["_leverPosWheel", "_leverPosShift"];

diag_log _object;

_leverPosWheel = _object animationPhase "lever_wheel";
_leverPosShift = _object animationPhase "lever_shift";

if (_leverPosWheel != 0) then {
    if (_leverPosShift != 0) then {
        hint "Check Control Panel";
    }else{
        if (_object animationPhase "lower_wheels" == 0) then { _object animate ["lower_wheels",1]; };
        if (_object animationPhase "lower_wheels" == 1) then { _object animate ["lower_wheels",0]; };
    };
}else{
    if (_object animationPhase "shift_foot" == 0) then { _object animate ["shift_foot",1]; };
    if (_object animationPhase "shift_foot" == 1) then { _object animate ["shift_foot",0]; };
};
