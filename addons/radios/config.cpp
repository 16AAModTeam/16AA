#include "script_component.hpp"

class CfgPatches {
    class ADDON {
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"LSR_common","task_force_radio"};
		author[] = {"Grey"};
		authorUrl = "";
		VERSION_CONFIG;
    };
};
#include "RscTitles.hpp"
#include "CfgEventHandlers.hpp"
