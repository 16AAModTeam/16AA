#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_interaction"};
        author[] = {"Glowbal", "ACE Team"};
        authorUrl = "";
        versionDesc = "16AA AddOns";
        VERSION_CONFIG;
    };
};

#include "CfgModuleCategories.hpp"
