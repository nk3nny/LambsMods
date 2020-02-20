class CfgPatches
{
  class lambs_bouncy
  {
    units[] = {};
    weapons[] = {};
    requiredVersion = 1.82;
    requiredAddons[] = {
        "A3_Weapons_F",
        "rhs_c_weapons",
        "rhsusf_c_weapons"
    };  
    version = "1.0";
    versionStr = "1.0";
    author = "nkenny";
    authorUrl = "http://www.nopryl.no";
  };
};

class CfgAmmo {
    class SmokeShell;
    class rhs_40mm_smoke_white: SmokeShell {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };

    class SmokeShellRed;
    class rhs_40mm_smoke_red: SmokeShellRed {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };

    class SmokeShellGreen;
    class rhs_40mm_smoke_green: SmokeShellGreen {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };

    class SmokeShellYellow;
    class rhs_40mm_smoke_yellow: SmokeShellYellow {
        simulation = "shotSmoke";
        deflectionSlowDown = 0.3;
    };

    class rhs_g_vog25;
    class rhs_g_vg40md_white: rhs_g_vog25 {
        simulation = "shotSmoke";
        deflecting = 30;
        deflectionSlowDown = 0.3;
    }
};