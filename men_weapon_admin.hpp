class Vest_Camo_Base;
class vest_base;
class VestItem;
class V_HarnessO_brn;
class ItemCore;
class UniformItem;
class Uniform_Base: ItemCore {};

class U_FACTIONADMIN_ADMIN_Uniform_01: Uniform_Base {
	author = "Kane Messias";
	scope = 2;
	displayName="ADMIN Uniform";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="I_FACTIONADACgamermaniac_ADMIN_Uniform_01";
		containerClass="Supply40";
		mass=10;
		
		//more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		class HitpointsProtectionInfo {
			class Neck
			{
				hitpointName	= "HitNeck";	// reference to the hit point class defined in the man base class
				armor			= 8;			// addition to armor of referenced hitpoint
				passThrough		= 0.5;			// multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor			= 8;
				passThrough		= 0.5;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 8;
				passThrough		= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				armor			= 8;
				passThrough		= 0.1;
			};
			class pelvis
			{
				hitpointName	= "HitPelvis";
				armor			= 8;
				passThrough		= 0.1;
			};
			class legs
			{
				hitpointName	= "HitLegs";
				armor			= 8;
				passThrough		= 0.1;
			};
		};
	};
};

class ADMIN_Vest_01: V_HarnessO_brn
{
	scope=2;
	displayName="Admin Weste";
	picture="\Gamermaniac87_uniforms\textures\Gamermaniac87.paa";
	model="Smill_VHO\S_os_pistolvest_radio.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\Gamermaniac87_uniforms\textures\Skins\admin_west_uniform.paa"
	};
	class ItemInfo: VestItem
	{
		uniformModel="Smill_VHO\S_os_pistolvest_radio.p3d";
		containerClass="Supply60";
		mass=20;
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName="HitHead";
				armor=100;
				passThrough=0.1;
			};
			class Face
			{
				hitpointName="HitFace";
				armor=100;
				passThrough=0.1;
			};
			class Hands
			{
				hitpointName="HitHands";
				armor=100;
				passThrough=0.1;
			};
			class Neck
			{
				hitpointName="HitNeck";
				armor=100;
				passThrough=0.1;
			};
			class LeftArms
			{
				hitpointName="HitLeftArm";
				armor=100;
				passThrough=0.1;
			};
			class RightArms
			{
				hitpointName="HitRightArm";
				armor=100;
				passThrough=0.1;
			};
			class Arms
			{
				hitpointName="HitArms";
				armor=100;
				passThrough=0.1;
			};
			class Chest
			{
				hitpointName="HitChest";
				armor=100;
				passThrough=0.1;
			};
			class Diaphragm
			{
				hitpointName="HitDiaphragm";
				armor=100;
				passThrough=0.1;
			};
			class Abdomen
			{
				hitpointName="HitAbdomen";
				armor=100;
				passThrough=0.1;
			};
			class Body
			{
				hitpointName="HitBody";
				armor=100;
				passThrough=0.1;
			};
			class Pelvis
			{
				hitpointName="HitPelvis";
				armor=100;
				passThrough=0.1;
			};
			class Legs
			{
				hitpointName="HitLegs";
				armor=100;
				passThrough=0.1;
			};
			class RightLeg
			{
				hitpointName="HitRightLeg";
				armor=100;
				passThrough=0.1;
			};
			class LeftLeg
			{
				hitpointName="HitLeftLeg";
				armor=100;
				passThrough=0.1;
			};
		};
		hiddenSelections[]=
		{
			"camo"
		};
	};
};