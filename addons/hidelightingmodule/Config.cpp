#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"ModuleLightning_F"};;
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"16AA_common"};
        author[] = {"Glowbal"};
        authorUrl = "";
        VERSION_CONFIG;
    };
};

class CfgFactionClasses {
    class NO_CATEGORY;
    class GBL_Curator_Module_lightning: NO_CATEGORY {
        displayName = "Lightning";
        priority = 2;
        side = 7;
    };
};

class CfgVehicles {
    class Module_F;
    class ModuleLightning_F: Module_F {
        vehicleClass = "GBL_Curator_Module_lightning";
    };
};


