#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
		weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"LSR_common","16aa_Vehicles_Jackals_c"};
        author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
    };
};
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"