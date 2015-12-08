#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common", "ace_interaction", "ace_dragging", "A3_Weapons_F"};
        author[] = {};
        VERSION_CONFIG;
    };
};

#include "config\CfgEventhandlers.hpp"
#include "config\CfgVehicles.hpp"
#include "config\CfgAmmo.hpp"
#include "config\CfgMagazines.hpp"