class CfgPatches
{
	class turtle_F18C
	{
		units[]=
		{
			"F-18C"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F"
		};
	};
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
	};
	class Plane_CAS_02_base_F: Plane_Base_F
	{
		features="Randomization: No						<br />Camo selections: 2 - the main body, wings lower part of body						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None 						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: None";
		mapSize=16.370001;
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Plane_CAS_02_base_F";
		displayName="$STR_A3_CfgVehicles_O_Plane_02_F0";
		scope=0;
		model="\A3\Air_F_EPC\Plane_CAS_02\Plane_cas_02_F.p3d";
		icon="\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Map_Plane_cas_02_F.paa";
		picture="\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Plane_cas_02_F.paa";
		destrType="DestructWreck";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		armor=60;
		armorStructural=1;
		damageResistance=0.0040000002;
		accuracy=0.2;
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_F18C_Library0";
		};
		driverAction="pilot_plane_cas_02";
		getinAction="pos driver";
		getoutaction="pos driver dir";
		precisegetinout=1;
		viewDriverShadowDiff=0.5;
		viewDriverShadowAmb=0.5;
		lockDetectionSystem=8;
		incomingMissileDetectionSystem=16;
		class Turrets
		{
		};
		class TransportItems
		{
		};
		attenuationEffectType="HeliAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F_EPC\CAS_02\TO_getin",
			1,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_EPC\CAS_02\getout",
			1,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_EPC\CAS_02\CAS_02_start_int",
			0.79432821,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_EPC\CAS_02\CAS_02_start_ext",
			1,
			1,
			500
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_EPC\CAS_02\CAS_02_stop_int",
			0.79432821,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_EPC\CAS_02\CAS_02_stop_ext",
			1,
			1,
			500
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.1,
			1.5
		};
		soundGearUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_up",
			0.79432821,
			1,
			150
		};
		soundGearDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_down",
			0.79432821,
			1,
			150
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Up",
			0.63095737,
			1,
			100
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Down",
			0.63095737,
			1,
			100
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"A3\Sounds_F_EPC\CAS_02\CAS_02_engine_idle_ext",
					1.7782794,
					1,
					2100
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"A3\Sounds_F_EPC\CAS_02\CAS_02_engine_max_ext",
					1.9952624,
					1.2,
					2500
				};
				frequency="1";
				volume="camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"A3\Sounds_F_EPC\CAS_02\CAS_02_forsage_ext",
					2.5118864,
					1.2,
					2800
				};
				frequency="1";
				volume="engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.5};
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F_EPC\CAS_02\noise",
					0.56234133,
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
					"A3\Sounds_F_EPC\CAS_02\CAS_02_engine_idle_int",
					0.63095737,
					1
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"A3\Sounds_F_EPC\CAS_02\CAS_02_engine_max_int",
					0.63095737,
					1.2
				};
				frequency="1";
				volume="(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[]=
				{
					"A3\Sounds_F_EPC\CAS_02\CAS_02_forsage_int",
					0.63095737,
					1.2
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F_EPC\CAS_02\noise_int",
					0.50118721,
					1
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="(1-camPos)*(speed factor[1, 150])";
			};
		};
		altNoForce=35000;
		altFullForce=12500;
		maxSpeed=1600;
		aileronSensitivity=0.5;
		elevatorSensitivity=0.80000001;
		rudderInfluence=0.5;
		flapsFrictionCoef=0.31999999;
		angleOfIndicence=0.052359872;
		draconicForceXCoef=5;
		draconicForceYCoef=1;
		draconicForceZCoef=0.5;
		draconicTorqueXCoef=0.15000001;
		draconicTorqueYCoef=1;
		envelope[]={0,0.1,1,2,3.25,4,4,3,2,1,0.5};
		thrustCoef[]={1,1.2,2.7,1.8,1.3,1.2,1.2,1.1,0.89999998,0.40000001,0.1,0,0};
		acceleration=900;
		landingSpeed=140;
		landingAoa=0.17453299;
		threat[]={1,1,1};
		irScanRangeMin=500;
		irScanRangeMax=15540;
		irScanToEyeFactor=2;
		laserScanner=1;
		minFireTime=30;
		gunAimDown=0.028999999;
		headAimDown=0;
		cabinOpening=1;
		driverLeftHandAnimName="";
		driverRightHandAnimName="ControlStick";
		memoryPointsGetInDriver="GetIn_driver_pos";
		memoryPointsGetInDriverDir="GetIn_driver_dir";
		memoryPointLRocket="Rocket_Left";
		memoryPointRRocket="Rocket_Right";
		memoryPointCM[]=
		{
			"FlareLauncher_1_pos",
			"FlareLauncher_2_pos"
		};
		memoryPointCMDir[]=
		{
			"FlareLauncher_1_dir",
			"FlareLauncher_2_dir"
		};
		memoryPointLDust="WheelDust_left_pos";
		memoryPointRDust="WheelDust_right_pos";
		memoryPointGun="Cannon_barrel_end";
		selectionFireAnim="Cannon_muzzleflash";
		driveOnComponent[]=
		{
			"Gear_Front",
			"Gear_Rear",
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position="Exhaust_1_pos";
				direction="Exhaust_1_dir";
				effect="ExhaustsEffectJet";
			};
			class Exhaust_2
			{
				position="Exhaust_2_pos";
				direction="Exhaust_2_dir";
				effect="ExhaustsEffectJet";
			};
		};
		class WingVortices
		{
			class BodyLeft
			{
				effectName="BodyVortices";
				position="Vapour_body_left_pos";
			};
			class BodyRight
			{
				effectName="BodyVortices";
				position="Vapour_body_right_pos";
			};
			class WingTipLeft
			{
				effectName="WingVortices";
				position="Vapour_wintip_left_pos";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="Vapour_wintip_right_pos";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Light_1",
				"Gear_2_light_1",
				"Gear_2_light_2"
			},
			
			{
				"Light_2",
				"Gear_3_light_1",
				"Gear_3_light_2"
			}
		};
		class Reflectors
		{
			class Light_1
			{
				color[]={0.85000002,0.94999999,1};
				ambient[]={0.0085000005,0.0094999997,0.0099999998};
				intensity=500000;
				size=1;
				innerAngle=15;
				outerAngle=40;
				coneFadeCoef=5;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hit";
				selection="";
				useFlare=0;
				flareSize=1.5;
				flareMaxDistance=500;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=5;
					quadratic=2;
					hardLimitStart=400;
					hardLimitEnd=500;
				};
			};
			class Light_2: Light_1
			{
				position="Light_2_pos";
				direction="Light_2_dir";
				hitpoint="Light_2_hit";
			};
			class Gear_2_light_1: Light_1
			{
				color[]={0.94999999,1,0.89999998};
				ambient[]={0.0094999997,0.0099999998,0.0089999996};
				intensity=100000;
				innerAngle=20;
				outerAngle=45;
				coneFadeCoef=8;
				position="Gear_2_light_1_pos";
				direction="Gear_2_light_1_dir";
				hitpoint="Gear_2_light_1_hit";
				selection="Gear_2_light_1_hide";
				useFlare=1;
				flareSize=1;
				flareMaxDistance=500;
				class Attenuation: Attenuation
				{
					linear=10;
					quadratic=5;
					hardLimitStart=250;
					hardLimitEnd=300;
				};
			};
			class Gear_2_light_2: Light_1
			{
				color[]={0.89999998,1,0.80000001};
				ambient[]={0.0089999996,0.0099999998,0.0080000004};
				intensity=25000;
				innerAngle=0;
				outerAngle=90;
				coneFadeCoef=12;
				position="Gear_2_light_2_pos";
				direction="Gear_2_light_2_dir";
				hitpoint="Gear_2_light_2_hit";
				selection="Gear_2_light_2_hide";
				useFlare=1;
				flareSize=0.5;
				flareMaxDistance=30;
				class Attenuation: Attenuation
				{
					linear=15;
					quadratic=7;
					hardLimitStart=75;
					hardLimitEnd=100;
				};
			};
			class Gear_3_light_1: Gear_2_light_1
			{
				position="Gear_3_light_1_pos";
				direction="Gear_3_light_1_dir";
				hitpoint="Gear_3_light_1_hit";
				selection="Gear_3_light_1_hide";
			};
			class Gear_3_light_2: Gear_2_light_2
			{
				position="Gear_3_light_2_pos";
				direction="Gear_3_light_2_dir";
				hitpoint="Gear_3_light_2_hit";
				selection="Gear_3_light_2_hide";
			};
			class Gear_1_light_1: Gear_2_light_1
			{
				intensity=0;
				position="Gear_1_light_1_pos";
				direction="Gear_1_light_1_dir";
				hitpoint="Gear_1_light_1_hit";
				selection="Gear_1_light_1_hide";
				activeLight=0;
			};
			class Gear_1_light_2: Gear_2_light_2
			{
				intensity=0;
				position="Gear_1_light_2_pos";
				direction="Gear_1_light_2_dir";
				hitpoint="Gear_1_light_2_hit";
				selection="Gear_1_light_2_hide";
				activeLight=0;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Cannon_30mm_ammorandom
			{
				source="ammorandom";
				weapon="Cannon_30mm_Plane_CAS_02_F";
			};
			class Cannon_30mm_revolving
			{
				source="revolving";
				weapon="Cannon_30mm_Plane_CAS_02_F";
			};
			class Missile_AA_03_revolving
			{
				source="revolving";
				weapon="Missile_AA_03_Plane_CAS_02_F";
			};
			class Missile_AGM_01_revolving
			{
				source="revolving";
				weapon="Missile_AGM_01_Plane_CAS_02_F";
			};
			class Rocket_03_HE_revolving
			{
				source="revolving";
				weapon="Rocket_03_HE_Plane_CAS_02_F";
			};
			class Rocket_03_AP_revolving
			{
				source="revolving";
				weapon="Rocket_03_AP_Plane_CAS_02_F";
			};
			class Bomb_03_revolving
			{
				source="revolving";
				weapon="Bomb_03_Plane_CAS_02_F";
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_EPC\Plane_CAS_02\Data\fighter02_ext01_co.paa",
			"\A3\Air_F_EPC\Plane_CAS_02\Data\fighter02_ext02_co.paa"
		};
		class HitPoints: HitPoints
		{
			class HitAmmo: HitHull
			{
				armor=1;
				explosionShielding=3;
				radius=0.30000001;
				passThrough=1;
				name="ammo_hit";
				visual="ammo_hit";
				convexComponent="ammo_hit";
			};
			class HitAvionics: HitHull
			{
				armor=1.5;
				explosionShielding=2;
				radius=0.64999998;
				passThrough=1;
				name="avionics_hit";
				visual="avionics_hit";
				convexComponent="avionics_hit";
			};
			class HitEngine1: HitHull
			{
				armor=2;
				explosionShielding=3;
				radius=0.34999999;
				passThrough=1;
				name="engine_1_hit";
				visual="engine_1_hit";
				convexComponent="engine_1_hit";
			};
			class HitEngine2: HitEngine1
			{
				name="engine_2_hit";
				visual="engine_2_hit";
				convexComponent="engine_2_hit";
			};
			class HitEngine: HitEngine2
			{
				armor=999;
				name="engine_hit";
				visual="";
				convexComponent="engine_hit";
				depends="0.5*(HitEngine1 + HitEngine2)";
			};
			class HitFuel: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				radius=2;
				passThrough=1;
				name="fuel_hit";
				visual="fuel_hit";
				convexComponent="fuel_hit";
			};
			class HitGlass1: HitHull
			{
				armor=3;
				explosionShielding=2;
				radius=0.69999999;
				passThrough=0;
				name="glass_1";
				visual="glass_1";
				convexComponent="glass_1";
			};
			class HitGlass2: HitGlass1
			{
				armor=2;
				explosionShielding=3;
				radius=0.69999999;
				passThrough=0;
				name="glass_2";
				visual="glass_2";
				convexComponent="glass_2";
			};
			class HitHull: HitHull
			{
				armor=100;
				explosionShielding=1;
				radius=9;
				passThrough=0.5;
				name="hull_hit";
				visual="zbytek";
				depends="Total";
				minimumHit=0.050000001;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext01.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext01_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext01_destruct.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext02.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext02_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_ext02_destruct.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_int01.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_int01_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_int01_destruct.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_int02.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_int02_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_int02_destruct.rvmat",
				"A3\data_f\glass_veh.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_Glass_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Fighter02_Glass_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Glass_veh_int.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Glass_veh_int_damage.rvmat",
				"A3\Air_F_EPC\Plane_CAS_02\Data\Glass_veh_int_damage.rvmat"
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0,1,0,0.1};
				enableParallax=1;
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.5,0.52999997};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.52999997};
						pos10[]={1.5,1.53};
					};
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.52999997};
						pos10[]={1.5,1.53};
					};
					class Level0
					{
						type="horizon";
						pos0[]={0.5,0.52999997};
						pos10[]={1.5,1.53};
						angle=0;
					};
					class TerrainBone
					{
						type="linear";
						source="altitudeAGL";
						sourceScale=1;
						min=0;
						max=200;
						minPos[]={0,0.66600001};
						maxPos[]={0,0.40000001};
					};
				};
				class Draw
				{
					color[]={1,0.89999998,0.1};
					alpha=0.40000001;
					condition="on";
					class Horizont
					{
						clipTL[]={0.25,0.25};
						clipBR[]={0.75,0.75};
						class Dimmed
						{
							class Level00
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200 * 1.4",
											"0 * 1.4"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125 * 1.4",
											"0 * 1.4"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"-0.045 * 1.4",
											"0 * 1.4"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.005 * 1.4",
											"0 * 1.4"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"0.005 * 1.4",
											"0 * 1.4"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"0.045 * 1.4",
											"0 * 1.4"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"0.125 * 1.4",
											"0 * 1.4"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"0.200 * 1.4",
											"0 * 1.4"
										},
										1
									}
								};
							};
							class Level2M5: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200 * 1.4",
											"-1.0 / 10 * 5"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125 * 1.4",
											"-1.0 / 10 * 5"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125 * 1.4",
											"-1.0 / 10 * 5"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200 * 1.4",
											"-1.0 / 10 * 5"
										},
										1
									}
								};
							};
							class VALM2_1_5
							{
								type="text";
								source="static";
								text=5;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"Level0",
									
									{
										"0.000 * 1.4",
										"-0.020 * 1.4 - 1.0 / 10 * 5"
									},
									1
								};
								right[]=
								{
									"Level0",
									
									{
										"0.050 * 1.4",
										"-0.020 * 1.4 - 1.0 / 10 * 5"
									},
									1
								};
								down[]=
								{
									"Level0",
									
									{
										"0.000 * 1.4",
										"+0.020 * 1.4 - 1.0 / 10 * 5"
									},
									1
								};
							};
							class Level2P5: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200 * 1.4",
											"+1.0 / 10 * 5"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125 * 1.4",
											"+1.0 / 10 * 5"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125 * 1.4",
											"+1.0 / 10 * 5"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200 * 1.4",
											"+1.0 / 10 * 5"
										},
										1
									}
								};
							};
							class VALP2_1_5
							{
								type="text";
								source="static";
								text=-5;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"Level0",
									
									{
										"0.000 * 1.4",
										"-0.020 * 1.4 + 1.0 / 10 * 5"
									},
									1
								};
								right[]=
								{
									"Level0",
									
									{
										"0.050 * 1.4",
										"-0.020 * 1.4 + 1.0 / 10 * 5"
									},
									1
								};
								down[]=
								{
									"Level0",
									
									{
										"0.000 * 1.4",
										"+0.020 * 1.4 + 1.0 / 10 * 5"
									},
									1
								};
							};
							class Level2M10: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200 * 1.4",
											"-1.0 / 10 * 10"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125 * 1.4",
											"-1.0 / 10 * 10"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125 * 1.4",
											"-1.0 / 10 * 10"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200 * 1.4",
											"-1.0 / 10 * 10"
										},
										1
									}
								};
							};
							class VALM2_1_10
							{
								type="text";
								source="static";
								text=10;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"Level0",
									
									{
										"0.000 * 1.4",
										"-0.020 * 1.4 - 1.0 / 10 * 10"
									},
									1
								};
								right[]=
								{
									"Level0",
									
									{
										"0.050 * 1.4",
										"-0.020 * 1.4 - 1.0 / 10 * 10"
									},
									1
								};
								down[]=
								{
									"Level0",
									
									{
										"0.000 * 1.4",
										"+0.020 * 1.4 - 1.0 / 10 * 10"
									},
									1
								};
							};
							class Level2P10: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200 * 1.4",
											"+1.0 / 10 * 10"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125 * 1.4",
											"+1.0 / 10 * 10"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125 * 1.4",
											"+1.0 / 10 * 10"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200 * 1.4",
											"+1.0 / 10 * 10"
										},
										1
									}
								};
							};
							class VALP2_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"Level0",
									
									{
										"0.000 * 1.4",
										"-0.020 * 1.4 + 1.0 / 10 * 10"
									},
									1
								};
								right[]=
								{
									"Level0",
									
									{
										"0.050 * 1.4",
										"-0.020 * 1.4 + 1.0 / 10 * 10"
									},
									1
								};
								down[]=
								{
									"Level0",
									
									{
										"0.000 * 1.4",
										"+0.020 * 1.4 + 1.0 / 10 * 10"
									},
									1
								};
							};
							class Level2M15: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200 * 1.4",
											"-1.0 / 10 * 15"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125 * 1.4",
											"-1.0 / 10 * 15"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125 * 1.4",
											"-1.0 / 10 * 15"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200 * 1.4",
											"-1.0 / 10 * 15"
										},
										1
									}
								};
							};
							class VALM2_1_15
							{
								type="text";
								source="static";
								text=15;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"Level0",
									
									{
										"0.000 * 1.4",
										"-0.020 * 1.4 - 1.0 / 10 * 15"
									},
									1
								};
								right[]=
								{
									"Level0",
									
									{
										"0.050 * 1.4",
										"-0.020 * 1.4 - 1.0 / 10 * 15"
									},
									1
								};
								down[]=
								{
									"Level0",
									
									{
										"0.000 * 1.4",
										"+0.020 * 1.4 - 1.0 / 10 * 15"
									},
									1
								};
							};
							class Level2P15: Level00
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										
										{
											"-0.200 * 1.4",
											"+1.0 / 10 * 15"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"-0.125 * 1.4",
											"+1.0 / 10 * 15"
										},
										1
									},
									{},
									
									{
										"Level0",
										
										{
											"+0.125 * 1.4",
											"+1.0 / 10 * 15"
										},
										1
									},
									
									{
										"Level0",
										
										{
											"+0.200 * 1.4",
											"+1.0 / 10 * 15"
										},
										1
									}
								};
							};
							class VALP2_1_15
							{
								type="text";
								source="static";
								text=-15;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"Level0",
									
									{
										"0.000 * 1.4",
										"-0.020 * 1.4 + 1.0 / 10 * 15"
									},
									1
								};
								right[]=
								{
									"Level0",
									
									{
										"0.050 * 1.4",
										"-0.020 * 1.4 + 1.0 / 10 * 15"
									},
									1
								};
								down[]=
								{
									"Level0",
									
									{
										"0.000 * 1.4",
										"+0.020 * 1.4 + 1.0 / 10 * 15"
									},
									1
								};
							};
						};
					};
					class PlaneOrientationCrosshair
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.125,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.050000001,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.025,0.050000001},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.025,0.050000001},
								1
							},
							
							{
								"PlaneOrientation",
								{0.050000001,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.125,0},
								1
							}
						};
					};
					class PlaneMovementCrosshair
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{0,0.02},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.039999999},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							}
						};
					};
					class WeaponName
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.94},
							1
						};
						right[]=
						{
							{0.079999998,0.94},
							1
						};
						down[]=
						{
							{0.029999999,0.98000002},
							1
						};
					};
					class AmmoCount
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.88999999},
							1
						};
						right[]=
						{
							{0.079999998,0.88999999},
							1
						};
						down[]=
						{
							{0.029999999,0.93000001},
							1
						};
					};
					class FlapsGroup
					{
						type="group";
						condition="flaps";
						class FlapsText
						{
							type="text";
							source="static";
							text="FLAPS";
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53 - 0.045"
								},
								1
							};
							right[]=
							{
								
								{
									0.079999998,
									"0.53 - 0.045"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53 - 0.005"
								},
								1
							};
						};
					};
					class GearGroup
					{
						type="group";
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.005"
								},
								1
							};
							right[]=
							{
								
								{
									0.079999998,
									"0.53 + 0.005"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.045"
								},
								1
							};
						};
					};
					class StallGroup
					{
						type="group";
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									0.5,
									"0.53 - 0.25"
								},
								1
							};
							right[]=
							{
								
								{
									0.55000001,
									"0.53 - 0.25"
								},
								1
							};
							down[]=
							{
								
								{
									0.5,
									"0.53 - 0.21"
								},
								1
							};
						};
					};
					class LightsGroup
					{
						type="group";
						condition="lights";
						class LightsText
						{
							type="text";
							source="static";
							text="LIGHTS";
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.055"
								},
								1
							};
							right[]=
							{
								
								{
									0.079999998,
									"0.53 + 0.055"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.095"
								},
								1
							};
						};
					};
					class CollisionLightsGroup
					{
						type="group";
						condition="collisionlights";
						class CollisionLightsText
						{
							type="text";
							source="static";
							text="A-COL";
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.105"
								},
								1
							};
							right[]=
							{
								
								{
									0.079999998,
									"0.53 + 0.105"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.145"
								},
								1
							};
						};
					};
					class PitchNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.29578;
						align="right";
						scale=1;
						pos[]=
						{
							{0.50999999,0.88999999},
							1
						};
						right[]=
						{
							{0.56,0.88999999},
							1
						};
						down[]=
						{
							{0.50999999,0.93000001},
							1
						};
					};
					class PitchText
					{
						type="text";
						source="static";
						text="PITCH";
						align="left";
						scale=1;
						pos[]=
						{
							{0.49000001,0.88999999},
							1
						};
						right[]=
						{
							{0.54000002,0.88999999},
							1
						};
						down[]=
						{
							{0.49000001,0.93000001},
							1
						};
					};
					class RollNumber
					{
						type="text";
						source="horizonBank";
						sourceScale=57.29578;
						align="right";
						scale=1;
						pos[]=
						{
							{0.50999999,0.94},
							1
						};
						right[]=
						{
							{0.56,0.94},
							1
						};
						down[]=
						{
							{0.50999999,0.98000002},
							1
						};
					};
					class RollText
					{
						type="text";
						source="static";
						text="ROLL";
						align="left";
						scale=1;
						pos[]=
						{
							{0.49000001,0.94},
							1
						};
						right[]=
						{
							{0.54000002,0.94},
							1
						};
						down[]=
						{
							{0.49000001,0.98000002},
							1
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="right";
						scale=1;
						pos[]=
						{
							{0.13,0.14},
							1
						};
						right[]=
						{
							{0.18000001,0.14},
							1
						};
						down[]=
						{
							{0.13,0.18000001},
							1
						};
					};
					class SpeedText
					{
						type="text";
						source="static";
						text="SPD";
						align="left";
						scale=1;
						pos[]=
						{
							{0.11,0.14},
							1
						};
						right[]=
						{
							{0.16,0.14},
							1
						};
						down[]=
						{
							{0.11,0.18000001},
							1
						};
					};
					class TerrainGroup
					{
						type="group";
						clipTL[]={0,0};
						clipBR[]={1,0.60000002};
						class TerrainArrow
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									
									{
										"0.86 - 0.018",
										0.40000001
									},
									1
								},
								
								{
									{0.86000001,0.40000001},
									1
								},
								{},
								
								{
									"TerrainBone",
									
									{
										"0.86 - 0.018",
										"0.0 - 0.016"
									},
									1
								},
								
								{
									"TerrainBone",
									{0.86000001,0},
									1
								},
								
								{
									"TerrainBone",
									
									{
										"0.86 - 0.018",
										"0.0 + 0.016"
									},
									1
								}
							};
						};
					};
					class TerrainText
					{
						type="text";
						source="static";
						text="ATL";
						align="left";
						scale=1;
						pos[]=
						{
							{0.85000002,0.1},
							1
						};
						right[]=
						{
							{0.89999998,0.1},
							1
						};
						down[]=
						{
							{0.85000002,0.14},
							1
						};
					};
					class TerrainNumber
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.85000002,0.14},
							1
						};
						right[]=
						{
							{0.89999998,0.14},
							1
						};
						down[]=
						{
							{0.85000002,0.18000001},
							1
						};
					};
					class AltitudeNumber
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.88999999,0.14},
							1
						};
						right[]=
						{
							{0.94,0.14},
							1
						};
						down[]=
						{
							{0.88999999,0.18000001},
							1
						};
					};
					class AltitudeText
					{
						type="text";
						source="static";
						text="ASL";
						align="right";
						scale=1;
						pos[]=
						{
							{0.88999999,0.1},
							1
						};
						right[]=
						{
							{0.94,0.1},
							1
						};
						down[]=
						{
							{0.88999999,0.14},
							1
						};
					};
					class AltitudeArrow
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								
								{
									"0.88 + 0.018",
									"0.40 - 0.016"
								},
								1
							},
							
							{
								{0.88,0.40000001},
								1
							},
							
							{
								
								{
									"0.88 + 0.018",
									"0.40 + 0.016"
								},
								1
							}
						};
					};
					class AltitudeLine
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								{0.87,0.60000002},
								1
							},
							
							{
								{0.87,0.2},
								1
							}
						};
					};
					class AltitudeScale
					{
						type="scale";
						horizontal=0;
						source="altitudeASL";
						sourceScale=1;
						width=4;
						top=0.60000002;
						center=0.40000001;
						bottom=0.2;
						lineXleft=0.88;
						lineYright=0.88999999;
						lineXleftMajor=0.88;
						lineYrightMajor=0.89999998;
						majorLineEach=5;
						numberEach=5;
						step=20;
						stepSize="(0.60 - 0.20) / 15";
						align="right";
						scale=1;
						pos[]={0.91000003,0.57999998};
						right[]={0.95999998,0.57999998};
						down[]={0.91000003,0.62};
					};
					class ClimbNumber
					{
						type="text";
						source="vspeed";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.88999999,0.94},
							1
						};
						right[]=
						{
							{0.94,0.94},
							1
						};
						down[]=
						{
							{0.88999999,0.98000002},
							1
						};
					};
					class ClimbText
					{
						type="text";
						source="static";
						text="CLIMB";
						align="left";
						scale=1;
						pos[]=
						{
							{0.87,0.94},
							1
						};
						right[]=
						{
							{0.92000002,0.94},
							1
						};
						down[]=
						{
							{0.87,0.98000002},
							1
						};
					};
					class ClimbArrow
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								
								{
									"0.88 + 0.018",
									"0.80 - 0.016"
								},
								1
							},
							
							{
								{0.88,0.80000001},
								1
							},
							
							{
								
								{
									"0.88 + 0.018",
									"0.80 + 0.016"
								},
								1
							}
						};
					};
					class ClimbLine
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								{0.87,0.92500001},
								1
							},
							
							{
								{0.87,0.67500001},
								1
							}
						};
					};
					class ClimbScale
					{
						type="scale";
						horizontal=0;
						source="vspeed";
						sourceScale=1;
						width=4;
						top=0.92500001;
						center=0.80000001;
						bottom=0.67500001;
						lineXleft=0.88;
						lineYright=0.88999999;
						lineXleftMajor=0.88;
						lineYrightMajor=0.89999998;
						majorLineEach=2;
						numberEach=4;
						step=5;
						stepSize="(0.925 - 0.675) / 15";
						align="right";
						scale=1;
						pos[]={0.91000003,0.90499997};
						right[]={0.95999998,0.90499997};
						down[]={0.91000003,0.94499999};
					};
					class HeadingArrow
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								
								{
									"0.5 - 0.02",
									"0.11 - 0.02"
								},
								1
							},
							
							{
								{0.5,0.11},
								1
							},
							
							{
								
								{
									"0.5 + 0.02",
									"0.11 - 0.02"
								},
								1
							}
						};
					};
					class HeadingLine
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								{0.30000001,0.12},
								1
							},
							
							{
								{0.69999999,0.12},
								1
							}
						};
					};
					class HeadingScale
					{
						type="scale";
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=4;
						top=0.30000001;
						center=0.5;
						bottom=0.69999999;
						lineXleft="0.06 + 0.05";
						lineYright="0.05 + 0.05";
						lineXleftMajor="0.06 + 0.05";
						lineYrightMajor="0.04 + 0.05";
						majorLineEach=5;
						numberEach=5;
						step="18 / 9";
						stepSize="(0.70 - 0.3) / 15";
						align="center";
						scale=1;
						pos[]=
						{
							0.30000001,
							"0.0 + 0.05"
						};
						right[]=
						{
							0.34999999,
							"0.0 + 0.05"
						};
						down[]=
						{
							0.30000001,
							"0.04 + 0.05"
						};
					};
					class AAMissileCrosshairGroup
					{
						type="group";
						condition="AAmissile";
						class AAMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.25},
									1
								},
								
								{
									"WeaponAim",
									{0.043400001,-0.2462},
									1
								},
								
								{
									"WeaponAim",
									{0.085500002,-0.234925},
									1
								},
								
								{
									"WeaponAim",
									{0.125,-0.2165},
									1
								},
								
								{
									"WeaponAim",
									{0.16069999,-0.19149999},
									1
								},
								
								{
									"WeaponAim",
									{0.19149999,-0.16069999},
									1
								},
								
								{
									"WeaponAim",
									{0.2165,-0.125},
									1
								},
								
								{
									"WeaponAim",
									{0.234925,-0.085500002},
									1
								},
								
								{
									"WeaponAim",
									{0.2462,-0.043400001},
									1
								},
								
								{
									"WeaponAim",
									{0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{0.2462,0.043400001},
									1
								},
								
								{
									"WeaponAim",
									{0.234925,0.085500002},
									1
								},
								
								{
									"WeaponAim",
									{0.2165,0.125},
									1
								},
								
								{
									"WeaponAim",
									{0.19149999,0.16069999},
									1
								},
								
								{
									"WeaponAim",
									{0.16069999,0.19149999},
									1
								},
								
								{
									"WeaponAim",
									{0.125,0.2165},
									1
								},
								
								{
									"WeaponAim",
									{0.085500002,0.234925},
									1
								},
								
								{
									"WeaponAim",
									{0.043400001,0.2462},
									1
								},
								
								{
									"WeaponAim",
									{0,0.25},
									1
								},
								
								{
									"WeaponAim",
									{-0.043400001,0.2462},
									1
								},
								
								{
									"WeaponAim",
									{-0.085500002,0.234925},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,0.2165},
									1
								},
								
								{
									"WeaponAim",
									{-0.16069999,0.19149999},
									1
								},
								
								{
									"WeaponAim",
									{-0.19149999,0.16069999},
									1
								},
								
								{
									"WeaponAim",
									{-0.2165,0.125},
									1
								},
								
								{
									"WeaponAim",
									{-0.234925,0.085500002},
									1
								},
								
								{
									"WeaponAim",
									{-0.2462,0.043400001},
									1
								},
								
								{
									"WeaponAim",
									{-0.25,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.2462,-0.043400001},
									1
								},
								
								{
									"WeaponAim",
									{-0.234925,-0.085500002},
									1
								},
								
								{
									"WeaponAim",
									{-0.2165,-0.125},
									1
								},
								
								{
									"WeaponAim",
									{-0.19149999,-0.16069999},
									1
								},
								
								{
									"WeaponAim",
									{-0.16069999,-0.19149999},
									1
								},
								
								{
									"WeaponAim",
									{-0.125,-0.2165},
									1
								},
								
								{
									"WeaponAim",
									{-0.085500002,-0.234925},
									1
								},
								
								{
									"WeaponAim",
									{-0.043400001,-0.2462},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.25},
									1
								}
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition="ATmissile";
						type="group";
						class ATMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										-0.15000001,
										"-0.15 + 0.02"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										-0.15000001,
										"0.15 - 0.02"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										0.15000001,
										"-0.15 + 0.02"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										0.15000001,
										"0.15 - 0.02"
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"-0.15 + 0.02",
										-0.15000001
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"-0.15 + 0.02",
										0.15000001
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"0.15 - 0.02",
										-0.15000001
									},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									
									{
										"0.15 - 0.02",
										0.15000001
									},
									1
								}
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{0,-0.1},
									1
								},
								
								{
									"WeaponAim",
									{0.01736,-0.098480001},
									1
								},
								
								{
									"WeaponAim",
									{0.034200002,-0.093970001},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,-0.086599998},
									1
								},
								
								{
									"WeaponAim",
									{0.064280003,-0.0766},
									1
								},
								
								{
									"WeaponAim",
									{0.0766,-0.064280003},
									1
								},
								
								{
									"WeaponAim",
									{0.086599998,-0.050000001},
									1
								},
								
								{
									"WeaponAim",
									{0.093970001,-0.034200002},
									1
								},
								
								{
									"WeaponAim",
									{0.098480001,-0.01736},
									1
								},
								
								{
									"WeaponAim",
									{0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{0.098480001,0.01736},
									1
								},
								
								{
									"WeaponAim",
									{0.093970001,0.034200002},
									1
								},
								
								{
									"WeaponAim",
									{0.086599998,0.050000001},
									1
								},
								
								{
									"WeaponAim",
									{0.0766,0.064280003},
									1
								},
								
								{
									"WeaponAim",
									{0.064280003,0.0766},
									1
								},
								
								{
									"WeaponAim",
									{0.050000001,0.086599998},
									1
								},
								
								{
									"WeaponAim",
									{0.034200002,0.093970001},
									1
								},
								
								{
									"WeaponAim",
									{0.01736,0.098480001},
									1
								},
								
								{
									"WeaponAim",
									{0,0.1},
									1
								},
								
								{
									"WeaponAim",
									{-0.01736,0.098480001},
									1
								},
								
								{
									"WeaponAim",
									{-0.034200002,0.093970001},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,0.086599998},
									1
								},
								
								{
									"WeaponAim",
									{-0.064280003,0.0766},
									1
								},
								
								{
									"WeaponAim",
									{-0.0766,0.064280003},
									1
								},
								
								{
									"WeaponAim",
									{-0.086599998,0.050000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.093970001,0.034200002},
									1
								},
								
								{
									"WeaponAim",
									{-0.098480001,0.01736},
									1
								},
								
								{
									"WeaponAim",
									{-0.1,0},
									1
								},
								
								{
									"WeaponAim",
									{-0.098480001,-0.01736},
									1
								},
								
								{
									"WeaponAim",
									{-0.093970001,-0.034200002},
									1
								},
								
								{
									"WeaponAim",
									{-0.086599998,-0.050000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.0766,-0.064280003},
									1
								},
								
								{
									"WeaponAim",
									{-0.064280003,-0.0766},
									1
								},
								
								{
									"WeaponAim",
									{-0.050000001,-0.086599998},
									1
								},
								
								{
									"WeaponAim",
									{-0.034200002,-0.093970001},
									1
								},
								
								{
									"WeaponAim",
									{-0.01736,-0.098480001},
									1
								},
								
								{
									"WeaponAim",
									{0,-0.1},
									1
								},
								{},
								
								{
									"Velocity",
									0.001,
									"WeaponAim",
									{0,0},
									1
								},
								
								{
									"Velocity",
									{0,0},
									1
								}
							};
						};
					};
				};
			};
		};
	};
	class F18C: Plane_CAS_02_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="F18C";
		scope=2;
		displayName="$STR_A3_CfgVehicles_F18C0";
		model="turtle_F18C";
		icon="\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Map_Plane_cas_02_F.paa";
		picture="\A3\Air_F_EPC\Plane_CAS_02\Data\UI\Plane_cas_02_F.paa";
		crew="O_pilot_F";
		typicalCargo[]=
		{
			"O_pilot_F"
		};
		side=0;
		faction="BLU_F";
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		weapons[]=
		{
			"Cannon_30mm_Plane_CAS_02_F",
			"Missile_AA_03_Plane_CAS_02_F",
			"Missile_AGM_01_Plane_CAS_02_F",
			"Rocket_03_HE_Plane_CAS_02_F",
			"Rocket_03_AP_Plane_CAS_02_F",
			"Bomb_03_Plane_CAS_02_F",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"500Rnd_Cannon_30mm_Plane_CAS_02_F",
			"2Rnd_Missile_AA_03_F",
			"4Rnd_Missile_AGM_01_F",
			"2Rnd_Bomb_03_F",
			"20Rnd_Rocket_03_HE_F",
			"20Rnd_Rocket_03_AP_F",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
	};
};
