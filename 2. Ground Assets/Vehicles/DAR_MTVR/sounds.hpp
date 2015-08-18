attenuationEffectType = "CarAttenuation"; //utlumovani v interieru (odkaz do Attenuation.hpp ve slozce SOUNDS_F

		soundGetIn[]={"DAR_MTVR\Sounds\ext-mtvr-getin",db-5,1};
		soundGetOut[]={"DAR_MTVR\Sounds\ext-mtvr-getout",db-5,1, 40};
		soundDammage[]={"", db-5, 1};
		soundEngineOnInt[] = {"DAR_MTVR\Sounds\int-mtvr-start", db-8, 1.0};
		soundEngineOnExt[] = {"DAR_MTVR\Sounds\ext-mtvr-start1", db-7, 1.0, 200};
		soundEngineOffInt[] = {"DAR_MTVR\Sounds\int-mtvr-stop", db-8, 1.0};
		soundEngineOffExt[] = {"DAR_MTVR\Sounds\ext-mtvr-stop", db-7, 1.0, 200};

		/* ---- CRASHES START ---- */
		
		buildCrash0[]={"A3\Sounds_F\vehicles\soft\noises\crash_building_01", db-3, 1,200};
		buildCrash1[]={"A3\Sounds_F\vehicles\soft\noises\crash_building_02", db-3, 1,200};
 		buildCrash2[]={"A3\Sounds_F\vehicles\soft\noises\crash_building_03", db-3, 1,200};
 		buildCrash3[]={"A3\Sounds_F\vehicles\soft\noises\crash_building_04", db-3, 1,200};
 		soundBuildingCrash[]={buildCrash0, 0.25, buildCrash1, 0.25, buildCrash2, 0.25, buildCrash3, 0.25};

		WoodCrash0[]={"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_01", db-3, 1,200};
		WoodCrash1[]={"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_02", db-3, 1,200};
		WoodCrash2[]={"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_03", db-3, 1,200};
		WoodCrash3[]={"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_04", db-3, 1,200};
		WoodCrash4[]={"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_05", db-3, 1,200};
		WoodCrash5[]={"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_06", db-3, 1,200};
		soundWoodCrash[]={woodCrash0, 0.166, woodCrash1, 0.166, woodCrash2, 0.166, woodCrash3, 0.166,woodCrash4, 0.166,woodCrash5, 0.166};

		ArmorCrash0[]={"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_01", db-3, 1,200};
		ArmorCrash1[]={"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_02", db-3, 1,200};
		ArmorCrash2[]={"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_03", db-3, 1,200};
		ArmorCrash3[]={"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_04", db-3, 1,200};
		soundArmorCrash[]={ArmorCrash0, 0.25, ArmorCrash1, 0.25, ArmorCrash2, 0.25, ArmorCrash3, 0.25};

		/* ---- CRASHES  END ---- */

	class	Sounds
	{
	
		// warp	factor
		#define	FACTOR(val,from,to)	(val factor[from,to])
		// RANGE(val,	begin, band, end,	band)
		#define	RANGE(val,from,band0,to,band1) FACTOR2(val,from,(from+band0),to,(to+band1))
		// FACTOR2(val,	0, 400,	1200,	2000)
		#define	FACTOR2(val,from0,to0,from1,to1) (FACTOR(val,from0,to0)	*	FACTOR(val,to1,from1))

		// redRpm
		#define	MAX_RPM	6900
		// scaled	rpm	to 0 - 1
		#define	RPM(rpm) (rpm/MAX_RPM)

		// specialized FACTOR	for	rpm
		#define	FACTOR_RPM(from,to)	FACTOR(RPM(rpm),RPM(from),RPM(to))
		// specialized peak	for	rpm
		#define	FACTOR2_RPM(from0,to0,from1,to1) (FACTOR_RPM(from0,to0)	*	FACTOR_RPM(to1,from1))
		// specialized peak, different definition, version for rpm
		#define	RANGE_RPM(from,band0,to,band1) FACTOR2_RPM(from,(from+band0),to,(to+band1))
		

		#define HZ_IDLE FACTOR_RPM(400,1150)
		#define HZ_RPM1 FACTOR_RPM(900,2100)
		#define HZ_RPM2	FACTOR_RPM(1300,3100)
		#define HZ_RPM3 FACTOR_RPM(2200,4100)
		#define HZ_RPM4 FACTOR_RPM(3300,4900)
		#define HZ_RPM5 FACTOR_RPM(4200,6200)
		#define HZ_RPM6 FACTOR_RPM(5100,6900)
		
		#define VOLUME_IDLE FACTOR2_RPM(400,700,900,1100)
		#define VOLUME_RPM1 FACTOR2_RPM(870,1100,1300,2100)
		#define VOLUME_RPM2 FACTOR2_RPM(1250,2050,2300,3100)
		#define VOLUME_RPM3 FACTOR2_RPM(2250,3050,3300,4100)
		#define VOLUME_RPM4 FACTOR2_RPM(3250,4050,4200,4870)
		#define VOLUME_RPM5 FACTOR2_RPM(4150,4800,5150,6150)
		#define VOLUME_RPM6 FACTOR_RPM(5100,6100)


		
		class	Idle_ext
		{
			sound[]	=	{"DAR_MTVR\Sounds\ext-mtvr-idle", db-10,	1, 150};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*camPos*VOLUME_IDLE;
		};
		class	Engine
		{
			sound[]	=	{"DAR_MTVR\Sounds\ext-truck-low2",	db-8,1, 200};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*camPos*VOLUME_RPM1;
		};
		class	Engine1_ext
		{
			sound[]	=	{"DAR_MTVR\Sounds\ext-truck-low2",	db-6,1, 240};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*camPos*VOLUME_RPM2;
		};
		class	Engine2_ext
		{
			sound[]	=	{"DAR_MTVR\Sounds\ext-truck-low2",	db-5,1, 280};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*camPos*VOLUME_RPM3;
		};
		class	Engine3_ext
		{
			sound[]	=	{"DAR_MTVR\Sounds\ext-truck-high",	db-4,1, 320};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*camPos*VOLUME_RPM4;
		};
		class	Engine4_ext
		{
			sound[]	=	{"DAR_MTVR\Sounds\ext-truck-high",	db-3,1, 360};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*camPos*VOLUME_RPM5;
		};
		class	Engine5_ext
		{
			sound[]	=	{"DAR_MTVR\Sounds\ext-truck-high",	db-2,1, 420};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*camPos*VOLUME_RPM6;
		};

			
	  class IdleThrust
	  {
		sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle_exhaust", db-3,1, 200};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_IDLE;
	  };
	  class EngineThrust
	  {
		sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm_exhaust", db-2,1, 250};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM1;
	  };
	  class Engine1_Thrust_ext
	  {
		sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm_exhaust", db-1,1, 280};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM2;
	  };
	  class Engine2_Thrust_ext
	  {
		sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm_exhaust", db-1,1, 320};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM3;
	  };
	  class Engine3_Thrust_ext
	  {
		sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm_exhaust", db1,1, 360};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM4;
	  };
	  class Engine4_Thrust_ext
	  {
		sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm_exhaust", db2,1, 400};
			frequency	=	0.8	+	HZ_RPM5*0.3;
			volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM5;
	  };
	  class Engine5_Thrust_ext
	  {
		sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm_exhaust", db3,1, 450};
			frequency	=	0.9	+	HZ_RPM6*0.2;
			volume = engineOn*camPos*(0.4+(0.6*FACTOR(thrust,0.1,1)))*VOLUME_RPM6;
	  };  

		class	Idle_int
		{
			sound[]	=	{"DAR_MTVR\Sounds\int-mtvr-idle1", db-15,	1};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*(1-camPos)*VOLUME_IDLE;
		};
		class	Engine_int
		{
			sound[]	=	{"DAR_MTVR\Sounds\int-mtvr-low",	db-14,1 };
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM1;
		};
		class	Engine1_int
		{
			sound[]	=	{"DAR_MTVR\Sounds\int-mtvr-low",	db-12,1 };
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM2;
		};
		class	Engine2_int
		{
			sound[]	=	{"DAR_MTVR\Sounds\int-mtvr-low2",	db-11,1 };
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM3;
		};
		class	Engine3_int
		{
			sound[]	=	{"DAR_MTVR\Sounds\int-truck-low2",	db-10,1 };
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM4;
		};
		class	Engine4_int
		{
			sound[]	=	{"DAR_MTVR\Sounds\int-truck-high1",	db-9,1 };
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM5;
		};
		class	Engine5_int
		{
			sound[]	=	{"DAR_MTVR\Sounds\int-truck-high2",	db-6,1 };
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM6;
		};
			
		class IdleThrust_int 
		{
		sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle", db-9, 1};
		frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
		};
				
		class EngineThrust_int 
		{
		sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1", db-7, 1};
		frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
		};
				
		class Engine1_Thrust_int 
		{
		sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2", 0.562341, 1};
		frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
		};
				
		class Engine2_Thrust_int 
		{
		sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid", db-3, 1};
		frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
		};
				
		class Engine3_Thrust_int 
		{
		sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high", db-2, 1};
		frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
		};
		class	Movement
		{
			sound	=	"soundEnviron";
			frequency	=	"1";
			volume = "0";
		};

				class TiresRockOut
				{
					sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", db-6, 1.0, 60};
					frequency = "1";
					volume = "camPos*rock*(speed factor[2, 20])";
				};
				class TiresSandOut
				{
					sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", db-6, 1.0, 60};
					frequency = "1";
					volume = "camPos*sand*(speed factor[2, 20])";
				};
				class TiresGrassOut
				{
					sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", db-6, 1.0, 60};
					frequency = "1";
					volume = "camPos*grass*(speed factor[2, 20])";
				};
				class TiresMudOut
				{
					sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", db-6, 1.0, 60};
					frequency = "1";
					volume = "camPos*mud*(speed factor[2, 20])";
				};
				class TiresGravelOut
				{
					sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", db-6, 1.0, 60};
					frequency = "1";
					volume = "camPos*gravel*(speed factor[2, 20])";
				};
				class TiresAsphaltOut
				{
					sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", db-6, 1.0, 60};
					frequency = "1";
					volume = "camPos*asphalt*(speed factor[2, 20])";
				};
				class NoiseOut
				{
					sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3", db-8, 1.0, 90};
					frequency = "1";
					volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
				};

				class TiresRockIn
				{
					sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", db-6, 1.0};
					frequency = "1";
					volume = "(1-camPos)*rock*(speed factor[2, 20])";
				};
				class TiresSandIn
				{
					sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", db-6, 1.0};
					frequency = "1";
					volume = "(1-camPos)*sand*(speed factor[2, 20])";
				};
				class TiresGrassIn
				{
					sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", db-6, 1.0};
					frequency = "1";
					volume = "(1-camPos)*grass*(speed factor[2, 20])";
				};
				class TiresMudIn
				{
					sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", db-6, 1.0};
					frequency = "1";
					volume = "(1-camPos)*mud*(speed factor[2, 20])";
				};
				class TiresGravelIn
				{
					sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", db-6, 1.0};
					frequency = "1";
					volume = "(1-camPos)*gravel*(speed factor[2, 20])";
				};
				class TiresAsphaltIn
				{
					sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", db-6, 1.0};
					frequency = "1";
					volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
				};
				class NoiseIn
				{
					sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", db-12, 1.0};
					frequency = "1";
					volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)"; //definice INSIDE zvuku
				};
		
			class breaking_ext_road
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", db-3, 1, 80};
			frequency	=	1;
			volume = engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
		};	
		
			class acceleration_ext_road
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
			frequency	=	1;
			volume = engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
		};	
			class turn_left_ext_road
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
			frequency	=	1;
			volume = engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
		};	

			class turn_right_ext_road
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
			frequency	=	1;
			volume = engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
		};	
			
			class breaking_ext_dirt
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking", db-3, 1, 60};
			frequency	=	1;
			volume = engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15]);
		};	
			class acceleration_ext_dirt
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration", db-3,	1, 60};
			frequency	=	1;
			volume = engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1]);
		};	
			class turn_left_ext_dirt
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
			frequency	=	1;
			volume = engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15]);
		};	

			class turn_right_ext_dirt
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
			frequency	=	1;
			volume = engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15]);
		};	

			class breaking_int_road
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", db-10, 1};
			frequency	=	1;
			volume = engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
		};	
		
			class acceleration_int_road
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
			frequency	=	1;
			volume = engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
		};	
			class turn_left_int_road
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
			frequency	=	1;
			volume = engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
		};	
			class turn_right_int_road
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
			frequency	=	1;
			volume = engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
		};	

		/*--------------------------------------------------------------------------------------------*/	
		/*-------------- ozvuceni piskani pneumatik na ostatnich povrsich INT -------------*/
		/*--------------------------------------------------------------------------------------------*/	
			class breaking_int_dirt
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", db-10, 1};
			frequency	=	1;
			volume = engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15]);
		};	
			class acceleration_int_dirt
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int", db-10, 1};
			frequency	=	1;
			volume = engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
		};	
			class turn_left_int_dirt
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10,	1};
			frequency	=	1;
			volume = engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
		};	
			class turn_right_int_dirt
		{
			sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10,	1};
			frequency	=	1;
			volume = engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
		};
	};