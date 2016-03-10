class CfgVehicles {
	class All;
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class Arty_Optic_Base: LandVehicle
	{
		scope = 1;
		epeImpulseDamageCoef = 8.0;
		vehicleClass = "Static";
		driverOpticsModel = "\A3\weapons_f\reticle\optics_empty";
		selectionClan = "clan";
		selectionDashboard = "podsvit pristroju";
		selectionShowDamage = "poskozeni";
		selectionBackLights = "light_back";
		bounding = "usti hlavne";
		alphaTracks = 0.7;
		textureTrackWheel = 0;
		selectionLeftOffset = "";
		selectionRightOffset = "";
		memoryPointTrack1L = "";
		memoryPointTrack1R = "";
		memoryPointTrack2L = "";
		memoryPointTrack2R = "";
		tracksSpeed = 1;
		unitInfoType = "RscUnitInfoSoldier";
		waterLeakiness = 100;
		selectionFireAnim = "";
		fireDustEffect = "FDustEffects";
		class DestructionEffects{};
		memoryPointMissile[] = {"spice rakety","usti hlavne"};
		memoryPointMissileDir[] = {"konec rakety","konec hlavne"};
		memoryPointCargoLight = "cargo light";
		gunnerCanSee = "2+8+32+4";
		gunnerHasFlares = 0;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				selectionFireAnim = "";
				memoryPointsGetInGunner = "pos_gunner_dir";
				memoryPointsGetInGunnerDir = "pos_gunner";
				memoryPointGun = "usti hlavne";
				outGunnerMayFire = 1;
				optics = 1;
				minTurn = -40;
				maxTurn = 40;
				initTurn = 0;
				minElev = -7;
				maxElev = 70;
				initElev = 0;
				castGunnerShadow = 1;
				ejectDeadGunner = 0;
				canEject = 0;
				gunnerGetInAction = "";
				gunnerGetOutAction = "";
				gunnerForceOptics = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
				};
				class HitPoints
				{
					class HitGun
					{
						armor = 0.3;
						material = -1;
						name = "action";
						visual = "autonomous_unhide";
						passThrough = 0;
						radius = 0.2;
					};
					class HitTurret: HitGun
					{
						armor = 0.3;
						class DestructionEffects
						{
							class Smoke
							{
								simulation = "particles";
								type = "WeaponWreckSmoke";
								position = "destructionEffect";
								intensity = 1;
								interval = 1;
								lifeTime = 5;
							};
						};
					};
				};
			};
		};
		damperSize = 1.4;
		damperForce = 0.8;
		gearBox[] = {-1,0,1};
		attenuationEffectType = "OpenCarAttenuation";
		soundEnviron[] = {"",1.0,0.7};
		soundEngine[] = {"",10.0,1};
		soundCrash[] = {"",0.56234133,1};
		soundGear[] = {"",0.00031622776,1};
		soundDammage[] = {"",0.01,1};
		getInAction = "";
		getOutAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		mapSize = 2.55;
		getInRadius = 3.5;
		secondaryExplosion = -1;
		fuelExplosionPower = 0;
		fuelCapacity = 0;
		irScanRangeMin = 500;
		irScanRangeMax = 4000;
		irScanToEyeFactor = 1;
		irTarget = 0;
		laserTarget = 0;
		armor = 24;
		armorStructural = 1;
		explosionShielding = 1;
		minTotalDamageThreshold = 0.01;
		crewCrashProtection = 1;
		crewExplosionProtection = 0;
		class HitPoints
		{
			class HitEngine
			{
				armor = 0.8;
				material = -1;
				name = "motor";
				passThrough = 1;
			};
			class HitHull
			{
				armor = 1;
				material = -1;
				name = "telo";
				passThrough = 1;
			};
			class HitTurret
			{
				armor = 0.8;
				material = -1;
				name = "vez";
				passThrough = 1;
			};
			class HitGun
			{
				armor = 0.6;
				material = -1;
				name = "zbran";
				passThrough = 1;
			};
			class HitLTrack
			{
				armor = 0.6;
				material = -1;
				name = "pas_L";
				passThrough = 1;
			};
			class HitRTrack
			{
				armor = 0.6;
				material = -1;
				name = "pas_P";
				passThrough = 1;
			};
			class HitBody
			{
				armor = 1;
				material = -1;
				name = "NEzbytek";
				visual = "zbytek";
				passThrough = 1;
			};
		};
		extCameraPosition[] = {0,1.5,-9};
		class ViewPilot: ViewPilot
		{
			initAngleX = 7;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};
		cost = 10000;
		steerAheadSimul = 0.4;
		steerAheadPlan = 0.6;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.8;
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		hasDriver = 0;
		nightVision = 0;
		driverAction = "ManActCargo";
		driverInAction = "ManActCargo";
		memoryPointsGetInCargo = "pos_cargo";
		memoryPointsGetInCargoDir = "pos_cargo_dir";
		simulation = "tankX";
		occludeSoundsWhenIn = 1.0;
		obstructSoundsWhenIn = 1.0;
		formationX = 20;
		formationZ = 30;
		precision = 1;
		brakeDistance = 0;
		turnCoef = 0;
		maxSpeed = 0;
		canFloat = 0;
		weapons[] = {"FakeWeapon"};
		magazines[] = {"FakeWeapon"};
		type = 1;
		threat[] = {0.7,1,0.3};
		camouflage = 1;
		audible = 1;
		sensitivity = 3;
		sensitivityEar = 0.5;
		hideProxyInCombat = 0;
		driverOpticsColor[] = {0,0,0,1};
		class CargoLight
		{
			color[] = {0,0,0,0};
			ambient[] = {0.6,0,0.15,1};
			brightness = 0.007;
		};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		class Reflectors{};
		numberPhysicalWheels = 0;
	};
	
	class ACE_Arty_M171_M17_M137: Arty_Optic_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Gunner 1 Optics";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(optics_left.p3d);
		vehicleClass = "ACE_Arty_System";
	};	
	class ACE_Arty_M172_M18_M138: Arty_Optic_Base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Gunner 2 Optics";
		author = ECSTRING(common,ACETeam);
		model=PATHTOF(optics_right.p3d);
		vehicleClass = "ACE_Arty_System";
	};
};
