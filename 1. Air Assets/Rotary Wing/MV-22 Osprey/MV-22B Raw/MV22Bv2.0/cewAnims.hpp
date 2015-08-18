// basic definitions of the animations
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		KIA_MV22_Pilot = "KIA_MV22_Pilot";
		MV22_Pilot = "MV22_Pilot";
		MV22_CoPilot = "MV22_CoPilot";
	};//end man actions
};//end moves basic

//defining where the animations are
class CfgMovesMaleSdr: CfgMovesBasic
{
class States
	{
		class Crew;
		class KIA_MV22_Pilot: DefaultDie
		{
			actions = DeadActions;
			file=mv22b\data\anims\KIA_MV22_Pilot.rtm;
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[] = {DeadState,0.1};
		};
		class MV22_Pilot: Crew
		{
			file=mv22b\data\anims\MV22_Pilot.rtm;
			interpolateTo[]={KIA_MV22_Pilot,1};
		};

		class MV22_CoPilot: Crew
		{
			file=mv22b\data\anims\MV22_CoPilot.rtm;
			interpolateTo[]={KIA_MV22_Pilot,1};
		};
	};//emd states

};//end male moves