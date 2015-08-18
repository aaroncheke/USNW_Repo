class CfgPatches
{
	class turtle_MV22B
	{
		units[]=
		{
			"MV-22B"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F"
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		KIA_MV22_Pilot="KIA_MV22_Pilot";
		MV22_Pilot="MV22_Pilot";
		MV22_CoPilot="MV22_CoPilot";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_MV22_Pilot: DefaultDie
		{
			actions="DeadActions";
			file="mv22b\data\anims\KIA_MV22_Pilot.rtm";
			speed=0.5;
			looped="false";
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class MV22_Pilot: Crew
		{
			file="mv22b\data\anims\MV22_Pilot.rtm";
			interpolateTo[]=
			{
				"KIA_MV22_Pilot",
				1
			};
		};
		class MV22_CoPilot: Crew
		{
			file="mv22b\data\anims\MV22_CoPilot.rtm";
			interpolateTo[]=
			{
				"KIA_MV22_Pilot",
				1
			};
		};
	};
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class Turrets;
	};
	class Plane_Base_F: Plane
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class AnimationSources;
		class NewTurret;
	};
	class turtle_MV22B: Plane_Base_F
	{
		destrType="DestructWreck";
		displayName="MV-22B";
		vehicleClass="Air";
		model="\MV22B\mv22.p3d";
		picture="\MV22B\UI\picture_MV22_CA.paa";
		icon="\MV22B\UI\icon_MV22_CA.paa";
		mapSize=28;
		crew="B_Helipilot_F";
		scope=2;
		side=1;
		faction="BLU_F";
		canFloat=0;
		waterAngularDampingCoef=10;
		waterPPInVehicle=0;
		waterResistanceCoef=0.5;
		maxFordingDepth=0.55000001;
		driveOnComponent[]=
		{
			"wheel_1_1",
			"wheel_2_2",
			"wheel_2_1"
		};
		mainRotorSpeed=1;
		backRotorSpeed=1;
		mainBladeRadius=7.5;
		bodyFrictionCoef=0.89999998;
		fuelCapacity=6513;
		fuelConsumptionRate=1.814;
		extCameraPosition[]={0,3,-23};
		gearRetracting=1;
		gearUpTime=4;
		gearDownTime=4;
		accuracy=0.5;
		LockDetectionSystem=9;
		incomingMissileDetectionSystem=18;
		attenuationEffectType="HeliAttenuation";
		rudderInfluence=0.5;
		irScanRangeMin=500;
		irScanRangeMax=7720;
		irScanToEyeFactor=2;
		aileronSensitivity=0.41;
		elevatorSensitivity=0.30000001;
		flapsFrictionCoef=0.31999999;
		AGM_FastRoping=1;
		AGM_FastRoping_Positions[]=
		{
			{0,-6.5,-0.60000002}
		};
		features="Randomization: No						<br />Camo selections: 3 - main body, tail various attachments, engine						<br />Script door sources: CargoRamp_Open, Door_Back_L, Door_Back_R						<br />Script animations: AddGunHolder						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: Slingloads up to 4000 kg						<br />Cargo proxy indexes: 1 to 16";
		slingLoadMemoryPoint="slingLoad";
		maximumLoad=9000;
		slingLoadMaxCargoMass=9000;
		class MFD
		{
			borderLeft=0.090000004;
			borderRight=0.02;
			borderTop=0.02;
			borderBottom=0.1;
			class MFD1
			{
				topLeft="HUD LH1";
				topRight="HUD PH1";
				bottomLeft="HUD LD1";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.27000001};
					pos10[]=
					{
						"0.5+0.9",
						"0.27+0.7"
					};
				};
				class Bones
				{
				};
				class Draw
				{
					alpha=0.89999998;
					color[]={0,1,0};
					clipTL[]={0,0};
					clipBR[]={1,1};
					condition="on";
					class Altitude
					{
						type="text";
						align="left";
						scale=1;
						source="altitudeASL";
						sourceScale=1;
						pos[]=
						{
							{0.28,0.041999999},
							1
						};
						right[]=
						{
							{0.31999999,0.041999999},
							1
						};
						down[]=
						{
							{0.28,0.082000002},
							1
						};
					};
					class Altitude2
					{
						type="text";
						align="left";
						scale=1;
						source="altitudeAGL";
						sourceScale=1;
						pos[]=
						{
							{0.44999999,0.041999999},
							1
						};
						right[]=
						{
							{0.49000001,0.041999999},
							1
						};
						down[]=
						{
							{0.44999999,0.082000002},
							1
						};
					};
					class RPM
					{
						type="text";
						align="left";
						scale=1;
						source="rpm";
						sourceScale=100;
						pos[]=
						{
							{0.63,0.18000001},
							1
						};
						right[]=
						{
							{0.67000002,0.18000001},
							1
						};
						down[]=
						{
							{0.63,0.22},
							1
						};
					};
					class RPM2
					{
						type="text";
						align="left";
						scale=1;
						source="rpm";
						sourceScale=100;
						pos[]=
						{
							{0.80199999,0.18000001},
							1
						};
						right[]=
						{
							{0.84200001,0.18000001},
							1
						};
						down[]=
						{
							{0.80199999,0.22},
							1
						};
					};
					class Fuel
					{
						type="text";
						align="left";
						scale=1;
						source="fuel";
						sourceScale=100;
						pos[]=
						{
							{0.63,0.42500001},
							1
						};
						right[]=
						{
							{0.67000002,0.42500001},
							1
						};
						down[]=
						{
							{0.63,0.465},
							1
						};
					};
					class Fuel2
					{
						type="text";
						align="left";
						scale=1;
						source="fuel";
						sourceScale=100;
						pos[]=
						{
							{0.80199999,0.42500001},
							1
						};
						right[]=
						{
							{0.84200001,0.42500001},
							1
						};
						down[]=
						{
							{0.80199999,0.465},
							1
						};
					};
					class Speed
					{
						type="text";
						align="left";
						scale=1;
						source="speed";
						sourceScale=2.2369399;
						pos[]=
						{
							{0.28,0.22499999},
							1
						};
						right[]=
						{
							{0.31999999,0.22499999},
							1
						};
						down[]=
						{
							{0.28,0.26499999},
							1
						};
					};
				};
			};
		};
		class CopilotTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunBeg="PIP2_dir";
				gunEnd="PIP2_pos";
				memoryPointGunnerOptics="PIP2_dir";
				stabilizedInAxes=4;
				laser=1;
				usepip=1;
				gunnerName="$STR_A3_COPILOT";
				turretInfoType="RscOptics_UAV_gunner";
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Laserbatteries"
				};
				soundServo[]=
				{
					"",
					0.0099999998,
					1,
					30
				};
				gunnerAction="MV22_Pilot";
				gunnerInAction="MV22_Pilot";
				precisegetinout=1;
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				gunnerRightHandAnimName="stick_pilot";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";
				outGunnerMayFire="true";
				inGunnerMayFire="true";
				commanding=-1;
				LODTurnedOut=1100;
				LODTurnedIn=1100;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				startEngine="false";
				gunnerHasFlares="false";
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						name="main_turret_hit";
						visual="gun";
						passThrough=0.2;
						radius=0.25;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						name="main_gun_hit";
						visual="gun";
						passThrough=0.2;
						radius=0.25;
					};
				};
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="body_vapour_L_E";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="body_vapour_R_E";
			};
			class BodyLeft
			{
				effectName="BodyVortices";
				position="body_vapour_L_S";
			};
			class BodyRight
			{
				effectName="BodyVortices";
				position="body_vapour_R_S";
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
			"",
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
		landingSpeed=130;
		acceleration=328;
		rudderSensitivity=12;
		envelope[]={0,0.15000001,1.1,3,5,5.8299999,6,5.8499999,5.5,4.8000002,3.5999999,1.8,0};
		driverAction="ChopperHeavy_R_static_H";
		cargoIsCoDriver[]={0,0};
		cargoAction[]=
		{
			"ChopperHeavy_LP_Static_H"
		};
		GetInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
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
		damageResistance=0.60000002;
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"300Rnd_CMFlare_Chaff_Magazine"
		};
		selectionRotorStill="engine_static";
		selectionRotorMove="engine_blur";
		class UserActions
		{
			class retractrefueling
			{
				displayName="<t color='#1956e3'>Retract Refueling Probe</t>";
				position="zamerny";
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
				radius=10;
				condition="(player==driver this OR player==gunner this)and (this animationPhase ""probe"" < 0.5)";
				statement="this animate [""probe"",1];";
			};
			class extendrefueling
			{
				displayName="<t color='#FF0000'>Extend Refueling Probe</t>";
				position="zamerny";
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
				radius=10;
				condition="(player==driver this OR player==gunner this)and (this animationPhase ""probe"" > 0.5)";
				statement="this animate [""probe"",0];";
			};
			class rampup
			{
				displayName="<t color='#FF0000'>Open Ramp</t>";
				position="zamerny";
				radius=9;
				showwindow=0;
				condition="this animationphase ""ramp_top"" == 0";
				statement="[this,1] execvm ""\MV22B\scripts\ramp.sqf""";
				onlyforplayer=1;
			};
			class rampdown
			{
				displayName="<t color='#1956e3'>Close Ramp</t>";
				position="zamerny";
				radius=9;
				showwindow=0;
				condition="this animationphase ""ramp_bottom"" == 1";
				statement="[this,0] execvm ""\MV22B\scripts\ramp.sqf""";
				onlyforplayer=1;
			};
			class Openrdoor
			{
				displayName="<t color='#FF0000'>Open Right Door</t>";
				position="pos_gunner";
				onlyforplayer=1;
				showwindow=0;
				radius=6;
				condition="(this animationPhase ""door_1_top"" == 0) AND Alive(this)";
				statement="[this,1] execvm ""\MV22B\scripts\crewdoor1.sqf""";
			};
			class Closerdoor: Openrdoor
			{
				displayName="<t color='#1956e3'>Close Right Door</t>";
				condition="(this animationPhase ""door_1_top"" == 1) AND Alive(this)";
				statement="[this,0] execvm ""\MV22B\scripts\crewdoor2.sqf""";
				onlyforplayer=1;
			};
			class Packon
			{
				displayName="<t color='#FF0000'>Pack Engines</t>";
				displayNameDefault="Pack";
				position="PackAction";
				radius=10;
				showwindow=0;
				condition="(this animationPhase ""pack_engine_1"" == 0) and speed this < 1 and !isEngineOn this";
				statement="[this,1] execvm ""\MV22B\scripts\pack.sqf""";
				onlyforplayer=1;
			};
			class unPack
			{
				displayName="<t color='#1956e3'>Unpack Engines</t>";
				displayNameDefault="unPack";
				showwindow=0;
				position="PackAction";
				radius=10;
				condition="(this animationphase ""pack_engine_1"" == 1) and speed this < 1 and !isEngineOn this";
				statement="[this,0] execvm ""\MV22B\scripts\pack.sqf""";
				onlyforplayer=1;
			};
			class InteriorLightsRed
			{
				displayName="<t color='#FF0000'>Red Light</t>";
				displayNameDefault="Red Light";
				showwindow=0;
				radius=10;
				onlyforplayer=1;
			};
			class InteriorLightsGreen
			{
				displayName="<t color='#00FF00'>Green Light</t>";
				displayNameDefault="Green Light";
				showwindow=0;
				radius=10;
				onlyforplayer=1;
			};
			class InteriorLightsWhite
			{
				displayName="<t color='##FFFFFF'>White Light</t>";
				displayNameDefault="White Light";
				showwindow=0;
				radius=10;
				onlyforplayer=1;
			};
		};
		dammageHalf[]={};
		dammageFull[]={};
		class EventHandlers
		{
			init="_this execVM '\MV22B\scripts\init.sqf'";
		};
		class AnimationSources
		{
			class CollisionLights
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class ramp_top
			{
				source="user";
				initPhase=0;
				animPeriod=5;
				sound="ServoRampSound";
			};
			class ramp_bottom
			{
				source="user";
				initPhase=0;
				animPeriod=5;
				sound="ServoRampSound";
			};
			class probe
			{
				source="user";
				initPhase=1;
				animPeriod=5;
				sound="ServoDoorsSound";
			};
			class Door_1_top
			{
				source="user";
				initPhase=0;
				animPeriod=3;
				sound="ServoDoorsSound";
			};
			class Door_2_top
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_1_bottom
			{
				source="user";
				initPhase=0;
				animPeriod=5;
				sound="ServoDoorsSound";
			};
			class pack_engine_1
			{
				source="user";
				animPeriod=20;
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
		class Reflectors: Reflectors /// landing lights of the heli, turned on by AI while in night and "careless" or "safe"
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
				
				position="R_Light_pos";
				direction="R_Light_dir";
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
			class Left
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=90;
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				
				position="L_Light_pos";
				direction="L_Light_dir";
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
		class CollisionLights
		{
			class RotorLights
			{
				color[]={0,0.80000001,0};
				ambient[]={0.079999998,0,0};
				name="RotorLights";
				intensity=100000;
				drawLight=3;
				drawLightSize=0.1;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class InteriorLightsRed
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				name="IntLights";
				intensity=100000;
				drawLight=3;
				drawLightSize=0.1;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class InteriorLightsGreen
			{
				color[]={0,0.80000001,0};
				ambient[]={0.079999998,0,0};
				name="IntLights";
				intensity=100000;
				drawLight=3;
				drawLightSize=0.1;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class InteriorLightsWhite
			{
				color[]={1,1,1,1};
				ambient[]={0.079999998,0,0};
				name="IntLights";
				intensity=50000;
				drawLight=3;
				drawLightSize=0.1;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class SolitRed
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				name="cerveny pozicni";
				intensity=100000;
				drawLight=3;
				drawLightSize=0.1;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class SolidGreen
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="zeleny pozicni";
				intensity=100000;
				drawLight=3;
				drawLightSize=0.1;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class SolidWhite
			{
				color[]={1,1,1,1};
				ambient[]={0.2,0.2,0.2,1};
				name="bily pozicni";
				intensity=100000;
				blinking=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=0;
				drawLightSize=0.1;
				drawLightCenterSize=0.039999999;
			};
			class StaticWhite1
			{
				color[]={1,1,1,1};
				ambient[]={0.2,0.2,0.2,1};
				name="bily pozicni blik";
				intensity=100000;
				blinking=1;
				blinkingPattern[]={0.1,0.80000001};
				blinkingPatternGuarantee=0;
				drawLightSize=0.1;
				drawLightCenterSize=0.039999999;
			};
			class StaticWhite2
			{
				color[]={1,1,1,1};
				ambient[]={0.2,0.2,0.2,1};
				name="doplnovani";
				intensity=100000;
				blinking=1;
				blinkingPattern[]={0.1,0.80000001};
				blinkingPatternGuarantee=0;
				drawLightSize=0.1;
				drawLightCenterSize=0.039999999;
			};
			class StaticRed
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				name="cerveny pozicni blik";
				intensity=100000;
				blinking=1;
				blinkingPattern[]={0.1,0.69999999};
				blinkingPatternGuarantee=0;
				drawLightSize=0.1;
				drawLightCenterSize=0.039999999;
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
