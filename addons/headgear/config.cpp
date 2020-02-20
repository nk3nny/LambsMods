class CfgPatches
{
  class lambs_headgear
  {
    units[] = {};
    weapons[] = {
        "LAMBS_H_MilCap_m98",
        "LAMBS_H_MilCap_snow",
        "LAMBS_H_Booniehat_m98",
        "LAMBS_H_HelmetIA",
        "LAMBS_H_HelmetIA_snow",
        "LAMBS_H_HelmetB",
        "LAMBS_H_HelmetB_snow",
        "LAMBS_H_HelmetB_camo",
        "LAMBS_H_HelmetB_light",
        "LAMBS_H_HelmetB_light_brn",
        "LAMBS_H_HelmetB_light_snow",
        "LAMBS_H_HelmetSpecB",
        "LAMBS_H_HelmetSpecB_brn",
        "LAMBS_H_HelmetSpecB_gry",
        "LAMBS_H_HelmetSpecB_snow"
    };
    requiredVersion = 1.82;
    requiredAddons[] = {
        "A3_Characters_F_EPB"
    };
    version = "1.0";
    versionStr = "1.0";
    author = "nopryl.no";
    authorUrl = "http://www.nopryl.no";
  };
};

class cfgWeapons {
    class H_MilCap_ocamo;
    class H_Booniehat_khk;
    class H_HelmetB;
    class H_HelmetB_camo; 
    class H_HelmetB_light;
    class H_HelmetSpecB;
    class H_HelmetIA; 

    // Soft  
    class LAMBS_H_MilCap_m98 : H_MilCap_ocamo {
        author = "nopryl.no";
        displayName = "Military Cap (M98)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\MilCap_m98.paa"};
    };
    class LAMBS_H_MilCap_snow : H_MilCap_ocamo {
        author = "nopryl.no";
        displayName = "Military Cap (Snow)";
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\MilCap_snow.paa"};
    };      
    class LAMBS_H_Booniehat_m98 : H_Booniehat_khk {
        author = "nopryl.no";
        displayName = "Booniehat (M98)";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\BoonieHat_m98.paa"};
    };
    
    // old helmet 
    class LAMBS_H_HelmetIA : H_HelmetIA {
        author = "nopryl.no";
        displayName = "Modular Helmet (M98)";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\Helmet_old.paa"};
    }; 
    class LAMBS_H_HelmetIA_snow : H_HelmetIA {
        author = "nopryl.no";
        displayName = "Modular Helmet (Snow)";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\Helmet_old_snow.paa"};
    };     

    // regular helmet 
    class LAMBS_H_HelmetB : H_HelmetB {
        author = "nopryl.no";
        displayName = "Combat Helmet (M98)";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\Helmet_m98.paa"};
    };
    class LAMBS_H_HelmetB_snow : H_HelmetB {
        author = "nopryl.no";
        displayName = "Combat Helmet (Snow)";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\Helmet_snow.paa"};
    };    
    
    // camo 
    class LAMBS_H_HelmetB_camo : H_HelmetB_camo {
        author = "nopryl.no";
        displayName = "Combat Helmet (M98 Camo)";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\Helmet_m98.paa","\A3\characters_f\common\data\ghillie2_co.paa"};
    };

    // light 
    class LAMBS_H_HelmetB_light : H_HelmetB_light {
        author = "nopryl.no";
        displayName = "Light Combat Helmet (M98)";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\Helmet_m98.paa"};    
    };
    class LAMBS_H_HelmetB_light_brn : H_HelmetB_light {
        author = "nopryl.no";
        displayName = "Light Combat Helmet (Brown)";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\Helmet_base.paa"};    
    };    
    class LAMBS_H_HelmetB_light_snow : H_HelmetB_light {
        author = "nopryl.no";
        displayName = "Light Combat Helmet (Snow)";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\Helmet_snow.paa"};    
    };   
    
    // spec ops 
    class LAMBS_H_HelmetSpecB : H_HelmetSpecB {
        author = "nopryl.no";
        displayName = "Enhanced Combat Helmet (M98)";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\Helmet_M98.paa"};
    };
    class LAMBS_H_HelmetSpecB_brn : H_HelmetSpecB {
        author = "nopryl.no";
        displayName = "Enhanced Combat Helmet (Brown)";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\Helmet_base.paa"};
    };
    class LAMBS_H_HelmetSpecB_gry : H_HelmetSpecB {
        author = "nopryl.no";
        displayName = "Enhanced Combat Helmet (Grey)";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\Helmet_grey.paa"};
    };    
    class LAMBS_H_HelmetSpecB_snow : H_HelmetSpecB {
        author = "nopryl.no";
        displayName = "Enhanced Combat Helmet (Snow)";
        hiddenSelectionsTextures[] = {"\headgear\data\texture\Helmet_snow.paa"};
    };     
};