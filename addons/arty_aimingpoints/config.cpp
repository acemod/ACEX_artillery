#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"ACE_Arty_AimingPost_F","ACE_Arty_Collimator_F"};
        weapons[] = {"ACE_Arty_AimingPost", "ACE_Arty_Collimator"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common"};
        author[] = {};
        VERSION_CONFIG;
    };
};

#include "config\CfgEventhandlers.hpp"
#include "config\CfgVehicles.hpp"
#include "config\CfgWeapons.hpp"
