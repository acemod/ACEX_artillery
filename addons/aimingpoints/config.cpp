#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"acex_artillery_AimingPost_F","acex_artillery_Collimator_F"};
        weapons[] = {"acex_artillery_AimingPost", "acex_artillery_Collimator"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"acex_artillery_main"};
        author[] = {};
        VERSION_CONFIG;
    };
};

#include "config\CfgEventhandlers.hpp"
#include "config\CfgVehicles.hpp"
#include "config\CfgWeapons.hpp"
