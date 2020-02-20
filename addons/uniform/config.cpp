class CfgPatches {
  class lambs_uniform {
    units[] = {
        "LAMBS_Soldier_F",
        "LAMBS_Scout_F",
        "LAMBS_Ranger_F",
        "LAMBS_SoldierD_F",
        "LAMBS_ScoutD_F",
        "LAMBS_SoldierMC_F",
        "LAMBS_RunnerMC_F",
        "LAMBS_ScoutMC_F",
        "LAMBS_SoldierS_F",
        "LAMBS_ScoutS_F",        
        "LAMBS_Sniper_F",
        "LAMBS_B_Helipilot_F"
    };
    weapons[] = {
        "LAMBS_U_CombatUniform",
        "LAMBS_U_CombatUniform_shortsleeve",
        "LAMBS_U_CombatUniform_ranger",
        "LAMBS_U_CombatUniformD",
        "LAMBS_U_CombatUniformD_shortsleeve",
        "LAMBS_U_CombatUniformMC",
        "LAMBS_U_CombatUniformMC_tshirt",
        "LAMBS_U_CombatUniformMC_shortsleeve",
        "LAMBS_U_CombatUniformSNOW",
        "LAMBS_U_CombatUniformSNOW_shortsleeve",
        "LAMBS_U_CombatUniformBlack",
        "LAMBS_U_CombatUniformBlack_full",
        "LAMBS_U_GhillieSuit",
        "LAMBS_B_HeliPilotCoveralls"
    };
    requiredVersion = 1.82;
    requiredAddons[] = {
        "A3_Characters_F_Beta",
        "A3_Characters_F",
        "A3_Characters_F_BLUFOR"
    };
    version = "1.31"; 
    versionStr = "1.31";
    author = "nopryl.no";
    authorUrl = "http://www.nopryl.no";
  };
};

class cfgVehicles {
    class B_soldier_F;
    class I_Sniper_F;
    class B_Helipilot_F; 
    // Woodland M98 
    class LAMBS_Soldier_F : B_soldier_F {
        scope = 1; 
        author = "nopryl.no";
        side = 1; 
        displayName = "Rifleman [M98]";
        uniformClass ="LAMBS_U_CombatUniform";
        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	    hiddenSelections[] = {
			"Camo",
            "insignia"
		};
		hiddenSelectionsTextures[] = {
			"\uniform\data\texture\uniform_m98.paa"
		};        
    };
    class LAMBS_Scout_F : LAMBS_Soldier_F {
        displayName = "Rifleman [M98] (Rolled-up)";
        uniformClass ="LAMBS_U_CombatUniform_shortsleeve";
        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
    };
    class LAMBS_Ranger_F : LAMBS_Scout_F {
        displayName = "Rifleman [M98] (Ranger)";
		hiddenSelectionsTextures[] = {
			"\uniform\data\texture\uniform_m98_ranger.paa"
		};                
    };    
    // Desert M03 
    class LAMBS_SoldierD_F : LAMBS_Soldier_F {
        displayName = "Rifleman [M03]";
        uniformClass ="LAMBS_U_CombatUniformD";
	    hiddenSelections[] = {
			"Camo",
            "insignia"
		};
		hiddenSelectionsTextures[] = {
			"\uniform\data\texture\uniform_m03.paa"
		};        
    };
    class LAMBS_ScoutD_F : LAMBS_SoldierD_F {
        displayName = "Rifleman [M03] (Rolled-up)";
        uniformClass ="LAMBS_U_CombatUniformD_shortsleeve";
        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
    };
    // Multicam
    class LAMBS_SoldierMC_F : LAMBS_Soldier_F {
        displayName = "Rifleman [Multicam]";
        uniformClass ="LAMBS_U_CombatUniformMC";
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        
	    hiddenSelections[] = {
			"Camo",
            "insignia"
		};
		hiddenSelectionsTextures[] = {
			"\uniform\data\texture\uniform_mc.paa"
		};        
    };
    class LAMBS_RunnerMC_F : LAMBS_SoldierMC_F {
        displayName = "Rifleman [Multicam] (T-shirt)";
        uniformClass ="LAMBS_U_CombatUniformMC_tshirt";
        model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
    };      
    class LAMBS_ScoutMC_F : LAMBS_SoldierMC_F {
        displayName = "Rifleman [Multicam] (Rolled-up)";
        uniformClass ="LAMBS_U_CombatUniformMC_shortsleeve";
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    };  
    // Snow
    class LAMBS_SoldierS_F : LAMBS_Soldier_F {
        displayName = "Rifleman [Snow]";
        uniformClass ="LAMBS_U_CombatUniformSNOW";
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        //model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
        
	    hiddenSelections[] = {
			"Camo",
            "insignia"
		};
		hiddenSelectionsTextures[] = {
			"\uniform\data\texture\uniform_snow.paa"
		};        
    };
    class LAMBS_ScoutS_F : LAMBS_SoldierS_F {
        displayName = "Rifleman [Snow] (Rolled-up)";
        uniformClass ="LAMBS_U_CombatUniformSNOW_shortsleeve";
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    };
    // Black
    class LAMBS_SoldierB_F : LAMBS_Soldier_F {
        displayName = "Rifleman [Black]";
        uniformClass ="LAMBS_U_CombatUniformBlack";
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        //model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
        
