#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = 
        {
			"lsr_tripod_item",
			"lsr_tripod_base",
			"lsr_tripod_low",
			"lsr_tripod_middle",
			"lsr_tripod_raised"
		};
		weapons[] = {"lsr_tripod"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_interaction"};
        author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
    };
};
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"