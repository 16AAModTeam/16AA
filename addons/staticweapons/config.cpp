#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = 
        {
			"16aa_tripod_item",
			"16aa_tripod_base",
			"16aa_tripod_low",
			"16aa_tripod_middle",
			"16aa_tripod_raised"
		};
		weapons[] = {"16aa_tripod"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"LSR_common"};
        author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"