
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
	class DAR_HMMWV {
		units[] = {"DAR_M1151", "DAR_M1151_Deploy", "DAR_M115_MK19", "DAR_M1167", "DAR_M1152", "DAR_M1165_GMV", "DAR_M1151Woodland", "DAR_M115_MK19Woodland", "DAR_M1167Woodland", "M1152Woodland", "DAR_M1151WoodlandUA"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
	};
};

class CfgVehicleClasses {
	class DARMil_HMMWV {
		displayName = "DAR HMMWV";
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
		DAR_HMMWV_Driver = "DAR_HMMWV_Driver";
		DAR_HMMWV_Gunner03 = "DAR_HMMWV_Gunner03";
	};
};

class CfgMovesMaleSdr : CfgMovesBasic {
	class States {
		class Crew;	// External class reference
		class AmovPercMstpSnonWnonDnon;	// External class reference
		
		class DAR_KIA_HMMWV_Driver : DefaultDie {
			actions = "DeadActions";
			file = "\DAR_HMMWV\Anim\KIA_HMMWV_Driver.rtm";
			speed = 0.5;
			looped = "false";
			terminal = true;
			connectTo[] = {"Unconscious", 0.1};
			soundEnabled = false;
		};
		
		class DAR_HMMWV_Driver : Crew {
			file = "\DAR_HMMWV\Anim\HMMWV_Driver.rtm";
			interpolateTo[] = {"KIA_HMMWV_Driver", 1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		
		class DAR_KIA_HMMWV_Gunner : DAR_KIA_HMMWV_Driver {
			file = "\DAR_HMMWV\Anim\KIA_hmmwv_gunnerOUT.rtm";
		};
		
		class DAR_HMMWV_Gunner03 : Crew {
			file = "\DAR_HMMWV\Anim\hmmwv_TOW_gunnerOUT.rtm";
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
		class AnimationSources;	// External class reference
		
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
	
	class DAR_HMMWV_Base : Car_F {
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_vehicle_armedcar_s"};
				speechPlural[] = {"veh_vehicle_armedcar_p"};
			};
		};
		
		
		tf_RadioType_api = "tf_rt1523g";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.5;
		
		maxSpeed = 120;	// max speed on level road, km/h
		acceleration = 15;
		textSingular = "$STR_A3_nameSound_veh_vehicle_armedcar_s";
		textPlural = "$STR_A3_nameSound_veh_vehicle_armedcar_p";
		nameSound = "veh_vehicle_armedcar_s";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "hmmwv";
		scope = private;
		Model = "\DAR_HMMWV\DAR_M1151.p3d";
		Picture = "DAR_HMMWV\Data\hmmwv50_ca.paa";
		Icon = "DAR_HMMWV\Data\icomap_hmwv50_ca.paa";
		mapSize = 6;
		displayName = "M1151 (M2)";
		vehicleClass = "DARMil_HMMWV";
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_F", "B_Soldier_F", "B_Soldier_F", "B_Soldier_F"};
		side = TWest;
		faction = BLU_F;
		wheelCircumference = 2.834;
		antiRollbarForceCoef = 12;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 50;
		crewVulnerable = true;
		crewCrashProtection = 0.85;
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
		damperSize = 0.2;	// max. damper amplitude
		damperForce = 1;	// larger number more stiffness dampers
		damperDamping = 1;	// larger number less movement in dampers
		armor = 150;
		armorStructural = 4;
		turnCoef = 2.5;
		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.9;
		predictTurnSimul = 0.5;
		brakeDistance = 1.0;	// vehicle movement precision
		terrainCoef = 1.5;
		wheelDamageThreshold = 0.7;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.95;
		wheelDestroyRadiusCoef = 0.45;
		cost = 200000;
		precision = 15;
		armorGlass = 0.99;
		armorWheels = 0.8;
		soundServo[] = {"A3\sounds_f\dummysound", db-40, 1.0, 10};
		soundEnviron[] = {"", db-5, 1};
		transportMaxBackpacks = 25;
		transportSoldier = 3;
		
		class Library {
			libTextDesc = "DAR HMMWVs";
		};
		castDriverShadow = "false";
		driverAction = "DAR_HMMWV_Driver";
		cargoAction[] = {"passenger_low01", "passenger_low01", "passenger_low01"};
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0.8, 0.6, 0.3};

		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "";
		
