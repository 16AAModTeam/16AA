#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
		weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"LSR_common"};
        author[] = {"Grey"};
        authorUrl = "";
        VERSION_CONFIG;
    };
};
#include "Crates\Crate_Ammo.hpp"
#include "Crates\Crate_CSW.hpp"
#include "Crates\Crate_Equipment.hpp"
#include "Crates\Crate_Flight.hpp"
#include "Crates\Crate_FSG.hpp"
#include "Crates\Crate_Main.hpp"
#include "Crates\Crate_Medical.hpp"
#include "Crates\Crate_Ordnance.hpp"
#include "Crates\Crate_Platoon.hpp"
#include "Crates\Crate_Radio.hpp"
#include "Crates\Crate_RHA.hpp"
#include "Crates\Crate_Section.hpp"
#include "Crates\Crate_Training.hpp"