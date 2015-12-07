#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common"};
        author[] = {};
        VERSION_CONFIG;
    };
};

#include "config\CfgEventhandlers.hpp"
#include "config\CfgVehicles.hpp"
#include "config\CfgWeapons.hpp"