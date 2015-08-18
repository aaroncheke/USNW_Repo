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

#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#include "basicdefines_A3.hpp"

class DefaultEventhandlers;	// External class reference

class CfgPatches {
	class DAR_MTVR {
		units[] = {DAR_MK23A, DAR_MK27, DAR_MK27T, DAR_4x4};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
	};
};

class CfgVehicleClasses {
	class DARMil_Vehicles {
		displayName = "DAR MTVR";
	};
};

class WeaponFireGun;	
class WeaponCloudsGun;	
class WeaponFireMGun;	
class WeaponCloudsMGun;	
class RCWSOptics;	

class CfgMovesBasic {
	class DefaultDie;
	
	class ManActions {};
};

class CfgMovesMaleSdr : CfgMovesBasic {
	
	class States {
	
		class Crew;
		class AmovPercMstpSnonWnonDnon;
		
		class HMMWV_KIA_Cargo01_EP1 : DefaultDie {
			actions = "DeadActions";
			file = "\DAR_MTVR\Anim\HMWVW_KIA_Cargo01";
			speed = 1e+010;
			terminal = true;
			soundEnabled = false;
			looped = false;
			connectTo[] = {"Unconscious", 0.1};
		};
	};
};


class CfgVehicles {
	class LandVehicle;
	
	class Car : LandVehicle {
		class NewTurret;	
	};
	
	class Car_F : Car {
		class AnimationSources;	
		
		class Turrets {
			class MainTurret : NewTurret {};
			class ViewOptics;
		};
		
		class HitPoints {
			class HitLFWheel;	
			class HitLF2Wheel;	
			class HitRFWheel;	
			class HitRF2Wheel;	
			class HitGlass1;	
			class HitGlass2;	
			class HitGlass3;	
			class HitGlass4;	
			class HitGlass5;	
			class HitGlass6;	
		};
	};
	
