class CfgPatches
{
  class lambs_backpack {
    units[] = {
      "LAMBS_B_Kitbag_m98",
      "LAMBS_B_Kitbag_m98_medic",
      "LAMBS_B_AssaultPack_m98",
      "LAMBS_B_Carryall_Snow",
      "LAMBS_B_AssaultPack_Snow"
    };
    weapons[] = {};
    requiredVersion = 1.82;
    requiredAddons[] = {
        "A3_Characters_F_Beta",
        "A3_Characters_F",
        "A3_Characters_F_BLUFOR"
    };
    version = "1.0"; 
    versionStr = "1.0";
    author = "nopryl.no";
    authorUrl = "http://www.nopryl.no";
  };
};

class CfgVehicles {
  class B_kitBag_rgr;
  class B_AssaultPack_rgr;
  class B_Carryall_oli; 
  // M98 
  class LAMBS_B_Kitbag_m98 : B_kitBag_rgr {
    author = "nopryl.no";
    displayName = "Kitbag (M98)";
    hiddenSelectionsTextures[] = {"\backpack\data\texture\kitbag_m98.paa"};
  };
  class LAMBS_B_AssaultPack_m98 : B_AssaultPack_rgr {
    author = "nopryl.no";
    displayName = "Assault Pack (M98)";
    hiddenSelectionsTextures[] = {"\backpack\data\texture\assault_m98.paa"};
  };  
  // Medic 
  class LAMBS_B_Kitbag_m98_medic : B_kitBag_rgr {
    author = "nopryl.no";
    displayName = "Kitbag (M98) [Medic]";
    hiddenSelectionsTextures[] = {"\backpack\data\texture\kitbag_m98_medic.paa"};
  };
  // Snow 
  class LAMBS_B_Carryall_Snow : B_Carryall_oli {
    author = "nopryl.no";
    displayName = "Carryall Backpack (Snow)";
    hiddenSelectionsTextures[] = {"\backpack\data\texture\carry_snow.paa"};
  };
  class LAMBS_B_AssaultPack_Snow : B_AssaultPack_rgr {
    author = "nopryl.no";
    displayName = "Assault Pack (Snow)";
    hiddenSelectionsTextures[] = {"\backpack\data\texture\assault_snow.paa"};
  };    
};