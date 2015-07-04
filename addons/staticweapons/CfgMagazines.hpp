class CfgMagazines {
    class 100Rnd_127x99_mag_Tracer_red;
    class 150Rnd_762x51_Box;
    class 96Rnd_40mm_G_belt;
    class 16aa_static_item_ammobox_50cal : 100Rnd_127x99_mag_Tracer_red   {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = ".50cal Ammo Box";
        descriptionshort = "100Rd .50cal. Used in L2A1 Heavy Machine Gun";
        model = PATHTOF(data\ammobox_50cal.p3d);
        picture = PATHTOF(UI\w_ammobox_50cal_ca.paa);
        magazines[] = {};
        mass = 20;
    };
    class 16aa_static_item_ammobox_762 : 150Rnd_762x51_Box  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "7.62mm Ammo Box";
        descriptionshort = "200Rd 7.62mm Used in L7A2 General Purpose Machine Gun";
        model = PATHTOF(data\ammobox_762.p3d);
        picture = PATHTOF(UI\w_ammobox_762_ca.paa);
        magazines[] = {};
        mass = 20;
    };
    class 16aa_static_item_ammobox_40mm : 96Rnd_40mm_G_belt  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "40mm Ammo Box";
        descriptionshort = "96Rd 40mm. Used in L134A1 Grenade Machine Gun";
        model = PATHTOF(data\ammobox_50cal.p3d);
        picture = PATHTOF(UI\w_ammobox_50cal_ca.paa);
        magazines[] = {};
        mass = 20;
    };
};