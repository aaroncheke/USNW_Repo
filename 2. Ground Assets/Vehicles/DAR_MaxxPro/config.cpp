#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

enum {
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

class DefaultEventhandlers;	// External class reference

class CfgPatches {
	class DAR_MaxxPro {
		units[] = {"DAR_MaxxPro_M2","DAR_MaxxProDXM","DAR_MaxxPro","DAR_MaxxProPlus","DAR_MaxxPro_MK19"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
	};
};

class CfgVehicleClasses {
	class DARMil_MaxxPro {
		displayName = "DAR MaxxPro";
	};
};

class WeaponFireGun;	// External class reference
class WeaponCloudsGun;	// External class reference
class WeaponFireMGun;	// External class reference
class WeaponCloudsMGun;	// External class reference
class RCWSOptics;	// External class reference

class CfgMovesBasic {
	class DefaultDie;	// External class reference
	
	class ManActions {
		DAR_MaxxPro_Driver = "DAR_MaxxPro_Driver";
		DAR_MaxxPro_Gunner03 = "DAR_MaxxPro_Gunner03";
	};
};

class CfgMovesMaleSdr : CfgMovesBasic {
	class States {
		class Crew;	// External class reference
		class AmovPercMstpSnonWnonDnon;	// External class reference
		
		class DAR_KIA_MaxxPro_Driver : DefaultDie {
			actions = "DeadActions";
			file = "\DAR_MaxxPro\Anim\KIA_HMMWV_Driver.rtm";
			speed = 0.5;
			looped = "false";
			terminal = true;
			connectTo[] = {"Unconscious", 0.1};
			soundEnabled = false;
		};
		
		class DAR_MaxxPro_Driver : Crew {
			file = "\DAR_MaxxPro\Anim\HMMWV_Driver.rtm";
			interpolateTo[] = {"KIA_HMMWV_Driver", 1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		
		class DAR_KIA_MaxxPro_Gunner : DAR_KIA_MaxxPro_Driver {
			file = "\DAR_MaxxPro\Anim\KIA_hmmwv_gunnerOUT.rtm";
		};
		
		class DAR_MaxxPro_Gunner03 : Crew {
			file = "\DAR_MaxxPro\Anim\hmmwv_TOW_gunnerOUT.rtm";
			interpolateTo[] = {"KIA_HMMWV_Gunner", 1};
		};
	};
};

class CfgVehicles {
	class LandVehicle;	// External class reference
	
	class Car : LandVehicle {
		class NewTurret;	// External class reference
	};
	
	class Car_F : Car {
		class AnimationSources {
			
		class BDoor {
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
		};
		
		class Turrets {
			class MainTurret : NewTurret {};
			class ViewOptics;	// External class reference
		};
		
		class HitPoints {
			class HitLFWheel;	// External class reference
			class HitLF2Wheel;	// External class reference
			class HitRFWheel;	// External class reference
			class HitRF2Wheel;	// External class reference
			class HitGlass1;	// External class reference
			class HitGlass2;	// External class reference
			class HitGlass3;	// External class reference
			class HitGlass4;	// External class reference
			class HitGlass5;	// External class reference
			class HitGlass6;	// External class reference
		};
	};
	
	class DAR_MaxxPro_Base : Car_F {
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_vehicle_armedcar_s"};
				speechPlural[] = {"veh_vehicle_armedcar_p"};
			};
		};
		
		tf_RadioType_api = "tf_rt1523g";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.5;
		
		maxSpeed = 100;	// max speed on level road, km/h
		acceleration = 10;
		textSingular = "$STR_A3_nameSound_veh_vehicle_armedcar_s";
		textPlural = "$STR_A3_nameSound_veh_vehicle_armedcar_p";
		nameSound = "veh_vehicle_armedcar_s";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "hmmwv";
		scope = private;
		Model = "\DAR_MaxxPro\DAR_MaxxPro_M2.p3d";
		Picture = "DAR_MaxxPro\Data\icomap_maxxpro_ca";
		Icon = "DAR_MaxxPro\Data\icomap_maxxpro_ca";
		mapSize = 6;
		displayName = "MaxxPro Base";
		vehicleClass = "DARMil_MaxxPro";
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_F", "B_Soldier_F", "B_Soldier_F", "B_Soldier_F", "B_Soldier_F", "B_Soldier_F", "B_Soldier_F"};
		side = TWest;
		faction = BLU_F;
		wheelCircumference = 3.97725;
		antiRollbarForceCoef = 40;
		antiRollbarForceLimit = 50;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 50;
		crewVulnerable = true;
		crewCrashProtection = 0.85;
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
		damperSize = 0.2;	// max. damper amplitude
		damperForce = 1;	// larger number more stiffness dampers
		damperDamping = 1;	// larger number less movement in dampers
		armor = 180;
		armorStructural = 4;
		damageResistance = 0.6;
		turnCoef = 2.5;
		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.9;
		predictTurnSimul = 0.5;
		terrainCoef = 1.5;
		wheelDamageThreshold = 0.3;
		wheelDestroyThreshold = 0.59;
		wheelDamageRadiusCoef = 0.55;
		wheelDestroyRadiusCoef = 0.45;
		cost = 200000;
		precision = 15;
		armorGlass = 1;
		soundServo[] = {"A3\sounds_f\dummysound", db-40, 1.0, 10};
		soundEnviron[] = {"", 0.562341, 1};
		transportMaxBackpacks = 25;
		transportSoldier = 7;
		waterResistance = 1
		maxFordingDepth = 0.9
		
