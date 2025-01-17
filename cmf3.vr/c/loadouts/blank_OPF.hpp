// Author: You
// Description: paste your loadout config from the arseanal exporter
#include "\x\cmf\addons\framework\loadouts\undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE



// -------------------- PASTE ABOVE THIS LINE
//Crew Uniforms
//All Crew
#define CREW_BACKPACK "B_Battle_Belt_XL_F"
#define CREW_VEST CAMO_VEST
//Jet Pilot
#define JET_UNIFORM "U_B_HeliPilotCoveralls"
#define JET_HEADGEAR "H_PilotHelmetFighter_B"
//Heli Crew
#define HELI_UNIFORM CAMO_UNIFORM
#define HELI_HEADGEAR "H_PilotHelmetHeli_B"
//Armor Crew
#define ARMOR_UNIFORM CAMO_UNIFORM
#define ARMOR_HEADGEAR "rhsusf_cvc_green_helmet"
//HMG
#define HMG 
#define HMG_TRI_HI 
#define HMG_TRI_LO 
#define HMG_MAG
//HAT
#define HAT 
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG 
// SAM
#define SAM "rhs_weap_fim92"
#define SAM_MAG "rhs_fim92_mag:1"
#define SAM_MAG2 "rhs_fim92_mag:2"
// Sniper Rifle 
#define SNIPER "srifle_DMR_06_olive_F"
#define SNIPER_MAG "20Rnd_762x51_Mag:10"
#define SNIPER_ATTACHMENTS "optic_LRPS"
// Spotter Rifle
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "optic_mrco","bipod_01_f_blk"
// SMG
#define SMG "SMG_05_F"
#define SMG_MAG "30Rnd_9x21_Mag_SMG_02:6"
// Pistol
#define PISTOL "rhsusf_weap_glock17g4"
#define PISTOL_MAG "rhsusf_mag_17Rnd_9x19_JHP:3"
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED
#define CARRYALL "B_Battle_Belt_XL_F"


// Specialized Resupply Vehicle Loadouts
// Ammo Truck
class O_Truck_02_Ammo_F {
	TransportWeapons[] = {AT,AT,AT};
	TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,CARBINE_MAG,GLRIFLE_MAG,GLRIFLE_MAG,AR_MAG,AR_MAG,AR_MAG,AR_MAG,MMG_MAG,MMG_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_SMOKE,MAT_MAG,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES};
	TransportItems[] = {TOOLKIT};
};

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,GLRIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_SMOKE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,GLRIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_SMOKE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,GLRIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_SMOKE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

// ====================
// uniform[] = {};                 Uniform/clothes
// vest[] = {};                    Vest/Plate Carrier/Harness/Chest rig
// headgear[] = {};                Helmets, Hats
// backpack[] = {};                Backpack
// goggles[] = {};                 Facewear
// weapons[] = {};                 Primary weapons (Rifles, MGs, DMRs etc)
// handguns[] = {};                Pistols, machine-pistols etc
// launchers[] = {};               AT/AA launchers
// magazines[] = {};               Magazines. Includes grenades, and can include specific explosives such as mines and demo blocks.
// items[] = {};                   Misc items, eg. Explosive detonators, wire cutters etc
// backpackItems[] = {};           Items sent to backpack. Can include weapons, magazines and probably a lot of other things.
// linkedItems[] = {};             Items that go in the linked slots: NVGs, Map, Compass, Watch, Binoculars, Rangefinders, GPS/UAV terminal
// attachments[] = {};             Primary weapon attachments.
// secondaryAttachments[] = {};    Launcher attachments
// handgunAttachments[] = {};      Sidearm attachments
// opticChoices[] = {};            List of optics that can be chosen by this class during safestart. Automatically included by arsenal exporter, so scroll back up and add some for the love of god.
// ====================

// Base Classes
class rifleman {// rifleman
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS,RADIO_SR};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
//  goggles[] = {GOG};
  face[] = {F_RUS};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};


//Leadership
class ftl: rifleman {// FTL
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS,RADIO_MR};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  items[] += {RADIO_LR};
};
class plt: sl {// Platoon Leader
};
class coy: plt {// CO and PL
};
class xo: coy {// XO
};
class sgt: plt {// Platoon Sergeant
};
class uav: rifleman { //UAV
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
};
class fac: coy {// FAC
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,LASER_BATTERY,PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,LASER};
};


