/*
 * Author: Grey-Soldierman
 *
 * Description:
 * Attachs a part to the M198 by setting an animation phase and deleting an object
 *
 * Argument:
 * 0: Any object <OBJECT>
 * 1: Player <OBJECT>
 * 2: Animation name <STRING>
 * 3: Part <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target,_player,'hide_right_foot','ACE_M198_Foot_F'] call acex_artillery_m198_howitzer_fnc_attachPart;
 * Public: Yes
 */
#include "script_component.hpp"
params ["_object","_unloader","_animations","_part"];

//Find the nearest compatible part
private _nearestPart = nearestObject [_unloader, _part];

//Only use the closest part
if (!(isNull _nearestPart) && _unloader distance _nearestPart <= 1) then {
    deleteVehicle _nearestPart;
    {
        _x params ["_animName","_animPhase"];
        _object animate [_animName, _animPhase, true];
    } foreach _animations
};
