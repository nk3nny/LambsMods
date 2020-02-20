class CfgPatches {
  class lambs_beret {
    units[] = {};
    weapons[] = {
        "LAMBS_H_Beret_blk",
        "LAMBS_H_Beret_grn",
        "LAMBS_H_Beret_blu"
    };
    requiredVersion = 1.82;
    requiredAddons[] = {
        "A3_Characters_F_EPB"
    };
    version = "2.01";
    versionStr = "2.01";
    author = "nopryl.no";
    authorUrl = "http://www.nopryl.no";
  };
};

class cfgWeapons {
    class ItemCore; 
    class H_Beret_02;
    class LAMBS_H_Beret_blk : H_Beret_02 {
        author = "nopryl.no";
        displayName = "Beret [LAMBS Black]";
        hiddenSelectionsTextures[] = {"\beret\data\texture\lambs_beret_blk_co.paa"};
    };
    class LAMBS_H_Beret_grn : LAMBS_H_Beret_blk {
        author = "nopryl.no";
        displayName = "Beret [LAMBS Green]";
        hiddenSelectionsTextures[] = {"\beret\data\texture\lambs_beret_grn_co.paa"};
    };
    class LAMBS_H_Beret_blu : LAMBS_H_Beret_blk {
        author = "nopryl.no";
        displayName = "Beret [LAMBS Blue]";
        hiddenSelectionsTextures[] = {"\beret\data\texture\lambs_beret_blu_co.paa"};
    };    
};