//Medics
class rifleman_03: Fic_Soldier_Carbine {// CLS
  backpackItems[] = {CLS_MEDICAL};
};
class sm: Fic_Soldier_Carbine {// Medic
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
  items[] += {RADIO_MR};
};
class plm: sm {// Platoon Medic
  items[] += {RADIO_LR};
};
class cm: plm {// Company Medic
};


//Infantry
class ar: rifleman {// AR
  weapons[] = {AR};
  attachments[] = {AR_ATTACHMENTS};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class aar: rifleman {// AAR
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class rifleman_02: rifleman {// Grenadier
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,BASE_GRENADES};
};


//Weapons Teams
class Fic_Spotter: rifleman { //Base Spotter
  linkedItems[] += {RANGE_FINDER};
};
class Fic_Weapons_SL: ftl { //Base Spotter
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_LR};
};

//MMG
class mmgl: Fic_Weapons_SL {// MMG Lead
  backpack[] = {CARRYALL};
  magazines[] += {MMG_MAG};
};
class mmgg: ar {// MMG Gunner
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpackItems[] += {MMG_MAG};
};

//MAT
class matl: Fic_Weapons_SL {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};

//HMG
class hmgl: Fic_Weapons_SL {// HMG Lead
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS};
};
class hmgg: Fic_Soldier_Carbine {// HMG Gunner
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG};
};
class hmgag: Fic_Spotter {// HMG Spotter
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG_TRI_HI};
  items[] += {BASE_BALLISTICS};
};

//HAT
class hatl: Fic_Weapons_SL {// HAT Lead
  weapons[] = {RIFLE};
  backpackItems[] = {};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HAT_TRI_LO};
  items[] += {BASE_MEDICAL};
};
class hatg: Fic_Soldier_Carbine {// HAT Gunner
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT};
};
class hatag: Fic_Spotter {// HAT Spotter
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT_TRI_HI};
};

//SAM
class msaml: Fic_Weapons_SL {// SAM Lead
  backpack[] = {CARRYALL};
  magazines[] += {SAM_MAG2};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR(CARRYALL, SAM_MAG2)
};

//Mortar
class mtrl: Fic_Weapons_SL {// Mortar Lead
  items[] += {BASE_ARTILLERY};
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  MORTAR_GEAR("B_Mortar_01_weapon_F")
};
class mtrag: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("B_Mortar_01_support_F")
};

//Artillery
class artl: Fic_Weapons_SL {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};

//Sniper Team
class stl: Fic_Spotter {// Scout Team Lead
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,BASE_BALLISTICS,"ACE_RangeCard"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {RADIO_SR,TOOLS,"ACE_RangeCard"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class spotter: Fic_Spotter {// Scout
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {BASE_BALLISTICS,"ACE_RangeCard"};
  linkedItems[] = {LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};

// Air
class Fic_Crew_Base {// Aircrew Base;
  backpack[] = {CREW_BACKPACK};
  vest[] = {CREW_VEST};
  handguns[] = {PISTOL};
  magazines[] = {PISTOL_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};


class pilot: Fic_Crew_Base {// Jet Pilot
  uniform[] = {JET_UNIFORM};
  headgear[] = {JET_HEADGEAR};
};
class helicrew: pilot {// Aircrew
  uniform[] = {HELI_UNIFORM};
  headgear[] = {HELI_HEADGEAR};
  weapons[] = {SMG};
  magazines[] += {SMG_MAG};
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
  backpackItems[] += {RADIO_MR};
};


//Armor
class vicc: Fic_Soldier_Carbine {// Crew
  uniform[] = {ARMOR_UNIFORM};
  headgear[] = {ARMOR_HEADGEAR};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class vicl: vicc {// Vehicle Commander
};


//Support Teams
class Fic_eng: Fic_Soldier_Carbine { // Base ENG
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  linkedItems[] = {LINKED,LEADER_LINKED};
  items[] += {BASE_ENG,BASE_MEDICAL};
  backpackItems[] = {};
};

//Demo
class demol: Fic_eng {// Demolitions Leader
  magazines[] += {BASE_EXP};
  backpackItems[] = {RADIO_MR,"Toolkit"};
};
class demo: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
};
class mine: Fic_eng {// Mine Specialist
  magazines[] += {BASE_MINE};
  handguns[] = {MINE_DETECTOR};
};

class eng: fic_eng {// Logistics Engineer
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class engl: eng {// Logistics Leader
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  backpackItems[] += {RADIO_MR};
};
class fallback: rifleman {}; // This means any faction member who doesn't match something will use this loadout
