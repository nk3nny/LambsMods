class CfgPatches {
    class lambs_effects {
    units[] = {};
    weapons[] = {};
    requiredVersion = 1.82;
    requiredAddons[] = {
        "A3_Characters_F",
        "A3_Sounds_F",
        "A3_Data_F_ParticleEffects",
        "CBA_Extended_EventHandlers"
    };
    version = "1.2"; 
    versionStr = "1.2";
    author = "nopryl.no";
    authorUrl = "http://www.nopryl.no";
    };
}; 
#include "cfgSounds.hpp"
#include "cfgFunctions.hpp"
#include "cfgCloudlets.hpp"
#include "cfgLights.hpp"
#include "cfgImpacts.hpp"

class Extended_Killed_Eventhandlers {
    class CAManBase {
        class LAMBS_CAManBase_Killed {
            killed = "_this spawn lambs_effects_fnc_killed";
        };
    };
};

class Extended_PreInit_EventHandlers {
    lambs_PreInit = "call compile preprocessFileLineNumbers 'effects\init.sqf'";
};

