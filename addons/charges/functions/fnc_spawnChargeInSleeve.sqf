/*
 * Author: P1NGA
 * Handles The Spawning Of Charges Inside Sleeves.
 * Can Also Handle The Attachment Of Existing Charges To Existing Sleeves.
 *
 * Arguments:
 * 0: Sleeve Reference <OBJECT>
 * 1: Charge Reference <OBJECT> or nil
 *
 * Return Value:
 * None
 *
 * Public: Yes
 */
params ["_sleeve", ["_charge", "false"]];

_typeOf = typeOf _sleeve;

if (_charge == "false") exitWith {
    if (_typeOf == "ACE_MACS_M231_Sleeve_F") then {
        _charge = "ACE_MACS_M231_Charge_F" createVehicle (position _sleeve);
        _charge attachTo [_sleeve, [0,0,.0075],"charge_center"];
        _charge animate ["charge_size",4];
        _returnValue = _charge;
    };
    if (_typeOf == "ACE_MACS_M232_Sleeve_F") then {
        _charge = "ACE_MACS_M232_Charge_F" createVehicle (position _sleeve);
        _charge attachTo [_sleeve, [0,0,.0075],"charge_center"];
        _charge animate ["charge_size",5];
        _returnValue = _charge;
    };
};
if (_charge != "false") exitWith {
    _charge attachTo [_sleeve, [0,0,0.0075],"charge_center"];
};
