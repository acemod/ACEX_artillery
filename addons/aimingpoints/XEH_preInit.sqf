#include "script_component.hpp"

ADDON = false;

PREP(apost_toggle_light);
PREP(apost_move_light);
PREP(collim_adjust_sight);

[{_this call FUNC(collim_handle_scroll)}] call EFUNC(common,addScrollWheelEventHandler);

ADDON = true;