		class TransportMagazines {};
		
		class TransportItems {};
		
		class TransportWeapons {};
		idleRpm = 800;
		redRpm = 4500;
		brakeIdleSpeed = 1.78;
		fuelCapacity = 250;
		
		class complexGearbox {
			GearboxRatios[] = {"R1", -5.75, "N", 0, "D1", 4.3, "D2", 2.3, "D3", 1.5, "D4", 1.0, "D5", 0.73};
			TransmissionRatios[] = {"High", 6.759};
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
		clutchStrength = 20.0;
		enginePower = 276;
		maxOmega = 471;
		peakTorque = 1253;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0.0, 0.0}, {0.278, 0.5}, {0.35, 0.75}, {0.461, 1.0}, {0.6, 0.95}, {0.7, 0.85}, {0.8, 0.75}, {1.0, 0.5}};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95};
		switchTime = 0.31;
		latency = 1.0;
		
		class Wheels {
			class LF {
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = 0.126;
				mass = 30;
				MOI = 12.8;
				dampingRate = 0.1;
				maxBrakeTorque = 10000;
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
				maxHandBrakeTorque = 3500;
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
				maxHandBrakeTorque = 3500;
			};
		};
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getin", db-5, 1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getout", db-5, 1, 40};
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
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle", db-8, 1, 150};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			
			class Engine {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1", db-7, 1, 250};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			
			class Engine1_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2", db-5, 1, 300};
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
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle", db-5, 1, 200};
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
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2", db-8, 1};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			
			class Engine2_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid", db-6, 1};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			
			class Engine3_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high", db-4, 1};
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
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2", db-5, 1};
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
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", db-5, 1.0};
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
				turretInfoType="RscOptics_Offroad_01";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				minElev = -25;
				maxElev = 60;
				gunnerAction = "gunner_standup01";
				viewGunnerInExternal = "true";
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
				armor = 0.8;
			};
			
			class HitLBWheel : HitLF2Wheel {
				armor = 0.8;
			};
			
			class HitRFWheel : HitRFWheel {
				armor = 0.8;
			};
			
			class HitRBWheel : HitRF2Wheel {
				armor = 0.8;
			};
			
			class HitFuel {
				armor = 1.4;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = true;
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
			
			class LeftMirrorTurret {
				renderTarget = "rendertarget3";
				
				class CameraView1 {
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			
			class RightMirror {
				renderTarget = "rendertarget2";
				
				class CameraView1 {
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			
			class RightMirrorTurret {
				renderTarget = "rendertarget4";
				
				class CameraView1 {
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
	};
	
	class DAR_M1151 : DAR_HMMWV_Base {
		scope = public;
		displayName = "M1151 (M2)";
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
		hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] = {"\DAR_HMMWV\Data\hmmwv_body_canvas_1_co.paa", "\dar_hmmwv\data\hmmwv_hood_canvas_co.paa", "\dar_hmmwv\data\hmmwv_regular_1_co.paa", "\dar_hmmwv\data\hmmwv_parts_1_ca.paa", "\dar_hmmwv\data\hmmwv_gpk_tower_co.paa"};
	};
	
	class DAR_M1151_Deploy : DAR_HMMWV_Base {
		scope = public;
		displayName = "M1151 (M2) Deployment";
		Model = "\DAR_HMMWV\DAR_M1151_Deploy.p3d";
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
		hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] = {"\DAR_HMMWV\Data\hmmwv_body_canvas_1_co.paa", "\dar_hmmwv\data\hmmwv_hood_canvas_co.paa", "\dar_hmmwv\data\hmmwv_regular_1_co.paa", "\dar_hmmwv\data\hmmwv_parts_1_ca.paa", "\dar_hmmwv\data\hmmwv_gpk_tower_co.paa"};
	};
	
	class DAR_M115_MK19 : DAR_HMMWV_Base {
		Model = "\DAR_HMMWV\DAR_M1151_MK19.p3d";
		Picture = "DAR_HMMWV\Data\hmmwv50_ca.paa";
		Icon = "DAR_HMMWV\Data\icomap_hmwv_ca.paa";
		scope = public;
		displayName = "M1151 (Mk. 19)";
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
				magazines[] = {"96Rnd_40mm_G_belt", "96Rnd_40mm_G_belt"};
				soundServo[] = {"A3\sounds_f\dummysound", db-40, 1.0, 10};
				memoryPointGunnerOptics = "gunnerview";
				turretInfoType="RscOptics_Offroad_01";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				
				class GunFire : WeaponCloudsMGun {
					interval = 0.01;
				};
			};
		};
		hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] = {"\DAR_HMMWV\Data\hmmwv_body_canvas_1_co.paa", "\dar_hmmwv\data\hmmwv_hood_canvas_co.paa", "\dar_hmmwv\data\hmmwv_regular_1_co.paa", "\dar_hmmwv\data\hmmwv_parts_1_ca.paa", "\dar_hmmwv\data\hmmwv_gpk_tower_co.paa"};
	};
	
	class DAR_M1167 : DAR_HMMWV_Base {
		Model = "\DAR_HMMWV\DAR_M1167.p3d";
		Picture = "DAR_HMMWV\Data\hmmwvtow_ca.paa";
		Icon = "DAR_HMMWV\Data\icomap_hmwv_ca.paa";
		scope = public;
		displayName = "M1167 (TOW-2)";
		accuracy = 0.32;	// accuracy needed to recognize type of this target
		
		class AnimationSources : AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "missiles_titan";
			};
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				minElev = -10;
				maxElev = 20;
				weapons[] = {"missiles_titan"};
				magazines[] = {"2Rnd_GAT_missiles", "2Rnd_GAT_missiles", "2Rnd_GAT_missiles"};
				soundServo[] = {"A3\sounds_f\dummysound", db-40, 1.0, 10};
				gunnerOpticsModel = "DAR_HMMWV\optika_TOW";
				
				class ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
				};
			};
		};
		hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] = {"\DAR_HMMWV\Data\hmmwv_body_canvas_1_co.paa", "\dar_hmmwv\data\hmmwv_hood_canvas_co.paa", "\dar_hmmwv\data\hmmwv_regular_1_co.paa", "\dar_hmmwv\data\hmmwv_parts_1_ca.paa", "\dar_hmmwv\data\hmmwv_gpk_tower_co.paa"};
	};
	
	class DAR_M1152 : DAR_HMMWV_Base {
		Model = "\DAR_HMMWV\DAR_M1152.p3d";
		Picture = "DAR_HMMWV\Data\hmmwv50_ca.paa";
		Icon = "DAR_HMMWV\Data\icomap_hmwv_ca.paa";
		scope = public;
		displayName = "M1152 ECV";
		accuracy = 0.32;	// accuracy needed to recognize type of this target
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0.1, 0.1, 0.1};

		hasGunner = false;
		transportMaxBackpacks = 25;
		transportSoldier = 1;
		
		class Turrets : Turrets {};
		hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\DAR_HMMWV\Data\hmmwv_body_canvas_1_co.paa", "\dar_hmmwv\data\hmmwv_hood_canvas_co.paa", "\dar_hmmwv\data\hmmwv_regular_1_co.paa", "\dar_hmmwv\data\hmmwv_parts_1_ca.paa"};
	};
	
	class DAR_M1165_GMV : DAR_HMMWV_Base {
		scope = public;
		displayName = "M1165 GMV (M134)";
		Model = "\DAR_HMMWV\DAR_GMV.p3d";
		accuracy = 0.32;	// accuracy needed to recognize type of this target
		
		class AnimationSources : AnimationSources {
			class muzzle2_source {
				source = "reload";
				weapon = "LMG_Minigun";
			};
			
			class muzzle2_source_rot {
				source = "ammorandom";
				weapon = "LMG_Minigun";
			};
			
			class ReloadAnim {
				source = "reload";
				weapon = "LMG_Minigun";
			};
			
			class ReloadMagazine {
				source = "reloadmagazine";
				weapon = "LMG_Minigun";
			};
			
			class Gatling {
				source = "revolving";
				weapon = "LMG_Minigun";
			};
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				minElev = -60;
				maxElev = 30;
				soundServo[] = {"", db-40, 1.0};
				stabilizedInAxes = "StabilizedInAxesBoth";
				weapons[] = {"LMG_Minigun"};
				magazines[] = {"2000Rnd_65x39_belt_Tracer_Red", "2000Rnd_65x39_belt_Tracer_Red", "2000Rnd_65x39_belt_Tracer_Red"};
				gunBeg = "muzzle";	// endpoint of the gun
				gunEnd = "chamber";	// chamber of the gun
				gunnerOpticsModel="DAR_HMMWV\optika_empty";
				memoryPointGunnerOptics = "gunnerview";
				gunnerAction = "gunner_standup01";
				turretInfoType="RscOptics_Offroad_01";
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				
				class ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
					
				class ViewGunner : ViewOptics {};
			};
		};
		hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] = {"\DAR_HMMWV\Data\hmmwv_body_canvas_1_co.paa", "\dar_hmmwv\data\hmmwv_hood_canvas_co.paa", "\dar_hmmwv\data\hmmwv_regular_1_co.paa", "\dar_hmmwv\data\hmmwv_parts_1_ca.paa", "\dar_hmmwv\data\hmmwv_gpk_tower_co.paa"};
	};
	
	class DAR_M1151Woodland : DAR_M1151 {
		scope = public;
		displayName = "M1151 (M2) Woodland";
		hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] = {"\DAR_HMMWV\Data\hmmwv_body_canvas_1_wl_co.paa", "\dar_hmmwv\data\hmmwv_hood_canvas_wl_co.paa", "\dar_hmmwv\data\hmmwv_regular_wl_1_co.paa", "\dar_hmmwv\data\hmmwv_parts_wl_1_ca.paa", "\dar_hmmwv\data\hmmwv_gpk_tower_wl_co.paa"};
	};
	
	class DAR_M115_MK19Woodland : DAR_M115_MK19 {
		scope = public;
		displayName = "M1151 (Mk. 19) Woodland";
		hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] = {"\DAR_HMMWV\Data\hmmwv_body_canvas_1_wl_co.paa", "\dar_hmmwv\data\hmmwv_hood_canvas_wl_co.paa", "\dar_hmmwv\data\hmmwv_regular_wl_1_co.paa", "\dar_hmmwv\data\hmmwv_parts_wl_1_ca.paa", "\dar_hmmwv\data\hmmwv_gpk_tower_wl_co.paa"};
	};
	
	class DAR_M1167Woodland : DAR_M1167 {
		scope = public;
		displayName = "M1167 (TOW-2) Woodland";
		hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3", "Camo4"};
		hiddenSelectionsTextures[] = {"\DAR_HMMWV\Data\hmmwv_body_canvas_1_wl_co.paa", "\dar_hmmwv\data\hmmwv_hood_canvas_wl_co.paa", "\dar_hmmwv\data\hmmwv_regular_wl_1_co.paa", "\dar_hmmwv\data\hmmwv_parts_wl_1_ca.paa", "\dar_hmmwv\data\hmmwv_gpk_tower_wl_co.paa"};
	};
	
	class DAR_M1152Woodland : DAR_M1152 {
		scope = public;
		displayName = "M1152 ECV Woodland";
		hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\DAR_HMMWV\Data\hmmwv_body_canvas_1_wl_co.paa", "\dar_hmmwv\data\hmmwv_hood_canvas_wl_co.paa", "\dar_hmmwv\data\hmmwv_regular_wl_1_co.paa", "\dar_hmmwv\data\hmmwv_parts_wl_1_ca.paa"};
	};
	
	class DAR_M1151WoodlandUA : DAR_HMMWV_Base {
		Model = "\DAR_HMMWV\DAR_M1151_Unarmed.p3d";
		Picture = "DAR_HMMWV\Data\hmmwv50_ca.paa";
		Icon = "DAR_HMMWV\Data\icomap_hmwv_ca.paa";
		scope = public;
		displayName = "M1151 Unarmed Woodland";
		accuracy = 0.32;	// accuracy needed to recognize type of this target
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0.1, 0.1, 0.1};

		hasGunner = false;
		transportMaxBackpacks = 25;
		transportSoldier = 3;
		
		class Turrets : Turrets {};
		hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"\DAR_HMMWV\Data\hmmwv_body_canvas_1_wl_co.paa", "\dar_hmmwv\data\hmmwv_hood_canvas_wl_co.paa", "\dar_hmmwv\data\hmmwv_regular_wl_1_co.paa", "\dar_hmmwv\data\hmmwv_parts_wl_1_ca.paa"};
	};
};