		class Library {
			libTextDesc = "DAR MaxxPro";
		};
		castDriverShadow = "false";
		driverAction = "driver_low01";
		cargoAction[] = {"passenger_low01", "passenger_low01", "passenger_low01", "passenger_low01", "passenger_low01", "passenger_low01", "passenger_low01"};
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0.8, 0.6, 0.3};

		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		
		class UserActions
        {
            class CloseBDoor
            {
                displayName = "Close Rear Door";
                position = "drivewheel";
                radius = 2;
                onlyforplayer = true;
                condition = "this animationPhase ""BDoor"" < 0.5";
                statement = "this animate [""BDoor"", 1]";
            };
		
			class OpenBDoor
            {
                displayName = "Open Rear Door";
                position = "drivewheel";
                radius = 2;
                onlyforplayer = true;
                condition = "this animationPhase ""BDoor"" >= 0.5";
                statement = "this animate [""BDoor"", 0]";
            };
		};
		
		class TransportMagazines {};
		
		class TransportItems {};
		
		class TransportWeapons {};
		
		thrustDelay	= 0.2;
		idleRpm = 800;
		redRpm = 4500;
		brakeIdleSpeed = 1.78;
		fuelCapacity = 250;
		
		class complexGearbox {
			GearboxRatios[] = {"R1", -10.094, "N", 0, "D1", 5.562, "D2", 3.456, "D3", 2.623, "D4", 1.678, "D5", 1.078};
			TransmissionRatios[] = {"High", 5.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 6.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 55.0;
		enginePower = 450;
		maxOmega = 320;
		peakTorque = 1450;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0.0, 0.2}, {0.278, 0.5}, {0.35, 0.85}, {0.461, 0.95}, {0.6, 1.0}, {0.7, 0.95}, {0.8, 0.7}, {1.0, 0.4}};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95};
		switchTime = 0.51;
		
		class Wheels {
			class LF {
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = 0.12;
				mass = 80;
				MOI = 25;
				dampingRate = 0.1;
				maxBrakeTorque = 20000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.05;
				mMaxDroop = 0.1;
				sprungMass = 825;
				springStrength = 51625;
				springDamperRate = 8920;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
			};
			
			class LR : LF {
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 300000;
			};
			
			class RF : LF {
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
				suspTravelDirection[] = {0, -1, 0};
				maxHandBrakeTorque = 300000;
			};
			
