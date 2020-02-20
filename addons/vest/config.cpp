class CfgPatches
{
  class lambs_vest {
    units[] = {};
    weapons[] = {
        "LAMBS_V_PlateCarrier1_brn",
        "LAMBS_V_PlateCarrier2_brn"
    };
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

class cfgWeapons {
    class Vest_NoCamo_Base;
    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
		class ItemInfo;
	};
	class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
		class ItemInfo;
	};

    // carrier 1
    class LAMBS_V_PlateCarrier1_brn : V_PlateCarrier1_rgr {
        author = "nopryl.no";
        displayName = "Carrier Lite (Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\vest\data\texture\vest_brown.paa"};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
		};
    };

    // carrier 2 
    class LAMBS_V_PlateCarrier2_brn : V_PlateCarrier2_rgr {
        author = "nopryl.no";
        displayName = "Carrier Rig (Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\vest\data\texture\vest_brown.paa"};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
        }; 
    };
    // carrier 3
    class LAMBS_V_PlateCarrier3_brn : V_PlateCarrier1_rgr {
        author = "nopryl.no";
        displayName = "Carrier Alternative (Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\vest\data\texture\vest_brown_LT2.paa"};
        class ItemInfo: ItemInfo {
			hiddenSelections[]= {"camo"};
		};
    };    
};