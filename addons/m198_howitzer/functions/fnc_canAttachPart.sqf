/*
 * Author: Grey-Soldierman
 *
 * Description:
 * Checks whether a part can be attached.It does this by checking the state of multiple animations and if the required object is close by
 *
 * Argument:
 * 0: Any object <OBJECT>
 * 1: Player <OBJECT>
 * 2: Animations <ARRAY>
 * 3: Part <STRING>
 *
 * Return Value:
 * canAttachPart <BOOLEAN>
 *
 * Public: Yes
 */
params ["_object","_unloader","_animations","_part"];

hint format["Name: %1 Operator: %2 Phase: %3",_animationName, _operator, _animationPhase];

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
    if (_inPhase) then {_bool pushBack true};
} forEach _animations;

if (count _boolArr == count _animations && !{false in _boolArr}) then {
    exitWith {true};
};