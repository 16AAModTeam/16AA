#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};;
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"16AA_common"};
        author[] = {"Glowbal"};
        authorUrl = "";
        VERSION_CONFIG;
    };
};

class CfgMagazines {
    class CA_magazine;
    class 30Rnd_556x45_Stanag: CA_magazine {
        cse_wind_coefficient = 0.36;
        tracersEvery = 3;
        lastRoundsTracer = 5;
    };
};

class CfgAmmo {
    class BulletBase;
    class B_556x45_Ball: BulletBase {
        nvgOnly = 0;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerScale = 0.6;
        tracerStartTime = 0.02;
        tracerEndTime = 4.1;
    };
};