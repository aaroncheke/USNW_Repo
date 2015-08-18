#include "basicdefines_A3.hpp"
class CfgPatches
{
	class meu_ch53e
	{
		units[] = {"meu_ch53e"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F"};
	};
};

class CfgVehicles
{
	class Helicopter;
	class Air : Helicopter
	{
		class Turrets;
	};
	class Helicopter_Base_H: Air
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class RotorLibHelicopterProperties;
		class Reflectors
		{
			class Right;
		};
	};
	class Air : Helicopter
	{
		armor = 70;					 /// just some protection against missiles, collisions and explosions
		altFullForce = 4000;		 /// in what height do the engines still have full thrust
		altNoForce = 5640;			 /// thrust of the engines interpolates to zero between altFullForce and altNoForce
		maxSpeed = 315;				 /// what is the maximum speed of the vehicle in KM/H
		fuelCapacity = 8770;		 /// Total Fuel in Liters
		fuelConsumptionRate = 0.171; ///Range divided by Fuel Capacity
		maxFordingDepth = 0.55;		 /// how deep could the vehicle be in water without getting some damage
		mainBladeRadius = 7.0;		 /// describes the radius of main rotor - used for collision detection
		//multiplier of lift force
		liftForceCoef = 2.0;	
		//multiplier of body friction
		bodyFrictionCoef = 0.5;	
		//multiplier of bank force
		cyclicAsideForceCoef = 2.0;
		//multiplier of dive force
		cyclicForwardForceCoef = 2.0;
		//multiplier of back rotor force
		backRotorForceCoef = 3.0;	
		
		accuracy = 0.5;			/// how hard it is to distinguish the type of the vehicle (bigger number means harder)
		displayName = "CH53E"; 	/// how is the heli displayed in editor
		model = ".p3d"; 		/// path to model of the heli
		driveOnComponent[] = {"Wheels"};

		icon = ".paa";		/// icon in map/editor
		picture = ".paa";	/// small picture in command menu

		driverAction = pilot_Heli_Light_02;				/// what is the standard pose for the pilot, defined as animation state
		driverInAction = pilot_Heli_Light_02;			/// what is the standard pose for the pilot, defined as animation state
		precisegetinout = 1;							/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
		GetInAction = pilot_Heli_Light_02_Enter;		/// what action uses the pilot to get in the heli, it uses "switchAction" script command on the proxy
		GetOutAction = pilot_Heli_Light_02_Exit;		/// what action uses the pilot to get out of heli
		cargoGetInAction[] = {"GetInHelicopterCargo"};	/// actions for the cargo, the last one in array is used for the rest
		cargoGetOutAction[] = {"GetOutHelicopterCargo"};/// that means every cargo position could use different action to get in
		transportSoldier = 7;							/// how many cargo positions are available
		cargoAction[] = 								/// the same array as getIn/getOut actions for actions to switch to for cargo while inside the heli
						{
							passenger_apc_narrow_generic03,
							passenger_apc_generic02,
							passenger_apc_narrow_generic01,
							passenger_apc_generic04,
							passenger_apc_narrow_generic02,
							passenger_generic01_leanright,
							passenger_generic01_leanleft,
							passenger_generic01_foldhands
						};
		cargoIsCoDriver[] = {0, 0}; 				/// the cargo don't utilize some special memory points to get in
		memoryPointsGetInCargo = "pos cargo";		/// on what memory points should the cargo get in the heli
		memoryPointsGetInCargoDir = "pos cargo dir";/// what is the direction of the cargo facing during get in animation (and opposite for get out)
		hideWeaponsCargo = 1;						/// this makes the poses easier and adds some performance gain because the proxies don't need to be drawn
		cargoProxyIndexes[] = {1,2,3,4,5,6,7};		/// what indexes does regular cargo sit on

		
		class TransportBackpacks	/// adds various backpacks to cargo hold of the heli
		{
			bag_xx(B_Parachute,40);	/// this utilizes a macro from basicdefines_A3.hpp to create a class with backpack inside
		};
		class TransportItems		/// adds various items to cargo hold of the heli
		{
			item_xx(FirstAidKit,20);/// this utilizes a macro from basicdefines_A3.hpp to create a class with FAK inside
		};		
		maximumLoad = 5000;			/// capacity of cargo inventory for backpacks and various other items
		cargoCanEject = 1;			/// cargo should be able to grab a chute and drop out of the vehicle
		driverCanEject = 0;			/// pilot shouldn't be able to do so as he doesn't have eject seat

