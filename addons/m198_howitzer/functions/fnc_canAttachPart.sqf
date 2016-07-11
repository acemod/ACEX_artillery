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

//Find the nearest compatible part
private _nearestPart = nearestObject [_unloader, _part];

//Check if the part is close enough and not null
if ((isNull _nearestPart) || _unloader distance _nearestPart > 1) exitWith {false};

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
    //diag_log format["Anim: %1 Condition: %2  Operator: %3 Bool: %4", _animName, _phaseCondition, _operator,_inPhase ];
    if (_inPhase) then {_boolArr pushBack true};
} forEach _animations;

//If all animations are in the desired stage then return true
if (count _boolArr == count _animations && !(false in _boolArr)) exitWith {true};

false