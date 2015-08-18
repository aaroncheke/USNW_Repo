class CfgPatches
{
	class meu_MB22B
	{
		units[]				 = {"MV-22B"};
		weapons[]			 = {};
		requiredVersion		 = 0.1;
		requiredAddons[]	 = {"A3_Air_F"};
	};
};


class CfgVehicles
{
	class Air;
	class Plane: Air{};
	class meu_MV22 : Plane
	{
		destrType="DestructWreck";
		scope=2;
		displayName="MV-22";
		vehicleClass="Air";
		model="\MV22B\MV22.p3d";
		picture="\MV22B\mv22_Color_Tail.tga";"\MV22B\mv22_Grey_Tail.tga";
		icon="\MV22B\icon_MV22_CA.paa";
		mapSize=28;
		side=1;
		faction="BLU_F";
		canFloat=0;
		waterAngularDampingCoef=10;
		waterPPInVehicle=0;
		waterResistanceCoef=0.5;
		crew="B_Helipilot_F";
		maxFordingDepth=0.55000001;
		driveOnComponent[] = {"wheel_1_1","wheel_2_2","wheel_2_1"};
		mainRotorSpeed=1;
		backRotorSpeed=1;
		mainBladeRadius=7.5;
		bodyFrictionCoef=0.89999998;
		fuelCapacity=6721;
		fuelConsumptionRate=1.110;
		extCameraPosition[]={0,3,-23};
		gearRetracting=1;
		gearUpTime=4;
		gearDownTime=4;
		accuracy=0.5;
		LockDetectionSystem=9;
		incomingMissileDetectionSystem=18;
		irScanRangeMin = 500;
		irScanRangeMax = 5000;
		irScanToEyeFactor = 2;
		attenuationEffectType="HeliAttenuation";
		#include "cfgHUD.hpp"

		class Turrets:Turrets
                {
                        class CopilotTurret:CopilotTurret
                        {
                                memorypointsgetingunner = "pos codriver";
                                memorypointsgetingunnerdir = "pos codriver dir";
                        };
                       
               };

		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";// name of the effect
				position = "body_vapour_L_E"; // name of the memory point in model
			};

			class WingTipRight
			{
				effectName = "WingVortices"; // name of the effect
				position = "body_vapour_R_E";// name of the memory point in model
			};
			class BodyLeft
			{
				effectName = "BodyVortices";// name of the effect
				position = "body_vapour_L_S"; // name of the memory point in model
			};