		class Exhausts								/// describes the particle effects fro exhausts
		{
			class Exhaust1							/// there may be as many exhausts as you wish, bear in mind the particle limitation and performance
			{
				position = "exhaust1";				/// on what position should the particle effect start
				direction = "exhaust1_dir";			/// what is the default direction of the particle effect
				effect = "ExhaustsEffectHeliMed";	/// what class of particle effect is going to be used
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliMed";
			};
		};

		
		LockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;	/// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionSystem = CM_Missile;			/// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case
		selectionFireAnim = "muzzleFlash";						/// what selection is hidden when machinegun doesn't shoot

		weapons[] = {LMG_Minigun_heli,missiles_DAGR, CMFlareLauncher};	/// array of various vehicle weapons mounted on the heli
		magazines[] = {2000Rnd_65x39_Belt_Tracer_Green,12Rnd_PG_missiles, 168Rnd_CMFlare_Chaff_Magazine}; /// array of corresponding magazines

		class ViewPilot: ViewPilot 	/// describes what does the pilot see using bare eyes
		{
			initFov = 0.75; 		/// this is the standard field of view angle for soldier, bit more narrow than a real-life one
			minFov = 0.375; 		/// this is how much can people "zoom" their view via focusing on something
			maxFov = 1.1;			/// this is how wide can the field of view be
		};

		class Viewoptics: Viewoptics 	/// pilot doesn't use optics in this vehicle
		{
			initAngleX = 0; 			/// initial horizontal angle of the optics view relative to proxy position of pilot
			minAngleX = 0; 				/// maximum turn to the left relative to proxy position of pilot
			maxAngleX = 0;				/// maximum turn to the right relative to proxy position of pilot
			initAngleY = 0; 			/// initial vertical angle of the optics view relative to proxy position of pilot
			minAngleY = 0; 				/// maximum elevation down relative to proxy position of pilot
			maxAngleY = 0;				/// maximum elevation up relative to proxy position of pilot
			initFov = 0.1; 				/// the same functionality as in ViewPilot
			minFov = 0.1;  				/// the same functionality as in ViewPilot
			maxFov = 1.2; 				/// the same functionality as in ViewPilot
		};
		
