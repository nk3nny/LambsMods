class CfgPatches {
  class lambs_mortar {
    units[] = {
		//"LAMBS_Mortar_01_F",
		//"LAMBS_Mortar_01_weapon_F",
		//"LAMBS_Mortar_01_support_F"
	};
    weapons[] = {
		"LAMBS_mortar_82mm"
	};
    requiredVersion = 1.82;
    requiredAddons[] = {
		"A3_Static_F_Mortar_01",
		"A3_Weapons_F_Exp",
		"A3_Weapons_F"
		//"A3_Static_F_Mortar_01"
	};
    version = "1.2"; 
    versionStr = "1.2";
    author = "nopryl.no";
    authorUrl = "http://www.nopryl.no";
  };
};

/*
class CfgVehicles {
	// Mortar 
	class LandVehicle; 
	class StaticWeapon: LandVehicle {
		class Turrets {
			class MainTurret;
		};
	};
	class StaticMortar: StaticWeapon {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class ViewOptics;
			};
		};
	};
	class Mortar_01_base_F: StaticMortar {};
	class O_G_Mortar_01_F : Mortar_01_base_F {}; 
	class LAMBS_Mortar_01_F : O_G_Mortar_01_F {
		author = "nopryl.no";
		displayname = "Mk6 Mortar [High Dispersion]";
		class assembleInfo {
			assembleTo = "";
			base = "";
			displayName = "";
			dissasembleTo[] = {"LAMBS_Mortar_01_weapon_F","LAMBS_Mortar_01_support_F"};
			primary = 0;
		}; 
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[] = {"LAMBS_mortar_82mm"};
				magazines[] = {"LAMBS_8Rnd_82mm_Mo_shells","LAMBS_8Rnd_82mm_Mo_shells","LAMBS_8Rnd_82mm_Mo_shells","LAMBS_8Rnd_82mm_Mo_shells","LAMBS_8Rnd_82mm_Mo_shells"};
			}; 
		}; 
	}; 
	// mortar Backpacks 
	class I_Mortar_01_weapon_F;
	class I_Mortar_01_support_F; 
	class LAMBS_Mortar_01_weapon_F : I_Mortar_01_weapon_F {
		author = "nopryl.no";
		displayName = "Folded Mk6 Mortar Tube [High Dispersion]";
		class assembleInfo {
			assembleTo = "LAMBS_Mortar_01_F";
			base[] = {"B_Mortar_01_support_F","O_Mortar_01_support_F","I_Mortar_01_support_F","I_E_Mortar_01_support_F","B_Mortar_01_support_grn_F","LAMBS_Mortar_01_support_F"};
			displayName = "Mk6 Mortar";
			dissasembleTo[] = {};
			primary = 1;
		}; 	
	}; 
	class LAMBS_Mortar_01_support_F : I_Mortar_01_support_F {
		author = "nopryl.no";
		displayName = "Folded Mk6 Mortar Bipod [High Dispersion]";
	}; 
};
*/
class CfgWeapons {
	class CannonCore; 
	class mortar_82mm : CannonCore {
		magazines[] += {"LAMBS_8Rnd_82mm_Mo_shells"};
	};	
	class LAMBS_mortar_82mm: mortar_82mm {
    	aiDispersionCoefX = 75;
    	aiDispersionCoefY = 75;
  };
};

class CfgAmmo {
	class Sh_82mm_AMOS;
	class LAMBS_82mm_AMOS: Sh_82mm_AMOS {
		hit = 50;
		indirectHit = 0.4;
		IndirectHitRange = 20;
	};
};

class CfgMagazines {
	class 8Rnd_82mm_Mo_shells;
	class LAMBS_8Rnd_82mm_Mo_shells: 8Rnd_82mm_Mo_shells {
		author = "nopryl.no";
		ammo = "LAMBS_82mm_AMOS";
		displayName = "HE Mortar Shells (LAMBS)";
		displayNameMFDFormat = "HE (LAMBS)";
		displayNameShort = "HE (LAMBS)";
	};
};