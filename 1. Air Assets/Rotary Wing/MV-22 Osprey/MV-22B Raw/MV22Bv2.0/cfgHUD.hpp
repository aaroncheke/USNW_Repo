class MFD
		{
			borderLeft = 0.09;
			borderRight = 0.02;
			borderTop = 0.02;
			borderBottom = 0.1;
			class MFD1
			{
				/// HUD location memory points
				topLeft = "HUD LH1";
				topRight = "HUD PH1";
				bottomLeft = "HUD LD1";
				/// adjust position inside of memory points LOD
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;

				color[]={0,1,0,0.1}; // master color
				//font<=fontHelicopterHUD;
				//font<="FontConfig/HUD";

				#define Pos0Center 0.27
				/// common definition for all vectors projected into HUD space
				class Pos10Vector
				{
					type=vector;
					// position of 0-degree dive line
					pos0[]={0.5,Pos0Center};
					// position of 10 degree bank and 10-degree dive (used to adjust scale)
					//pos10[]={2.0,Pos0Center+1.3};
					pos10[]={0.5+0.9,Pos0Center+0.7};
				};
				class Bones{};
				class Draw
				{
					alpha=0.9;
					//color[]={0.1,0.5,0.05};
					color[]={0,1,0};
					clipTL[]={0.0,0.0};
					clipBR[]={1.0,1.0};
					condition="on";
					class Altitude
					{
						type=text;
						align=left;
						scale=1; // text size
						source=altitudeASL;
						sourceScale=1;
#define SETPOS(XX,YY) {__EVAL((XX)+0.33),__EVAL((YY)+0.062)}
						pos[]={SETPOS(-0.05,-0.02),1};
						right[]={SETPOS(-0.01,-0.02),1};
						down[]={SETPOS(-0.05,0.02),1};

					};
					class Altitude2
					{
						type=text;
						align=left;
						scale=1; // text size
						source=altitudeAGL;
						sourceScale=1;
#define SETPOS(XX,YY) {__EVAL((XX)+0.5),__EVAL((YY)+0.062)}
						pos[]={SETPOS(-0.05,-0.02),1};
						right[]={SETPOS(-0.01,-0.02),1};
						down[]={SETPOS(-0.05,0.02),1};

					};
					class RPM
					{
						type=text;
						align=left;
						scale=1; // text size
						source=rpm;
						sourceScale=100;
#define SETPOS(XX,YY) {__EVAL((XX)+0.68),__EVAL((YY)+0.2)}
						pos[]={SETPOS(-0.05,-0.02),1};
						right[]={SETPOS(-0.01,-0.02),1};
						down[]={SETPOS(-0.05,0.02),1};
					};
					class RPM2
					{
						type=text;
						align=left;
						scale=1; // text size
						source=rpm;
						sourceScale=100;
#define SETPOS(XX,YY) {__EVAL((XX)+0.852),__EVAL((YY)+0.2)}
						pos[]={SETPOS(-0.05,-0.02),1};
						right[]={SETPOS(-0.01,-0.02),1};
						down[]={SETPOS(-0.05,0.02),1};
					};
					class Fuel
					{
						type=text;
						align=left;
						scale=1; // text size
						source=fuel;
						sourceScale=100;
#define SETPOS(XX,YY) {__EVAL((XX)+0.68),__EVAL((YY)+0.445)}
						pos[]={SETPOS(-0.05,-0.02),1};
						right[]={SETPOS(-0.01,-0.02),1};
						down[]={SETPOS(-0.05,0.02),1};
					};
					class Fuel2
					{
						type=text;
						align=left;
						scale=1; // text size
						source=fuel;
						sourceScale=100;
#define SETPOS(XX,YY) {__EVAL((XX)+0.852),__EVAL((YY)+0.445)}
						pos[]={SETPOS(-0.05,-0.02),1};
						right[]={SETPOS(-0.01,-0.02),1};
						down[]={SETPOS(-0.05,0.02),1};
					};

					class Speed
					{
						type=text;
						align=left;
						scale=1; // text size
						source=speed;
						sourceScale=__EVAL(3.6/1.609344);
#define SETPOS(XX,YY) {__EVAL((XX)+0.330),__EVAL((YY)+0.245)}
						pos[]={SETPOS(-0.05,-0.02),1};
						right[]={SETPOS(-0.01,-0.02),1};
						down[]={SETPOS(-0.05,0.02),1};
					};
	};
};
};