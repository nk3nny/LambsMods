class CfgPatches {
    class lambs_rpg {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.82;
        requiredAddons[] = {
            "A3_Weapons_F",
            "A3_Weapons_F_Exp",
            "A3_Weapons_F_Tank"
        };
        version = "1.2";
        versionStr = "1.2";
        author = "nkenny";
        authorUrl = "http://www.nopryl.no";
    };
};

class Mode_SemiAuto;
class CfgWeapons {
    class LauncherCore;
    class LauncherBase_F;
    class Launch_RPG7_F : LauncherBase_F {
        primary = 11;
        class Single : Mode_SemiAuto {
            aiDispersionCoefX = 1.7;
            aiDispersionCoefY = 2.2;
            //aiRateOfFire = 12; 
            aiRateOfFireDispersion = 10; 
            aiRateOfFireDistance = 300;
            maxRange = 400;
            maxRangeProbab = 0.4;
            midRange = 250;
            midRangeProbab = 0.9;
            minRange = 5; 
            minRangeProbab = 0.56;
            recoil = "recoil_single_law";
            sounds[] = {"StandardSound"};
        }; 
    };
    class launch_RPG32_F : LauncherBase_F {
        class Single : Mode_SemiAuto {
            aiDispersionCoefX = 1.7;
            aiDispersionCoefY = 2.2;
            aiRateOfFire = 7;
            aiRateOfFireDispersion = 3;
            aiRateOfFireDistance = 400;
            maxRange = 600;
            maxRangeProbab = 0.85;
            midRange = 40;
            midRangeProbab = 0.85;
            minRange = 10;
            minRangeProbab = 0.3;
            recoil = "recoil_single_law";
            sounds[] = {"StandardSound"};
        };
    };
};

class CfgAmmo {
    class RocketCore;
    class RocketBase;
    class R_PG7_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1; 
        allowAgainstInfantry = 1;
        cost = 40;
        effectsMissile = "missile3";
    };
    class M_SPG9_HEAT : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 512";
        allowAgainstInfantry = 1;
    };
    class R_PG32V_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1; 
        allowAgainstInfantry = 1;
        cost = 40;
    };
    class R_MRAAWS_HEAT_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 512";
        allowAgainstInfantry = 1;
        cost = 40;
    };
};
