class CfgPatches
{
  class lambs_tank
  {
    units[] = {
        "LAMBS_MBT_03_cannon_F",
        "LAMBS_APC_tracked_03_cannon_F"
    };
    weapons[] = {};
    requiredVersion = 1.82;
    requiredAddons[] = {
        "A3_armor_F_EPB"
    };
    version = "1.2"; 
    versionStr = "1.2";
    author = "nopryl.no";
    authorUrl = "http://www.nopryl.no";
  };
};

class cfgVehicles {
    class I_MBT_03_cannon_F;
    class LAMBS_MBT_03_cannon_F : I_MBT_03_cannon_F {
        author = "nopryl.no";
        side = 1;
        crew = "B_crew_F";
        hiddenSelectionsTextures[] = {
            "\tank\data\mbt\mbt0.paa",
            "\tank\data\mbt\mbt1.paa",
            "\tank\data\mbt\mbt2.paa",
            "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
        };
        class TextureSources {
            class noprylGreen {
                author = "nopryl.no";
                displayName = "Olive Drab";
                factions[] = {"IND_F"}; //BLU_F
                textures[] = {
                        "\tank\data\mbt\mbt0.paa",
                        "\tank\data\mbt\mbt1.paa",
                        "\tank\data\mbt\mbt2.paa",
                        "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
                };
            };
            class noprylJungle {
                author = "nopryl.no";
                displayName = "Olive Drab (Forest)";
                factions[] = {"IND_F"};
                textures[] = {
                        "\tank\data\mbt\mbt0.paa",
                        "\tank\data\mbt\mbt1.paa",
                        "\tank\data\mbt\mbt2.paa",
                        "A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
                };
            };
            class noprylDesert {
                author = "nopryl.no";
                displayName = "Olive Drab (Desert)";
                factions[] = {"IND_F"};
                textures[] = {
                        "\tank\data\mbt\mbt_desert0.paa",
                        "\tank\data\mbt\mbt_desert1.paa",
                        "\tank\data\mbt\mbt_desert2.paa",
                        "A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
                };
            };
            class noprylSnow {
                author = "nopryl.no";
                displayName = "Olive Drab (Snow)";
                factions[] = {"IND_F"}; //BLU_F
                textures[] = {
                        "\tank\data\mbt\mbt_snow0.paa",
                        "\tank\data\mbt\mbt_snow1.paa",
                        "\tank\data\mbt\mbt2.paa",
                        "\tank\data\camo\camonet_snow_CO.paa"
                };
            };        
        };
    };

    class I_APC_tracked_03_cannon_F; 
    class LAMBS_APC_tracked_03_cannon_F : I_APC_tracked_03_cannon_F {
        side = 1; 
        author = "nopryl.no";
        crew = "B_crew_F";
        hiddenSelectionsTextures[] = {
            "\tank\data\apc\apc0.paa",
            "\tank\data\apc\apc1.paa",
            "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
            "A3\armor_f\data\cage_aaf_co.paa"
        };
        class TextureSources {
            class noprylGreen {
                author = "nopryl.no";
                displayName = "Olive Drab";
                factions[] = {"IND_F"};
                textures[] = {
                        "\tank\data\apc\apc0.paa",
                        "\tank\data\apc\apc1.paa",
                        "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
                        "A3\armor_f\data\cage_aaf_co.paa"
                };
            }; 
            class noprylJungle {
                author = "nopryl.no";
                displayName = "Olive Drab (Forest)";
                factions[] = {"IND_F"};
                textures[] = {
                        "\tank\data\apc\apc0.paa",
                        "\tank\data\apc\apc1.paa",
                        "A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
                        "A3\armor_f\data\cage_aaf_co.paa"
                };
            };             
            class noprylDesert {
                author = "nopryl.no";
                displayName = "Olive Drab (Desert)";
                factions[] = {"IND_F"};
                textures[] = {
                        "\tank\data\apc\apc_desert0.paa",
                        "\tank\data\apc\apc_desert1.paa",
                        "A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
                        "A3\armor_f\data\cage_aaf_co.paa"
                };
            };         
            class noprylSnow {
                author = "nopryl.no";
                displayName = "Olive Drab (Snow)";
                factions[] = {"IND_F"};
                textures[] = {
                        "\tank\data\apc\apc0.paa",
                        "\tank\data\apc\apc1.paa",
                        "\tank\data\camo\camonet_snow_CO.paa",
                        "A3\armor_f\data\cage_aaf_co.paa"
                };
            };         
        
        }; 
    };
};