	    hiddenSelections[] = {
			"Camo",
            "insignia"
		};
		hiddenSelectionsTextures[] = {
			"\uniform\data\texture\uniform_black.paa"
		};        
    };
    class LAMBS_ScoutB_F : LAMBS_SoldierB_F {
        displayName = "Rifleman [Black] (Thermal Suit)";
        uniformClass ="LAMBS_U_CombatUniformBlack_full";
        model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
    };

    // Ghillie suit 
    class LAMBS_Sniper_F : I_Sniper_F {
        scope = 1; 
        author = "nopryl.no";
        side = 1; 
        displayName = "Sniper [M98]";
        uniformClass = "LAMBS_U_GhillieSuit";
	    hiddenSelections[] = {
			"Camo",
            "insignia"
		};
		hiddenSelectionsTextures[] = {
			"\uniform\data\texture\uniform_m98.paa"
		};       
    };

    // Pilot 
    class LAMBS_B_Helipilot_F : B_Helipilot_F {
        scope = 1; 
        author = "nopryl.no";
        side = 1; 
        displayName = "Helicopter Pilot [M98]";
        uniformClass = "LAMBS_B_HeliPilotCoveralls";
        //model = "\A3\Characters_F\Common\coveralls.p3d";
        hiddenSelections[] = {
            "Camo",
            "insignia"
        };
        hiddenSelectionsTextures[] = {
            "\uniform\data\texture\coverall_m98.paa"
        };           
    };
};

class cfgWeapons {
    class U_I_CombatUniform;
    class U_I_CombatUniform_shortsleeve;
    class U_I_GhillieSuit;
    class U_B_HeliPilotCoveralls;
    class U_B_CTRG_1; 
    class U_B_CTRG_2;
    class U_B_CTRG_3;
    class UniformItem; 

    // Woodland M98 
    class LAMBS_U_CombatUniform : U_I_CombatUniform {
        author = "nopryl.no";
        displayName = "Combat Fatigues [M98]";
        class ItemInfo : UniformItem {
            uniformModel = "-";
			uniformClass = "LAMBS_Soldier_F";
			containerClass = "Supply40";
			mass = 40;
		};
    };
    class LAMBS_U_CombatUniform_shortsleeve : U_I_CombatUniform_shortsleeve {
        author = "nopryl.no";
        displayName = "Combat Fatigues [M98] (Rolled-up)";
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "LAMBS_Scout_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class LAMBS_U_CombatUniform_ranger : U_I_CombatUniform_shortsleeve {
        author = "nopryl.no";
        displayName = "Combat Fatigues [M98] (Ranger)";
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "LAMBS_Ranger_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // Desert M98
    class LAMBS_U_CombatUniformD : U_I_CombatUniform {
        author = "nopryl.no";
        displayName = "Combat Fatigues [M03]";
        class ItemInfo : UniformItem {
            uniformModel = "-";
			uniformClass = "LAMBS_SoldierD_F";
			containerClass = "Supply40";
			mass = 40;
		};
    }; 
    class LAMBS_U_CombatUniformD_shortsleeve : U_I_CombatUniform_shortsleeve {
        author = "nopryl.no";
        displayName = "Combat Fatigues [M03] (Rolled-up)";
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "LAMBS_ScoutD_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // Multicam
    class LAMBS_U_CombatUniformMC : U_B_CTRG_1 {
        author = "nopryl.no";
        displayName = "Combat Fatigues [Multicam]";
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "LAMBS_SoldierMC_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class LAMBS_U_CombatUniformMC_tshirt : U_B_CTRG_2 {
        author = "nopryl.no";
        displayName = "Combat Fatigues [Multicam] (T-shirt)";
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "LAMBS_RunnerMC_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };    
    class LAMBS_U_CombatUniformMC_shortsleeve : U_B_CTRG_3 {
        author = "nopryl.no";
        displayName = "Combat Fatigues [Multicam] (Rolled-up)";
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "LAMBS_ScoutMC_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // Snow
    class LAMBS_U_CombatUniformSNOW : U_B_CTRG_1 {
        author = "nopryl.no";
        displayName = "Combat Fatigues [Snow]";
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "LAMBS_SoldierS_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class LAMBS_U_CombatUniformSNOW_shortsleeve : U_B_CTRG_3 {
        author = "nopryl.no";
        displayName = "Combat Fatigues [Snow] (Rolled-up)";
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "LAMBS_ScoutS_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // black 
    class LAMBS_U_CombatUniformB : U_B_CTRG_1 {
        author = "nopryl.no";
        displayName = "Combat Fatigues [Black]";
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "LAMBS_SoldierB_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class LAMBS_U_CombatUniformB_full : U_B_CTRG_3 {
        author = "nopryl.no";
        displayName = "Combat Fatigues [Black] (Thermal Suit)";
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "LAMBS_ScoutB_F";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    // ghillie 
    class LAMBS_U_GhillieSuit : U_I_GhillieSuit {
        author = "nopryl.no";
        displayName = "Ghillie Suit [M98]";
        class ItemInfo : UniformItem {
            uniformModel = "-";
			uniformClass = "LAMBS_sniper_F";
            containerClass = "Supply60";
            mass = 60;
		};
    };
    // pilot
    class LAMBS_B_HeliPilotCoveralls : U_B_HeliPilotCoveralls {
        author = "nopryl.no";
        displayName = "Heli Pilot Coveralls [M98]";
        class ItemInfo : UniformItem {
            uniformModel = "-";
			uniformClass = "LAMBS_B_Helipilot_F";
            containerClass = "Supply40";
            mass = 60;
		};
    };        
};