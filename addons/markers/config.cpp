class CfgPatches
{
  class lambs_markers {
    units[] = {};
    weapons[] = {};
    requiredVersion = 1.82;
    requiredAddons[] = {};
    version = "1.0"; 
    versionStr = "1.0";
    author = "Alex2k";
    authorUrl = "http://www.nopryl.no";
  };
};

class CfgMarkerClasses {
	class LAMBS {
		displayName = "LAMBS";
	};
};

class CfgMarkers {
	// template
	class LAMBS_TEMPLATE {
	name = "LAMBS temp";
	icon = "\markers\data\markers\lambs_fox_6.paa";
	shadow = false;
	scope = 0;
	color[]= {0,0.3,0.6,1};
	size = 55;
	markerClass = "LAMBS";
	};

	class LAMBS_FOX_6 : LAMBS_TEMPLATE {
	name = "LAMBS FOX Platoon HQ";
	icon = "\markers\data\markers\lambs_fox_6.paa";
	size = 55;
	};

	class LAMBS_FOX_1 : LAMBS_TEMPLATE {
	name = "LAMBS FOX Platoon, 1st Squad";
	icon = "\markers\data\markers\lambs_fox_1.paa";
	size = 55;
	};

	class LAMBS_FOX_2 : LAMBS_TEMPLATE {
	name = "LAMBS FOX Platoon, 2nd Squad";
	icon = "\markers\data\markers\lambs_fox_2.paa";
	size = 55;
	};

	class LAMBS_FOX_3 : LAMBS_TEMPLATE {
	name = "LAMBS FOX Platoon, 3rd Squad";
	icon = "\markers\data\markers\lambs_fox_3.paa";
	size = 55;
	};

	class LAMBS_FOX_4 : LAMBS_TEMPLATE {
	name = "LAMBS FOX Platoon, 4th Squad";
	icon = "\markers\data\markers\lambs_fox_4.paa";
	size = 55;
	};

	class LAMBS_WOLF_6 : LAMBS_TEMPLATE {
	name = "LAMBS WOLF Platoon HQ";
	icon = "\markers\data\markers\lambs_WOLF_6.paa";
	size = 55;
	};

	class LAMBS_WOLF_1 : LAMBS_TEMPLATE {
	name = "LAMBS WOLF Platoon, 1st Squad";
	icon = "\markers\data\markers\lambs_WOLF_1.paa";
	size = 55;
	};

	class LAMBS_WOLF_2 : LAMBS_TEMPLATE {
	name = "LAMBS WOLF Platoon, 2nd Squad";
	icon = "\markers\data\markers\lambs_WOLF_2.paa";
	size = 55;
	};

	class LAMBS_WOLF_3 : LAMBS_TEMPLATE {
	name = "LAMBS WOLF Platoon, 3rd Squad";
	icon = "\markers\data\markers\lambs_WOLF_3.paa";
	size = 55;
	};

	class LAMBS_WOLF_4 : LAMBS_TEMPLATE {
	name = "LAMBS WOLF Platoon, 4th Squad";
	icon = "\markers\data\markers\lambs_WOLF_4.paa";
	size = 55;
	};

	class LAMBS_Mortar : LAMBS_TEMPLATE {
	name = "LAMBS Mortar";
	icon = "\markers\data\markers\lambs_mortar.paa";
	size = 50;
	};

	class LAMBS_Machinegun : LAMBS_TEMPLATE {
	name = "LAMBS Machinegun";
	icon = "\markers\data\markers\lambs_machinegun.paa";
	size = 50;
	};

	class LAMBS_Medical : LAMBS_TEMPLATE {
	name = "LAMBS Medical";
	icon = "\markers\data\markers\lambs_medical.paa";
	size = 50;
	};

	class LAMBS_Antitank : LAMBS_TEMPLATE {
	name = "LAMBS Antitank";
	icon = "\markers\data\markers\lambs_antitank.paa";
	size = 50;
	};

	class LAMBS_HELI : LAMBS_TEMPLATE  {
	name = "LAMBS Helicopter";
	icon = "\markers\data\markers\lambs_heli.paa";
	size = 55;
	};

	class LAMBS_PLANE : LAMBS_TEMPLATE {
	name = "LAMBS Plane";
	icon = "\markers\data\markers\lambs_plane.paa";
	size = 55;
	};

	class LAMBS_ARMOR_SWORD_1 : LAMBS_TEMPLATE {
	name = "LAMBS Sword 1";
	icon = "\markers\data\markers\lambs_armor_sword_1.paa";
	size = 55;
	};

	class LAMBS_ARMOR_SWORD_2 : LAMBS_TEMPLATE {
	name = "LAMBS Sword 2";
	icon = "\markers\data\markers\lambs_armor_sword_2.paa";
	size = 55;
	};

	class LAMBS_ARMOR_SWORD_3 : LAMBS_TEMPLATE {
	name = "LAMBS Sword 3";
	icon = "\markers\data\markers\lambs_armor_sword_3.paa";
	size = 55;
	};

	class LAMBS_ARMOR_SWORD_4 : LAMBS_TEMPLATE {
	name = "LAMBS Sword 4";
	icon = "\markers\data\markers\lambs_armor_sword_4.paa";
	size = 55;
	};

	class LAMBS_ARMOR_DAGGER_1 : LAMBS_TEMPLATE {
	name = "LAMBS Dagger 1";
	icon = "\markers\data\markers\lambs_armor_dagger_1.paa";
	size = 55;
	};

	class LAMBS_ARMOR_DAGGER_2 : LAMBS_TEMPLATE {
	name = "LAMBS Dagger 2";
	icon = "\markers\data\markers\lambs_armor_dagger_2.paa";
	size = 55;
	};

	class LAMBS_ARMOR_DAGGER_3 : LAMBS_TEMPLATE {
	name = "LAMBS Dagger 3";
	icon = "\markers\data\markers\lambs_armor_dagger_3.paa";
	size = 55;
	};

	class LAMBS_ARMOR_DAGGER_4 : LAMBS_TEMPLATE {
	name = "LAMBS Dagger 4";
	icon = "\markers\data\markers\lambs_armor_dagger_4.paa";
	size = 55;
	};

	class LAMBS_ARMOR_HAMMER_1 : LAMBS_TEMPLATE {
	name = "LAMBS Hammer 1";
	icon = "\markers\data\markers\lambs_armor_hammer_1.paa";
	size = 55;
	};

	class LAMBS_ARMOR_HAMMER_2 : LAMBS_TEMPLATE {
	name = "LAMBS Hammer 2";
	icon = "\markers\data\markers\lambs_armor_hammer_2.paa";
	size = 55;
	};

	class LAMBS_ARMOR_HAMMER_3 : LAMBS_TEMPLATE {
	name = "LAMBS Hammer 3";
	icon = "\markers\data\markers\lambs_armor_hammer_3.paa";
	size = 55;
	};

	class LAMBS_ARMOR_HAMMER_4 : LAMBS_TEMPLATE {
	name = "LAMBS Hammer 4";
	icon = "\markers\data\markers\lambs_armor_hammer_4.paa";
	size = 55;
	};
};