/*
 * Author: Grey-Soldierman
 *
 * Description:
 * Checks whether a part can be detached.It does this by checking the state of multiple animations
 *
 * Argument:
 * 0: Any object <OBJECT>
 * 1: Animations <ARRAY>
 *
 * Return Value:
 * canAttachPart <BOOLEAN>
 *
 * Public: Yes
 */

params ["_object","_animations"];


//Check the state of each animation against the condition
private _boolArr = [];
{
    private _inPhase = false;
    _x params ["_animName","_phaseCondition","_operator"];
    private _phase = _object animationPhase _animName;
    switch (_operator) do {
        case (-2): {_inPhase = _phase < _phaseCondition};
        case (-1): {_inPhase = _phase <= _phaseCondition};
        case (0): {_inPhase = _phase == _phaseCondition};
        case (1): {_inPhase = _phase >= _phaseCondition};
        case (2): {_inPhase = _phase > _phaseCondition};
    };
    if (_inPhase) then {_boolArr pushBack true};
} forEach _animations;

//If all animations are in the desired stage then return true
if (count _boolArr == count _animations && !(false in _boolArr)) exitWith {true};

false