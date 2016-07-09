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
params ["_object","_unloader","_animation","_part"];

private _nearestPart = nearestObject [_object, _part];

deleteVehicle _nearestPart;

_object animate [_animation, 0,true];