			class RR : RF {
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				suspTravelDirection[] = {0, -1, 0};
				maxHandBrakeTorque = 300000;
			};
		};
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getin", 0.562341, 1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getout", 0.562341, 1, 40};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_start", 0.354813, 1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_start", 0.707946, 1.0, 200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_stop", 0.354813, 1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_stop", 0.707946, 1.0, 200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01", 1.0, 1, 200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02", 1.0, 1, 200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03", 1.0, 1, 200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04", 1.0, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01", 1.0, 1, 200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02", 1.0, 1, 200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03", 1.0, 1, 200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04", 1.0, 1, 200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05", 1.0, 1, 200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06", 1.0, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01", 1.0, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02", 1.0, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03", 1.0, 1, 200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04", 1.0, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		
		class Sounds {
			class Idle_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle", 0.398107, 1, 150};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			
			class Engine {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1", db-7, 1, 250};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			
			class Engine1_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2", 0.562341, 1, 300};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			
			class Engine2_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid", db-3, 1, 350};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			
			class Engine3_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high", db0, 1, 400};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*camPos*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			
			class IdleThrust {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle", 0.562341, 1, 200};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			
			class EngineThrust {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1", db-3, 1, 350};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			
			class Engine1_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2", db-1, 1, 400};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			
			class Engine2_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid", db1, 1, 425};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			
			class Engine3_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high", db2, 1, 450};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			
			class Idle_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle", db-12, 1};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			
			class Engine_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1", db-10, 1};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			
			class Engine1_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2", 0.398107, 1};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			
			class Engine2_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid", db-6, 1};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			
			class Engine3_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high", 0.630957, 1};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			
			class IdleThrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle", db-9, 1};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			
			class EngineThrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1", db-7, 1};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			
			class Engine1_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2", 0.562341, 1};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			
			class Engine2_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid", db-3, 1};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			
			class Engine3_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high", db-2, 1};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			
			class TiresRockOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", db3, 1.0, 60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			
			class TiresSandOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", db3, 1.0, 60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", db2, 1.0, 60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			
			class TiresMudOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", db1, 1.0, 60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", db2, 1.0, 60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", db1, 1.0, 60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3", db1, 1.0, 90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			
			class TiresRockIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			
			class TiresSandIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			
			class TiresMudIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", db-3, 1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 0.562341, 1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			
			class breaking_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			
			class acceleration_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			
			class turn_left_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			
			class turn_right_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			
			class breaking_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			
			class acceleration_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			
			class turn_left_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			
			class turn_right_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			
			class breaking_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			
			class acceleration_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			
			class turn_left_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			
			class turn_right_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			
			class breaking_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			
			class acceleration_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			
			class turn_left_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			
			class turn_right_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		
		class Exhausts {
			class Exhaust1 {
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectOffroad";
			};
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				body = "mainTurret";
				gun = "mainGun";
				hasGunner = true;
				weapons[] = {HMG_M2};
				magazines[] = {"100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red", "100Rnd_127x99_mag_Tracer_Red"};
				soundServo[] = {"A3\sounds_f\dummysound", db-40, 1.0, 10};
				minElev = -25;
				maxElev = 60;
				gunnerAction = "gunner_standup01";
				viewGunnerInExternal = "true";
				turretInfoType="RscOptics_Offroad_01";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				castGunnerShadow = true;
				stabilizedInAxes = "StabilizedInAxesNone";
				gunnerRightHandAnimName = "OtocHlaven_shake";
				gunnerLeftHandAnimName = "OtocHlaven_shake";
				
				class ViewOptics : ViewOptics {
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				
				class ViewGunner : ViewOptics {};
			};
		};
		
		class HitPoints : HitPoints {
			class HitGlass1 : HitGlass1 {
				armor = 0.1;
			};
			
			class HitGlass2 : HitGlass2 {
				armor = 0.1;
			};
			
			class HitGlass3 : HitGlass3 {
				armor = 0.1;
			};
			
			class HitGlass4 : HitGlass4 {
				armor = 0.1;
			};
			
			class HitLFWheel : HitLFWheel {
				armor = 0.38;
			};
			
			class HitLBWheel : HitLF2Wheel {
				armor = 0.38;
			};
			
			class HitRFWheel : HitRFWheel {
				armor = 0.38;
			};
			
			class HitRBWheel : HitRF2Wheel {
				armor = 0.38;
			};
			
			class HitFuel {
				armor = 1.4;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = true;
			};
		
			class HitEngine {
				armor = 0.9;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = false;
				explosionShielding = 0.2;
			};	
		};
		
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		
		class Reflectors {
			class LightCarHeadL01 {
				color[] = {1900, 1800, 1700};
				ambient[] = {5, 5, 5};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1;
				
				class Attenuation {
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			
			class LightCarHeadL02 : LightCarHeadL01 {
				position = "LightCarHeadL02";
				direction = "LightCarHeadL02_end";
				FlareSize = 0.5;
			};
			
			class LightCarHeadR01 : LightCarHeadL01 {
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			
			class LightCarHeadR02 : LightCarHeadR01 {
				position = "LightCarHeadR02";
				direction = "LightCarHeadR02_end";
				FlareSize = 0.5;
			};
		};
		aggregateReflectors[] = {{"Left", "Right", "Left2", "Right2"}};
		
		class RenderTargets {
			class LeftMirror {
				renderTarget = "rendertarget0";
				
				class CameraView1 {
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		
		class RightMirror {
			renderTarget = "rendertarget1";
			
			class CameraView1 {
				pointPosition = "pip1_pos";
				pointDirection = "pip1_dir";
				renderQuality = 2;
				renderVisionMode = 4;
				fov = 0.7;
			};
		};
	};
	};
	