	class DAR_MTVRBase : Car_F {
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_vehicle_armedcar_s"};
				speechPlural[] = {"veh_vehicle_armedcar_p"};
			};
		};
		maxSpeed = 120;
		acceleration = 15;
		textSingular = "$STR_A3_nameSound_veh_vehicle_armedcar_s";
		textPlural = "$STR_A3_nameSound_veh_vehicle_armedcar_p";
		nameSound = "veh_vehicle_armedcar_s";
		author = "Richards.D, Bohemia Interactive";
		_generalMacro = "";
		scope = 0; 
		Model = "\DAR_MTVR\DAR_MK23A.p3d";
		picture = "\DAR_MTVR\Data\UI\picture_mtvr_ca.paa";
		Icon = "\DAR_MTVR\Data\UI\icon_mtvr_ca.paa";
		mapSize = 6;
		displayName = MTVR Base;
		vehicleClass = "DARMil_Vehicles";
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_F", "B_Soldier_F", "B_Soldier_F", "B_Soldier_F"};
		side = TWest;
		faction = BLU_F;
		wheelCircumference = 4.08407044; 	
		antiRollbarForceCoef = 1.5;
		antiRollbarForceLimit = 4;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 20;
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1", "Compartment2"};
		soundAttenuationCargo[] = {1, 0};
		crewVulnerable = true;
		ejectDeadCargo = false;
		ejectDeadDriver = true;
		crewCrashProtection = 0.8;
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
		damperSize = 0.2;	// max. damper amplitude
		damperForce = 1;	// larger number more stiffness dampers
		damperDamping = 1;	// larger number less movement in dampers
		armor = 80;
		damageResistance = 0.05;
		turnCoef = 3;
		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.9;
		predictTurnSimul = 0.5;
		brakeDistance = 1.0;	// vehicle movement precision
		terrainCoef = 2.5;
		wheelDamageThreshold = 0.9;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.95;
		wheelDestroyRadiusCoef = 0.45;
		cost = 200000;
		precision = 15;
		armorGlass = 0.9;
		armorWheels = 0.8;
		soundServo[] = {"A3\sounds_f\dummysound", db-40, 1.0, 10};
		soundEnviron[] = {"", 0.562341, 1};
		transportMaxBackpacks = 50;
		transportSoldier = 13;
		
		class Library {
			libTextDesc = "DAR MTVRs";
		};
		castDriverShadow = "false";
		driverAction = "driver_offroad01";
		cargoAction[] = {"passenger_low01", "passenger_generic01_leanright", "passenger_generic01_foldhands", "passenger_generic01_foldhands", "passenger_generic01_foldhands"};
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0.8, 0.6, 0.3};

		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		
		class TransportMagazines {};
		
		class TransportItems {};
		
		class TransportWeapons {};
		
		idleRpm = 800;
		redRpm = 5500;
		brakeIdleSpeed = 1.78;
		fuelCapacity = 250;
		
		class complexGearbox {
			GearboxRatios[] = {"R1", -2.575, "N", 0, "D1", 4.5, "D2", 2.6, "D3", 1.32, "D4", 0.96, "D5", 0.65};
			TransmissionRatios[] = {"High", 5.539};
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
		enginePower = 650;
		maxOmega = 900.91;
		peakTorque = 1253;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0, 0}, {0.14, 0.41}, {0.29, 0.77}, {0.43, 1}, {0.57, 1}, {0.71, 0.87}, {0.86, 0.77}, {1, 0.62}};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95};
		switchTime = 0.31;
		latency = 1.0;
		
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center   = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 20;
				MOI = 3.3;
				dampingRate = 0.5;
				maxBrakeTorque = 6000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;
				longitudinalStiffnessPerUnitGravity = 8000;
				latStiffX = 35;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0.17, 0.85}, {0.4, 0.65}, {1, 0.4}};
			};
			class LR : LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center   = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3000;
				latStiffY = 180;	
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;				
			};
			
			class LR1 : LR
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center   = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 3000;
				latStiffY = 180;	
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;				
			};
			
			class RF : LF
			{
				boneName = "wheel_2_1_damper";
				center   = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR : RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center   = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3000;
				latStiffY = 180;	
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;			
			};
			
			class RR1 : RR
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center   = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 3000;
				latStiffY = 180;	
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;			
			};

		};
		
		#include "sounds.hpp"

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
				magazines[] = {"100Rnd_127x99_mag_Tracer_Yellow", "100Rnd_127x99_mag_Tracer_Yellow", "100Rnd_127x99_mag_Tracer_Yellow", "100Rnd_127x99_mag_Tracer_Yellow", "100Rnd_127x99_mag_Tracer_Yellow", "100Rnd_127x99_mag_Tracer_Yellow"};
				soundServo[] = {"A3\sounds_f\dummysound", db-40, 1.0, 10};
				minElev = -25;
				maxElev = 60;
				gunnerAction = "gunner_standup01";
				viewGunnerInExternal = "true";
				castGunnerShadow = true;
				stabilizedInAxes = "StabilizedInAxesBoth";
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
				renderTarget = "rendertarget2";
				
				class CameraView1 {
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
	};
	
	class DAR_MK23A : DAR_MTVRBase {
		scope = 2; 
		displayName = "Mk. 23 MTVR Cargo APK M2";
		accuracy = 0.32;	// accuracy needed to recognize type of this target
		model = "\DAR_MTVR\DAR_MK23A.p3d";
		picture = "\DAR_MTVR\Data\UI\picture_mtvr_ca.paa";
		Icon = "\DAR_MTVR\Data\UI\icon_mtvr_ca.paa";
		side = TWest;
		faction = BLU_F;
		armor = 120;
		
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
	
	class DAR_MK23AD : DAR_MTVRBase {
		scope = 2; 
		displayName = "Mk. 23 MTVR Cargo APK M2 Deployment";
		accuracy = 0.32;	// accuracy needed to recognize type of this target
		model = "\DAR_MTVR\DAR_MK23AD.p3d";
		picture = "\DAR_MTVR\Data\UI\picture_mtvr_ca.paa";
		Icon = "\DAR_MTVR\Data\UI\icon_mtvr_ca.paa";
		side = TWest;
		faction = BLU_F;
		armor = 120;
		
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
	
	class DAR_MK27 : DAR_MTVRBase {
		scope = 2;
		model = "\DAR_MTVR\DAR_MK27.p3d";
		displayname = "Mk. 27 MTVR Extended Cargo";
		transportSoldier = 28;
		transportMaxBackpacks = 50;
		picture = "\DAR_MTVR\Data\UI\picture_mtvr_ca.paa";
		Icon = "\DAR_MTVR\Data\UI\icon_mtvr_ca.paa";
		hasGunner = false;
		
		side = TWest;
		faction = BLU_F;
		
		class Turrets {};
		
		class Library {
			libTextDesc = "Mk. 27 MTVR Extended";
		};

		vehicleClass = "DARMil_Vehicles";
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0.0, 0.0, 0.0};

		
		class TransportWeapons {};
	};
	
	class DAR_MK27T : DAR_MTVRBase {
		scope = 2;
		model = "\DAR_MTVR\DAR_MK27T.p3d";
		displayname = "Mk. 27 MTVR Extended Cargo Covered";
		transportSoldier = 28;
		transportMaxBackpacks = 50;
		picture = "\DAR_MTVR\Data\UI\picture_mtvr_ca.paa";
		Icon = "\DAR_MTVR\Data\UI\icon_mtvr_ca.paa";
		hasGunner = false;
		
		side = TWest;
		faction = BLU_F;
		
		class Turrets {};
		
		class Library {
			libTextDesc = "Mk. 27 MTVR Extended";
		};

		vehicleClass = "DARMil_Vehicles";
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0.0, 0.0, 0.0};

		
		class TransportWeapons {};
	};
	
	class DAR_4X4 : DAR_MTVRBase {
		scope = 2;
		model = "\DAR_MTVR\DAR_4X4.p3d";
		displayname = "MTVR 4X4 Short Bed";
		transportSoldier = 7;
		transportMaxBackpacks = 25;
		picture = "\DAR_MTVR\Data\UI\picture_mtvr_ca.paa";
		Icon = "\DAR_MTVR\Data\UI\icon_mtvr_ca.paa";
		hasGunner = false;
		
		side = TWest;
		faction = BLU_F;
		
		class Wheels : Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center   = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 20;
				MOI = 3.3;
				dampingRate = 0.5;
				maxBrakeTorque = 6000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;
				longitudinalStiffnessPerUnitGravity = 8000;
				latStiffX = 35;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0.17, 0.85}, {0.4, 0.65}, {1, 0.4}};
			};
			class LR : LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center   = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3000;
				latStiffY = 180;	
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;				
			};
			
			class RF : LF
			{
				boneName = "wheel_2_1_damper";
				center   = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR : RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center   = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3000;
				latStiffY = 180;	
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;			
			};
		};
		
		class Turrets {};
		
		class Library {
			libTextDesc = "4x4 Short Bed";
		};

		vehicleClass = "DARMil_Vehicles";
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0.0, 0.0, 0.0};

		
		class TransportWeapons {};
	};
	
	
	class DAR_MK23 : DAR_MTVRBase {
		scope = 2;
		model = "\DAR_MTVR\DAR_MK23.p3d";
		displayname = "Mk. 23 MTVR Cargo";
		transportSoldier = 13;
		transportMaxBackpacks = 25;
		picture = "\DAR_MTVR\Data\UI\picture_mtvr_ca.paa";
		Icon = "\DAR_MTVR\Data\UI\icon_mtvr_ca.paa";
		hasGunner = false;
		
		side = TWest;
		faction = BLU_F;
		
		class Turrets {};
		
		class Library {
			libTextDesc = "4x4 Short Bed";
		};
		
		vehicleClass = "DARMil_Vehicles";
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0.0, 0.0, 0.0};

		
		class TransportWeapons {};
	};
	
	class DAR_LHS_16 : DAR_MTVRBase {
		scope = 2;
		model = "\DAR_MTVR\DAR_LHS_16.p3d";
		displayname = "MTVR LHS 16 Ton";
		transportSoldier = 2;
		transportMaxBackpacks = 25;
		picture = "\DAR_MTVR\Data\UI\picture_mtvr_ca.paa";
		Icon = "\DAR_MTVR\Data\UI\icon_mtvr_ca.paa";
		hasGunner = false;
		supplyRadius = 8;
		transportAmmo = 2500;
		transportRepair = 200000000;
		
		side = TWest;
		faction = BLU_F;
		
		class Wheels : Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center   = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 20;
				MOI = 3.3;
				dampingRate = 0.5;
				maxBrakeTorque = 6000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;
				longitudinalStiffnessPerUnitGravity = 8000;
				latStiffX = 35;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0.17, 0.85}, {0.4, 0.65}, {1, 0.4}};
			};
			class LR : LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center   = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3000;
				latStiffY = 180;	
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;				
			};
			
			class LR1 : LR
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center   = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 3000;
				latStiffY = 180;	
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;				
			};
			
			class RF : LF
			{
				boneName = "wheel_2_1_damper";
				center   = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR : RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center   = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3000;
				latStiffY = 180;	
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;			
			};
			
			class RR1 : RR
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center   = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 3000;
				latStiffY = 180;	
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;			
			};
		
			class RR2 : RR
			{
				boneName = "wheel_2_4_damper";
				steering = 0;
				center   = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
				suspForceAppPointOffset = "wheel_2_4_axis";
				tireForceAppPointOffset = "wheel_2_4_axis";
				maxHandBrakeTorque = 3000;
				latStiffY = 180;	
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;				
			};
				
			class LR2 : LR
			{
				boneName = "wheel_1_4_damper";
				steering = 0;
				center   = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
				suspForceAppPointOffset = "wheel_1_4_axis";
				tireForceAppPointOffset = "wheel_1_4_axis";
				maxHandBrakeTorque = 3000;
				latStiffY = 180;	
				sprungMass = 550;
				springStrength = 50875;
				springDamperRate = 12740;			
			};
		};
		
		
		class Turrets {};
		
		class Library {
			libTextDesc = "16T LHS";
		};
		
		vehicleClass = "DARMil_Vehicles";
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0.0, 0.0, 0.0};

		
		class TransportWeapons {};
	};
	
	
	
	class DAR_LHS_8 : DAR_MTVRBase {
		scope = 2;
		model = "\DAR_MTVR\DAR_LHS_8.p3d";
		displayname = "MTVR LHS 8 Ton Fuel";
		transportSoldier = 0;
		transportMaxBackpacks = 25;
		picture = "\DAR_MTVR\Data\UI\picture_mtvr_ca.paa";
		Icon = "\DAR_MTVR\Data\UI\icon_mtvr_ca.paa";
		hasGunner = false;
		supplyRadius = 8;
		transportFuel = 10000;
		
		side = TWest;
		faction = BLU_F;
		
		class Library {
			libTextDesc = "8T LHS";
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
		
		vehicleClass = "DARMil_Vehicles";
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0.0, 0.0, 0.0};

		
		class TransportWeapons {};
	};

	class DAR_MK23ADT : DAR_MTVRBase {
		scope = 2; 
		displayName = "Mk. 23 MTVR Cargo APK M2 Deployment Tan";
		accuracy = 0.32;	// accuracy needed to recognize type of this target
		model = "\DAR_MTVR\DAR_MK23ADT.p3d";
		picture = "\DAR_MTVR\Data\UI\picture_mtvr_ca.paa";
		Icon = "\DAR_MTVR\Data\UI\icon_mtvr_ca.paa";
		side = TWest;
		faction = BLU_F;
		armor = 120;
		
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
};