		class Turrets: Turrets										/// just a copilot seat as a turret to enable taking the controls
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = copilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = copilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = copilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = copilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInCargo = "pos copilot";				/// what is the position of get in action
				memoryPointsGetInCargoDir = "pos copilot dir";		/// what is the direction of get in action
				canEject = 0;										/// copilot shouldn't be able to do so as he doesn't have eject seat
				minElev = -50; 										/// what is the lowest possible elevation of the turret
				maxElev = +30;  									/// what is the highest possible elevation of the turret
				initElev = 11; 										/// what is the starting elevation of the turret
				minTurn = -170;  									/// what is the right-most possible turn of the turret
				maxTurn = 170;  									/// what is the left-most possible turn of the turret
				initTurn = 0; 										/// what is the default horizontal turn of the turret
				gunnerLeftHandAnimName = "lever_copilot";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "stick_copilot";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 3;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 3;							/// how fast is the copilot able to look around (higher means faster)
			};
		};
		class Damage	/// damage changes material in specific places (visual in hitPoint)
		{
			tex[] = {};
			mat[] = 
			{
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext.rvmat",			/// material mapped in model
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",	/// changes to this one once damage of the part reaches 0.5
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",	/// changes to this one once damage of the part reaches 1

				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat",

				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};

		#include "sounds.hpp" /// sounds are included in separate file

		class AnimationSources: AnimationSources	/// custom made animation sources
		{
			class Doors				/// the class name is later used in model.cfg
			{
				source = door;		/// door source means it is used by animateDoor script command
				animPeriod = 1;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
			};
			class HideWeapon
			{
				source = "user";
				animPeriod = 0.00001;
				initPhase = 0;
			};
			class Gatling
			{
				source = "revolving";			/// returns bullets left in magazine of said weapon
				weapon = "LMG_Minigun_heli";	/// this is the said weapon
			};
			class Gatling_flash
			{
				source = "ammorandom";			/// this source returns some random value changine each time ammo is spent from this weapon - used for muzzle flashes
				weapon = "LMG_Minigun_heli";	/// this is the said weapon
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "missiles_DAGR";
			};
			class Proxy
			{
				source		 = "user";
				animPeriod	 = 1;
				initPhase	 = 0;
			};					
		};	
		hiddenSelections[] = /// we want to allow changing of colours, this defines on what selection are the textures used
		{
			"camo1"
		};
		
		class UserActions /// actions available for player to interact with vehicle via action menu running scripts
		{
			class Door_Open
			{
				userActionID 		= 60;				/// ID for some scripts
				displayName 		= "Open door";		/// what is displayed in action menu
				displayNameDefault 	= <img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />; /// what is displayed under the cursor (icon in this case)
				position 			= "";				/// start of radius where action is available
				condition 			= "this doorPhase ""Doors"" < 0.5 AND Alive(this) AND (player in crew this)"; /// only openable from inside and when closed
				statement 			= "this animateDoor ['Doors', 1]";	/// sets animation source Doors to 1 via interpolation
				priority 			= 1.5;				/// higher priority means higher in the Action menu
				radius 				= 1.5;				/// how far from position is the action available
				showWindow 			= 0;				/// 0 means that it is not a default action when entering the vehicle
				onlyForPlayer 		= 1;				/// AI doesn't use this one
				shortcut 			= "";				/// there's no shortcut for this action
			};
			class Door_Close: Door_Open
			{
				userActionID 		= 61;
				displayName 		= "Close door";
				textToolTip 		= "Close door";
				condition	 		= "this doorPhase ""Doors"" > 0.5 AND Alive(this) AND (player in crew this)";
				statement 			= "this animateDoor ['Doors', 0]";
			};
		};		
	
		class Reflectors: Reflectors			/// landing lights of the heli, turned on by AI while in night and "careless" or "safe"
		{
			class Right
			{
				color[] = {7000,7500,10000};	/// defines red, green, blue and alpha components of the light
				ambient[] = {70,75,100};		/// the same definition format for colouring the environment around
				intensity = 50;					/// how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
				size = 1;						/// defines the visible size of light, has not much of an effect now
				innerAngle = 15;				/// angle from light direction vector where the light is at full strength
				outerAngle = 65;				/// angle from light direction vector where the light is completely faded out
				coneFadeCoef = 10;				/// coefficient of fading the light between inner and outer cone angles

				position = "Light_R_pos";		/// name of memory point in model to take the origin of the light
				direction = "Light_R_dir";		/// name of memory point in the model to make a vector of direction of light from it's position
				hitpoint = "Light_R_hitpoint";	/// name of hitpoint selection in hitpoint lod of the model to be affected by damage
				selection = "Light_R";			/// name of selection in visual lods of the model that are going to be hidden while the light is off

				useFlare = true;				/// boolean switch if the light produces flare or not
				flareSize = 10;					/// how big is the flare, using the same metrics as intensity
				flareMaxDistance = 250;			/// maximum distance where the flare is drawn

				dayLight = false;				/// boolean switch if the light is used during day or not

				class Attenuation
				{
					start = 0;					/// offset of start of the attenuation
					constant = 0;				/// constant attenuation of the light in any distance from source
					linear = 1;					/// coefficient for linear attenuation
					quadratic = 1;				/// coefficient for attenuation with square of distance from source

					hardLimitStart = 100;		/// distance from source where the light intensity decreases for drawing
					hardLimitEnd = 200;			/// distance from source where the light is not displayed (shorter distances increase performance)
				};
			};
			class Left: Right
			{
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L_hitpoint";
				selection = "Light_L";
			};			
		};	
		aggregateReflectors[] = {{"Left", "Right"}};	/// aggregates both sources into one to increase performance
		#include "rtd.hpp" /// Advanced FM characteristics in separate file to make the config cleaner
	};

	class Air: Heli
	{
		scope = public;				/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		side = 1;					/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		faction	= BLU_F;			/// defines the faction inside of the side
		crew = "Test_Soldier_F";	/// lets use the sample soldier we have as default captain of the boat
		accuracy = 1.50; 			/// harder to distinguish side than vehicle type
		
		icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_rockets_CA.paa";	/// icon in map/editor
		picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_rockets_CA.paa";	/// small picture in command menu
		
		hiddenSelectionsTextures[] = /// changes of textures to distinguish variants in same order as hiddenSelections[]
		{
			"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO"
		};
		availableForSupportTypes[] = {"Drop", "Transport"};	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
		cost = 2000000;	/// we need some high cost for such vehicles to be prioritized by AA defences
	};
};