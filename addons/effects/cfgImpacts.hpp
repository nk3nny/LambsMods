// blood
class ImpactEffectsBlood {
    class BloodMist {
        simulation = "particles";
        type = "BloodMist";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        MoveVelocityVar[] = {0,0,0};
    };
    class LAMBS_Blood {
        simulation = "particles";
        type = "LAMBS_Blood";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    }; 
    class Blood {
        simulation = "particles";
        type = "Blood";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.2;
        MoveVelocityVar[] = {2,2,2};	// <-- this is new 
    };
    class Blood1 {
        simulation = "particles";
        type = "Blood1";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.65;
    };
    class Blood2 {
        simulation = "particles";
        type = "Blood2";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.4;
    };
    class Blood3 {
        simulation = "particles";
        type = "Blood3";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.4;
    };
    class BloodUnderwater1 {
        simulation = "particles";
        type = "BloodUnderwater1";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.4;
    };
};

// Metal
class ImpactMetal {
    class LightExp {
        position[] = {0,0,0};
        simulation = "light";
        type = "Goko_bulletexplo2";
        intensity = 1;
        interval = 1;
        lifeTime = 1;
    };
    class Starter_SparksBurstLow {
        simulation = "particles";
        type = "gokoFX_Starter_SparksBurstLOW";
        position[] = {0,0,0};
        intensity = 1;
        interval = 0.1;
        lifeTime = 0.4;
        randomDirectionPeriodVar = 1;
        randomDirectionIntensityVar = 1;
    };
    class Starter_SparksBurstMed {
        simulation = "particles";
        type = "gokoFX_Starter_SparksBurstMed";
        position[] = {0,0,0};
        intensity = 1;
        interval = 0.1;
        lifeTime = 0.6;
        randomDirectionPeriodVar = 1;
        randomDirectionIntensityVar = 1;
        quality = 1;
    };
    class SparksOmni {
        simulation = "particles";
        type = "gokoFX_Starter_SparksOmni";
        position[] = {0,0,0};
        intensity = 1;
        interval = 10;
        randomDirectionPeriodVar = 0.5;
        randomDirectionIntensityVar = 2;
        qualityLevel = 2;
        lifeTime = 1;
    };
    class SparksDrop2 {
        simulation = "particles";
        type = "gokoFX_Starter_SparksDrop2";
        position[] = {0,0,0};
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        qualityLevel = 2;
    };
    class SparksDrop {
        simulation = "particles";
        type = "gokoFX_Starter_SparksDrop";
        position[] = {0,0,0};
        intensity = 1;
        interval = 11;
        lifeTime = 1.5;
        qualityLevel = 2;
    };
};

// Ground (Small arms)
class ImpactEffectsSmall {
    class ImpactConcrete {
        intensity = 2;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactConcrete";
    };
    class ImpactConcreteMed {
        intensity = 2;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 1;
        simulation = "particles";
        type = "ImpactConcrete";
    };
    class ImpactDust1 {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactDust2";
    };
    class ImpactDust1Low {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 0;
        simulation = "particles";
        type = "ImpactDust2Low";
    };
    class ImpactDust1Med {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 1;
        simulation = "particles";
        type = "ImpactDust2";
    };
    class ImpactDustWater1 {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        simulation = "particles";
        type = "ImpactDustWater2";
    };
    class ImpactEffectsSmall06 {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        simulation = "particles";
        type = "LAMBS_ImpactSandSmoke2";
    };
}; 


// Tyre
class ImpactTyre {
    class ImpactDust {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        simulation = "particles";
        type = "ImpactSmoke";
    };
    class LAMBS_ImpactHigh {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        simulation = "particles";
        qualityLevel = 2;
        type = "LaptopSmoke";
    };
};

// concrete 
class ImpactConcrete {
    class ImpactDust {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        simulation = "particles";
        type = "ImpactDustConcrete";
    };
    class ImpactDust2 {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        simulation = "particles";
        type = "ImpactDustConcrete2";
    };
    class LAMBS_ImpactConcrete {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        //qualityLevel = 2;
        simulation = "particles";
        type = "LAMBS_ImpactConcrete";
    };
};

// Walls! 
class ImpactPlaster {
    class ImpactConcreteWall01 {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactConcreteWall1";
    }; 
    class ImpactConcreteWall02 {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactConcreteWall2";
    }; 
    class ImpactConcreteWall02Med {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 1;
        simulation = "particles";
        type = "ImpactConcreteWall2";
    };
    class ImpactConcreteWall03 {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactConcreteWall3";
    };
    class ImpactConcreteWall03Med {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactConcreteWall3";
    };
    class ImpactDust1 {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 2;
        simulation = "particles";
        type = "ImpactDustPlaster";
    };
    class ImpactDust1Low {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 0;
        simulation = "particles";
        type = "ImpactDustPlasterLow";
    };
    class ImpactDust1Med {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        qualityLevel = 1;
        simulation = "particles";
        type = "ImpactDustPlaster";
    };
    class LAMBS_ImpactConcrete {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        //qualityLevel = 2;
        simulation = "particles";
        type = "LAMBS_ImpactConcrete";
    };
}; 