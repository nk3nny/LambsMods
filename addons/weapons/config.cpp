class CfgPatches
{
  class lambs_weapons {
    units[] = {};
    weapons[] = {
        "LAMBS_LMG_03_brn_F",
        "LAMBS_hgun_P07_blk_F"
    };
    requiredVersion = 1.82;
    requiredAddons[] = {
        "A3_Weapons_F_Exp"
    };
    version = "1.0"; 
    versionStr = "1.0";
    author = "nopryl.no";
    authorUrl = "http://www.nopryl.no";
  };
};

class cfgWeapons {
    class LMG_03_F;
    class hgun_P07_F; 
    
    // Minimi 
    class LAMBS_LMG_03_brn_F : LMG_03_F {
        author = "nopryl.no";
        baseWeapon = "LAMBS_LMG_03_base_F";
        //displayName = "LIM-85 5.56 mm (Brown)";
        displayName = "FN Minimi SPW (Brown)";
        hiddenSelectionsTextures[] = {
			"weapons\data\lmg\minimi_01.paa",
			"weapons\data\lmg\minimi_02.paa",
			"\A3\weapons_f\machineguns\m200\data\grip_co.paa"
		};
    }; 

    // pistol 
    class LAMBS_hgun_P07_blk_F : hgun_P07_F {
        author = "nopryl.no";
        baseWeapon = "LAMBS_hgun_P07_blk_F";
        //displayName = "P07 9 mm (Black)";
        displayName = "P99 (Black)";
        hiddenSelectionsTextures[] = {"weapons\data\pistol\p07.paa"};
    }; 

};