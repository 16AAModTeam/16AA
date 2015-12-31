class Extended_PreInit_EventHandlers {
  class ADDON {
    init = QUOTE( call COMPILE_FILE(XEH_preInit) );
  };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE( call COMPILE_FILE(XEH_postInit) );
    };
};

class Extended_Init_EventHandlers {
    class ACE_TripodObject {
        class ADDON {
            init = QUOTE(_this call DEFUNC(dragging,initObject));
        };
    };
};
class Extended_FiredBIS_EventHandlers {
    class 16aa_L16_Mortar {
        class ADDON {
            firedBIS = QUOTE(_this call FUNC(handleFiredMortar));
        };
    };
    class 16aa_m6h_Mortar {
        class ADDON {
            firedBIS = QUOTE(_this call FUNC(handleFiredMortar));
        };
    };
    class 16aa_L118_base {
        class ADDON {
            firedBIS = QUOTE(_this call FUNC(handleFiredMortar));
        };
    };
    class 16aa_Javelin_Static_base{
        class ADDON {
            firedBIS = QUOTE(_this call FUNC(handleFiredMortar));
        };
    };
    class 16aa_Javelin_Static_middle{
        class ADDON {
            firedBIS = QUOTE(_this call FUNC(handleFiredMortar));
        };
    };
    class 16aa_Javelin_Static_raised{
        class ADDON {
            firedBIS = QUOTE(_this call FUNC(handleFiredMortar));
        };
    };
};