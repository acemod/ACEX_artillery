class CfgCloudlets
{
	class Default;
	class ACE_ArtyTrail: Default
	{
		interval = "0.0003 * (speedSize interpolate [70,70.0001,-1,1])";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 16;
		particleFSLoop = 0;
		angleVar = 360;
		ignoreWind = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.25;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.274;
		volume = 1;
		rubbing = 0.18;
		size[] = {0.12,0.05,0.0.05,0};
		sizeCoef = 1;
		color[] = {{1,1,1,0.02},{1,1,1,0.04},{1,1,1,0.02},{1,1,1,0}};
		colorCoef[] = {1,1,1,"(speedSize interpolate [38,85,0,1]) * ((distToSurface*distToSurface) interpolate [400,40000,1.2,0.5])"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 0.01;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		position[] = {"0","0","-0.40"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};


class Arty_Trails {
	class WingTrail1 {
		simulation = "particles";
		type = "ACE_ArtyTrail";
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