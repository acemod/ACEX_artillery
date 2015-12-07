class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {
	class CannonCore;
	class ACE_155_Howitzer_M198: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_mortar_120mm_AMOS0";
		nameSound = "cannon";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
			soundBegin[] = {"begin1",1};
		};
		reloadSound[] = {"A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2",31.622776,1,15};
		minRange = 10;
		minRangeProbab = 0.7;
		midRange = 1800;
		midRangeProbab = 0.7;
		maxRange = 3000;
		maxRangeProbab = 0.1;
		reloadTime = 6;
		magazineReloadTime = 7;
		autoReload = 0;
		canLock = 0;
		magazines[] = {"32Rnd_155mm_Mo_shells","6Rnd_155mm_Mo_smoke","2Rnd_155mm_Mo_guided","2Rnd_155mm_Mo_LG","6Rnd_155mm_Mo_mine","2Rnd_155mm_Mo_Cluster","6Rnd_155mm_Mo_AT_mine"};
		modes[] = {"Single1","Single2","Single3","Single4","Single5","Burst1","Burst2","Burst3","Burst4","Burst5"};
		class GunParticles
		{
			class Effect1
			{
				effectName = "ArtilleryFired1";
				positionName = "Usti hlavne3";
				directionName = "Konec hlavne3";
			};
			class Effect2
			{
				effectName = "ArtilleryFiredL";
				positionName = "particle_pos";
				directionName = "particle_dir_l";
			};
			class Effect3
			{
				effectName = "ArtilleryFiredR";
				positionName = "particle_pos";
				directionName = "particle_dir_r";
			};
		};
		class Single1: Mode_SemiAuto
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single10";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"A3\sounds_f\dummysound",1.0,1,20};
			reloadTime = 8;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 3.2;
			artilleryCharge = 0.19;
		};
		class Single2: Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single20";
			artilleryCharge = 0.3;
		};
		class Single3: Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single30";
			artilleryCharge = 0.48;
		};
		class Single4: Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single40";
			artilleryCharge = 0.8;
		};
		class Single5: Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single50";
			artilleryCharge = 1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst10";
			burst = 6;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"A3\sounds_f\dummysound",1.0,1,20};
			soundBurst = 0;
			reloadTime = 6;
			minRange = 800;
			minRangeProbab = 0.5;
			midRange = 1500;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.5;
			artilleryDispersion = 5.3;
			artilleryCharge = 0.19;
		};
		class Burst2: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst20";
			minRange = 2000;
			minRangeProbab = 0.4;
			midRange = 3000;
			midRangeProbab = 0.6;
			maxRange = 5200;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.3;
		};
		class Burst3: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst30";
			minRange = 5200;
			minRangeProbab = 0.3;
			midRange = 8000;
			midRangeProbab = 0.4;
			maxRange = 13300;
			maxRangeProbab = 0.3;
			artilleryCharge = 0.48;
		};
		class Burst4: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst40";
			minRange = 14600;
			minRangeProbab = 0.2;
			midRange = 25000;
			midRangeProbab = 0.3;
			maxRange = 37000;
			maxRangeProbab = 0.2;
			artilleryCharge = 0.8;
		};
		class Burst5: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst50";
			minRange = 25000;
			minRangeProbab = 0.1;
			midRange = 40000;
			midRangeProbab = 0.2;
			maxRange = 58000;
			maxRangeProbab = 0.1;
			artilleryCharge = 1;
		};
	};
};