			class BodyRight
			{
				effectName = "BodyVortices"; // name of the effect
				position = "body_vapour_R_S";// name of the memory point in model
			};
		};

		soundGetIn[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\getin",
			0.56234097,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\getout",
			0.56234097,
			1,
			40
		};
		soundDammage[]=
		{
			"MV22B\sound\ALERT_AALERTB.wav",
			0.56234097,
			1
		};
		soundEngineOnInt[]=
		{
			"MV22B\sound\ext_start",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"MV22B\sound\ext_start",
			1.77828,
			1,
			500
		};
		soundEngineOffInt[]=
		{
			"MV22B\sound\ext_stop",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"MV22B\sound\ext_stop",
			1.77828,
			1,
			500
		};

		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"MV22B\sound\int_engine_low",
					2.5118899,
					1,
					1200
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"MV22B\sound\ext_engine_hi",
					2.5118899,
					1.2,
					1400
				};
				frequency="1";
				volume="camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"MV22B\sound\ext_forsage",
					1.7782794,
					0.99000001,
					1700
				};
				frequency="1";
				volume="engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.5};
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"MV22B\sound\ext-wind1",
					0.56234097,
					1,
					150
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[]=
				{
					"MV22B\sound\int_engine_low",
					1,
					1
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"MV22B\sound\int_engine_hi",
					1,
					1.2
				};
				frequency="1";
				volume="(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[]=
				{
					"MV22B\sound\int_forsage",
					1,
					1
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"MV22B\sound\int-wind1",
					0.50118721,
					1
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="(1-camPos)*(speed factor[1, 150])";
			};
		};
		
		
		ejectSpeed[]={0,-2,0};
		cabinOpening=0;
		soundLocked[]=
		{
			"MV22B\sound\ALERTA_ALERTB.wav",
			0.1,
			1
		};

		soundIncommingMissile[]=
		{
			"MV22B\sound\ALERT_A.wav",
			0.1,
			1.5
		};

		flapsFrictionCoef=0.31999999;
		landingSpeed=130;
		acceleration=328;
		rudderSensitivity=12;
		envelope[]={0,0.15000001,1.1,3,5,5.8299999,6,5.8499999,5.5,4.8000002,3.5999999,1.8,0};
		driverAction="Plane_Fighter_03_pilot";
		cargoIsCoDriver[]={0,0};
		cargoAction[]=
		{
			"ChopperLight_C_R_static_H",
			"ChopperLight_CB_static_H",
			"ChopperLight_CB_static_H",
			"ChopperLight_CB_static_H",
			"ChopperLight_CB_static_H"
		};
		
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment2"
		};
		
		maxSpeed=509;
		transportSoldier=24;
		vtol=4;
		supplyradius=2;
		armor=60;
		damageResistance=0.60;
		
			class Damage
		{
			tex[]={};
			mat[]={
				"MV22B\data\mv22_sklo.rvmat",
				"MV22B\data\mv22_sklo_damage.rvmat",
				"MV22B\data\mv22_sklo_damage.rvmat",

				"MV22B\data\mv22_sklo_in.rvmat",
				"MV22B\data\mv22_sklo_in_damage.rvmat",
				"MV22B\data\mv22_sklo_in_damage.rvmat",

				"MV22B\data\mv22_01.rvmat",
				"MV22B\data\mv22_01_damage.rvmat",
				"MV22B\data\mv22_01_destruct.rvmat",

				"MV22B\data\mv22_02.rvmat",
				"MV22B\data\mv22_02_damage.rvmat",
				"MV22B\data\mv22_02_destruct.rvmat"
			};
		};




		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		
		selectionRotorStill="engine_static";
		selectionRotorMove="engine_blur";
		
		class UserActions
		{
			class Pack
			{
				displayName="Pack";
				position="zamerny";
				radius=9;
				condition="this animationphase ""pack_engine_1"" !=1";
				statement="[this,1] execvm ""\MV22B\scripts\pack.sqf""";
				onlyforplayer=1;
			};
		
			class unPack
			{
				displayName="unPack";
				position="zamerny";
				radius=9;
				condition="this animationphase ""pack_engine_1"" !=0";
				statement="[this,0] execvm ""\MV22B\scripts\pack2.sqf""";
				onlyforplayer=1;
			};

			class Door1
			{
				displayName="Door Open";
				position="zamerny";
				radius=9;
				condition="this animationphase ""door1_top"" !=1";
				statement="[this,0] execvm ""\MV22B\scripts\Door.sqf""";
				onlyforplayer=1;
			};

			class Door2
			{
				displayName="Door close";
				position="zamerny";
				radius=9;
				condition="this animationphase ""door1_top"" !=0";
				statement="[this,0] execvm ""\MV22B\scripts\Door.sqf""";
				onlyforplayer=1;
			};
	
			class rampup
			{
				displayName="Ramp Open";
				position="zamerny";
				radius=9;
				condition="this animationphase ""ramp_top"" !=1";
				statement="[this,1] execvm ""\MV22B\scripts\ramp.sqf""";
				onlyforplayer=1;
			};

			class rampdown
			{
				displayName="Ramp Close";
				position="zamerny";
				radius=9;
				condition="this animationphase ""ramp_bottom"" !=0";
				statement="[this,0] execvm ""\MV22B\scripts\ramp.sqf""";
				onlyforplayer=1;
			};
		};

		dammageHalf[]={};
		dammageFull[]={};

		class AnimationSources
		{
			class Door_1_1
			{
				source="user";
				animPeriod=0;
			};
			class Ramp
			{
				source="user";
				animPeriod=0;
			};
			class pack_engine_1
			{
				source="user";
				animPeriod=0;
			};
			class engine_prop_1_1_turn: pack_engine_1
			{
			};
			class engine_prop_1_2_turn: pack_engine_1
			{
			};
			class engine_prop_1_3_turn: pack_engine_1
			{
			};
			class engine_prop_2_1_turn: pack_engine_1
			{
			};
			class engine_prop_2_2_turn: pack_engine_1
			{
			};
			class engine_prop_2_3_turn: pack_engine_1
			{
			};
			class engine_prop_1_1_close: pack_engine_1
			{
			};
			class engine_prop_1_3_close: pack_engine_1
			{
			};
			class engine_prop_2_1_close: pack_engine_1
			{
			};
			class engine_prop_2_2_close: pack_engine_1
			{
			};
			class pack_engine_2: pack_engine_1
			{
			};
			class turn_wing: pack_engine_1
			{
			};
		};

		class Reflectors
		{
			class Right
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=90;
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				position="Light_pos";
				direction="Light_dir";
				hitpoint="Light_hitpoint";
				selection="Light";
				useFlare=1;
				flareSize=40;
				flareMaxDistance=450;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=200;
				};
			};
		};

		class Exhausts
		{
			class Exhaust02
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustEffectHeli";
			};
			class Exhaust01
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustEffectHeli";
			};
		};

		class Library
		{
			libTextDesc="$STR_LIB_MV22";
		};

		class RenderTargets
		{
			class driver_display_1
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=1;
					renderQuality=0;
					fov=0.40000001;
				};
			};

			class Gunner_1
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderVisionMode=0;
					renderQuality=0;
					fov=0.5;
				};
			};

			class Gunner_TV
			{
				renderTarget="rendertarget4";
				class CameraView1
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderVisionMode=2;
					renderQuality=0;
					fov=0.69999999;
				};
			};
		};
	};
};
