#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"16aa_basha_roll"};
		weapons[] = {"16aa_basha_roll_item"};
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