	class DAR_MaxxProDXM : DAR_MaxxPro_Base {
		scope = public;
		displayName = "Navistar MaxxPro Dash DXM (M2)";
		accuracy = 0.32;	// accuracy needed to recognize type of this target
		Model = "\DAR_MaxxPro\DAR_MaxxPro_DXM.p3d";

		dampersBumpCoef = 6.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 20.0;
		enginePower = 246;
		maxOmega = 471;
		peakTorque = 1100;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0.0, 0.2}, {0.278, 0.5}, {0.35, 0.85}, {0.461, 0.95}, {0.6, 1.0}, {0.7, 0.95}, {0.8, 0.7}, {1.0, 0.4}};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95};
		switchTime = 0.31;
		latency = 1.0;
		
		class Wheels: Wheels {
			class LF {
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = 0.126;
				mass = 80;
				MOI = 40;
				dampingRate = 0.15;
				maxBrakeTorque = 34000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.02;
				mMaxDroop = 0.1;
				sprungMass = 825;
				springStrength = 101625;
				springDamperRate = 20920;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
			};
			
			class LR : LF {
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 275000;
			};
			
			class RF : LF {
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
				suspTravelDirection[] = {0, -1, 0};
			};
			
			class RR : RF {
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				suspTravelDirection[] = {0, -1, 0};
				maxHandBrakeTorque = 275000;
			};
		};
		
		class AnimationSources : AnimationSources {
			class ReloadAnim {
				source = "reload";
				weapon = HMG_M2;
			};
			
			class ReloadMagazine {
				source = "reloadmagazine";
				weapon = HMG_M2;
			};
			
			class Revolving {
				source = "revolving";
				weapon = HMG_M2;
			};
		};
	};
	
	class DAR_MaxxPro : DAR_MaxxPro_Base {
		scope = public;
		displayName = "Navistar MaxxPro (M2)";
		accuracy = 0.32;	// accuracy needed to recognize type of this target
		
		class AnimationSources : AnimationSources {
			class ReloadAnim {
				source = "reload";
				weapon = HMG_M2;
			};
			
			class ReloadMagazine {
				source = "reloadmagazine";
				weapon = HMG_M2;
			};
			
			class Revolving {
				source = "revolving";
				weapon = HMG_M2;
			};
		};
	};
	
	class DAR_MaxxProPlus : DAR_MaxxPro_Base {
		scope = public;
		displayName = "Navistar MaxxPro Plus (M2)";
		accuracy = 0.32;	// accuracy needed to recognize type of this target
		Model = "\DAR_MaxxPro\DAR_MaxxPro_Plus.p3d";
		
		class AnimationSources : AnimationSources {
			class ReloadAnim {
				source = "reload";
				weapon = HMG_M2;
			};
			
			class ReloadMagazine {
				source = "reloadmagazine";
				weapon = HMG_M2;
			};
			
			class Revolving {
				source = "revolving";
				weapon = HMG_M2;
			};
		};
	};
	
	class DAR_MaxxProDeploy : DAR_MaxxPro_Base {
		scope = public;
		displayName = "Navistar MaxxPro Dash Deploy (M2)";
		accuracy = 0.32;	// accuracy needed to recognize type of this target
		Model = "\DAR_MaxxPro\DAR_MaxxPro_Deploy.p3d";
		
		class AnimationSources : AnimationSources {
			class ReloadAnim {
				source = "reload";
				weapon = HMG_M2;
			};
			
			class ReloadMagazine {
				source = "reloadmagazine";
				weapon = HMG_M2;
			};
			
			class Revolving {
				source = "revolving";
				weapon = HMG_M2;
			};
		};
	};

	class DAR_MaxxPro_MK19 : DAR_MaxxPro_Base {
		Model = "\DAR_MaxxPro\DAR_MaxxPro_MK19.p3d";
		scope = public;
		displayName = "Navistar MaxxPro (Mk. 19)";
		accuracy = 0.32;	// accuracy needed to recognize type of this target
		
		class AnimationSources : AnimationSources {
			class belt_rotation {
				source = "reload";
				weapon = "GMG_40mm";
			};
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				weapons[] = {"GMG_40mm"};
				magazines[] = {"96Rnd_40mm_G_belt", "96Rnd_40mm_G_belt", "96Rnd_40mm_G_belt", "96Rnd_40mm_G_belt"};
				soundServo[] = {"A3\sounds_f\dummysound", db-40, 1.0, 10};
				memoryPointGunnerOptics = "gunnerview";
				
				class GunFire : WeaponCloudsMGun {
					interval = 0.01;
				};
			};
		};	
	};
	
};
