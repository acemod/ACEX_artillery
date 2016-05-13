class CfgCloudlets
{
    class Default;
    class acex_artilleryTrail: Default {
        interval = "0.1 - 0.097 * speedSize";
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
        particleFSNtieth = 16;
        particleFSIndex = 7;
        particleFSFrameCount = 48;
        particleFSLoop = 1;
        angleVar = 1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 0.3;
        MoveVelocityVar[] = {0,0,0};
        rotationVelocity = 1;
        weight = 1.2;
        volume = 1;
        rubbing = 0.1;
        size[] = {0.25,0.5};
        sizeCoef = 1;
        color[] = {{0.06,0.06,0.06,0.26},{0.3,0.3,0.3,0.18},{0.3,0.3,0.3,0.02}};
        colorCoef[] = {1,1,1,1};
        animationSpeed[] = {2,1};
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.05;
        onTimerScript = "";
        beforeDestroyScript = "";
        blockAIVisibility = 0;
        destroyOnWaterSurface = 1;
        destroyOnWaterSurfaceOffset = -0.1;
        lifeTimeVar = 0;
        position[] = {"0","0","0"};
        positionVar[] = {0,0,0};
        rotationVelocityVar = 20;
        sizeVar = 0.05;
        colorVar[] = {0,0,0,0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
};


class Arty_Trails {
    class WingTrail1 {
        simulation = "particles";
        type = "acex_artilleryTrail";
        qualityLevel = -1;
        enabled = "speedSize interpolate [39.9999999,40,-1,1]";
    };
};

class CfgAmmo {
    class Sh_155mm_AMOS;
    class ShellBase;
    class ACE_155mm_M982: Sh_155mm_AMOS{
        cost = 3000;
        model = PATHTOF(M982_Excalibur_Fly.p3d);
        effectFly = "Arty_Trails";
    } ;
};