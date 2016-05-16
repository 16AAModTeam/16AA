#include "script_component.hpp"

class CfgPatches {
    class ADDON {
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"LSR_common","ace_interaction"};
		author[] = {"Grey"};
		authorUrl = "";
		VERSION_CONFIG;
    };
};
#include "CfgEventHandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
