class CfgPatches
{
	class CS_Skeleton
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Scripts",
			"DZ_Characters",
			"DZ_Characters_Zombies"
		};
	};
};
class CfgVehicles
{
	class ZmbM_usSoldier_normal_Base;
	class CS_Skeleton_Base: ZmbM_usSoldier_normal_Base
	{
		scope=0;
		model="\CS_Creatures\Skeleton\Skeleton.p3d";
		displayName="Ghoul";
		hiddenSelectionsMaterials[]=
		{
			"CS_Creatures\Skeleton\data\Skeleton.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Old_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Old_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Old_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Old_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Old_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Old_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class CS_Skeleton: CS_Skeleton_Base
	{
		scope=2;
	};
	class CS_SkeletonNormal_Base: CS_Skeleton_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
						};
					};
					componentNames[]=
					{
						"Head"
					};
					fatalInjuryCoef=0.1;
					inventorySlots[]=
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints=300;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
						};
					};
					componentNames[]=
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints=300;
						transferToGlobalCoef=0.33000001;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
						};
					};
					componentNames[]=
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef=-1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints=300;
						transferToGlobalCoef=0.33000001;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
						};
					};
					componentNames[]=
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef=-1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints=300;
						transferToGlobalCoef=0.33000001;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
						};
					};
					componentNames[]=
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints=300;
						transferToGlobalCoef=0.33000001;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
						};
					};
					componentNames[]=
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints=300;
						transferToGlobalCoef=0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
						};
					};
					transferToZonesNames[]=
					{
						"LeftLeg"
					};
					transferToZonesCoefs[]={0.1};
					componentNames[]=
					{
						"LeftFoot"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints=300;
						transferToGlobalCoef=0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=2;
							};
						};
					};
					transferToZonesNames[]=
					{
						"RightLeg"
					};
					transferToZonesCoefs[]={0.1};
					componentNames[]=
					{
						"RightFoot"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Feet"
					};
				};
			};
		};
	};
	class CS_SkeletonHard_Base: CS_Skeleton_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
						};
					};
					componentNames[]=
					{
						"Head"
					};
					fatalInjuryCoef=0.1;
					inventorySlots[]=
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints=400;
						transferToGlobalCoef=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
						};
					};
					componentNames[]=
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints=400;
						transferToGlobalCoef=0.33000001;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
						};
					};
					componentNames[]=
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef=-1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints=400;
						transferToGlobalCoef=0.33000001;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
						};
					};
					componentNames[]=
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef=-1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints=400;
						transferToGlobalCoef=0.33000001;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
						};
					};
					componentNames[]=
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints=400;
						transferToGlobalCoef=0.33000001;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
						};
					};
					componentNames[]=
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints=400;
						transferToGlobalCoef=0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
						};
					};
					transferToZonesNames[]=
					{
						"LeftLeg"
					};
					transferToZonesCoefs[]={0.1};
					componentNames[]=
					{
						"LeftFoot"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints=400;
						transferToGlobalCoef=0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=1;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=3;
							};
						};
					};
					transferToZonesNames[]=
					{
						"RightLeg"
					};
					transferToZonesCoefs[]={0.1};
					componentNames[]=
					{
						"RightFoot"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Feet"
					};
				};
			};
		};
	};
};