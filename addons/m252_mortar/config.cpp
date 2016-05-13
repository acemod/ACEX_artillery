#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"",""};
        weapons[] = {"", ""};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common","A3_Weapons_F","A3_Static_F","A3_Static_F_Mortar_01"};
        author[] = {};
        VERSION_CONFIG;
    };
};

#include "config\CfgEventhandlers.hpp"
#include "config\CfgVehicles.hpp"