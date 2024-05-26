#include "..\ui\icons.inc"

#define RESPAWN_SHORT respawnType = "RESPAWN"; time = 10;
#define RESPAWN_MEDIUM respawnType = "RESPAWN"; time = 30;
#define RESPAWN_LONG respawnType = "RESPAWN"; time = 60;
#define WRECK_SHORT respawnType = "WRECK"; time = 10;
#define WRECK_MEDIUM respawnType = "WRECK"; time = 30;
#define WRECK_LONG respawnType = "WRECK"; time = 60;


#define UNLOCKED {}
#define LOCKED_PUBLIC_HELOS {"MACV", "DacCong", "GreenHornets", "3rdMEU", "MilitaryPolice", "QuarterHorse", "Frogmen", "Muskets", "SatansAngels", "633rdCSG", "7thCAV", "TigerForce", "SASR", "ARVN"}
#define LOCKED_LIMITED_ARMOR {"MACV", "DacCong", "3rdMEU", "QuarterHorse", "ACAV", "ARVN"}

#define LOCKED_MACV_DACCONG {"MACV", "DacCong"}
#define LOCKED_ANZAC {"MACV", "DacCong", "SASR"}
#define LOCKED_ARVN {"MACV", "DacCong", "ARVN"}
#define LOCKED_MILITARY_POLICE {"MACV", "DacCong", "MilitaryPolice"}
#define LOCKED_MUSKETS {"MACV", "DacCong", "Muskets"}
#define LOCKED_BLACKHORSE {"MACV", "DacCong", "QuarterHorse"}
#define LOCKED_SATANS_ANGELS {"MACV", "DacCong", "SatansAngels"}
#define LOCKED_7THCAV {"MACV", "DacCong", "7thCAV"}
#define LOCKED_TIGER_FORCE {"MACV", "DacCong", "TigerForce"}
#define LOCKED_UDT {"MACV", "DacCong", "Frogmen"}
#define LOCKED_633RD {"MACV", "DacCong", "633rdCSG"}
#define LOCKED_USMC {"MACV", "DacCong", "3rdMEU"}

// #define LOCKED_SCOUT_MG {"MACV", "DacCong", "7thCAV", "Muskets"}
// #define LOCKED_ONLY_WLUS {"MACV", "DacCong", "3rdMEU", "MilitaryPolice", "QuarterHorse", "Frogmen", "Muskets", "SatansAngels", "633rdCSG", "7thCAV", "TigerForce", "SASR", "ARVN"}



/*
WHAT VEHICLES GO IN WHAT TAG GROUP
*/

class vehicles {

	//Helo Transport
	class vn_b_air_ch47_01_01 {
		tags[] = {"ch47","armed","transport","helicopter","army"};
	};
	class vn_b_air_ch47_01_02 {
		tags[] = {"ch47", "transport", "helicopter", "7th"};
	};
	class vn_b_air_ch47_02_01 {
		tags[] = {"ch47","armed","transport","helicopter","dustoff","medical"};
	};
	class vn_b_air_ch47_03_01 {
		tags[] = {"ch47","armed","transport","helicopter","cargo","army"};
	};
	class vn_b_air_ch47_03_02 {
		tags[] = {"ch47", "transport", "helicopter", "7th"};
	};
	class vn_b_air_ch47_04_01 {
		tags[] = {"ch47","armed","transport","helicopter","army"};
	};
	class vn_b_air_oh6a_01 {
		tags[] = {"oh6a","transport","helicopter"};
	};
	class vn_b_air_uh1b_01_03 {
		tags[] = {"uh1","transport","medical", "helicopter", "dustoff"};
	};
	class vn_b_air_uh1d_01_03 {
		tags[] = {"uh1","transport","medical", "helicopter", "dustoff"};
	};
	class vn_b_air_uh1e_03_04 {
		tags[] = {"uh1","armed","transport","helicopter","usmc"};
	};
	class vn_i_air_ch34_01_02 {
		tags[] = {"ch34","armed","transport","helicopter","arvn"};
	};
	class vn_i_air_ch34_02_02 {
		tags[] = {"ch34","armed","transport","helicopter","arvn"};
	};
	class vn_b_air_ch34_01_01 {
		tags[] = {"ch34","armed","transport","helicopter"};
	};
	class vn_b_air_ch34_03_01 {
		tags[] = {"ch34","armed","transport","helicopter","usmc"};
	};
	class B_Heli_Light_01_F {
		tags[] = {"hummingbird", "transport", "helicopter", "cia"};
	};
	class vn_b_air_uh1b_01_09 {
		tags[] = {"uh1", "transport", "helicopter", "cia"};
	};
	class vn_b_air_uh1d_04_09 {
		tags[] = {"uh1", "transport", "helicopter", "cia"};
	};
	class vn_b_air_uh1c_07_01 {
		tags[] = {"uh1","armed","transport","helicopter","army"};
	};
	class vn_b_air_uh1c_07_02 {
		tags[] = {"uh1", "transport", "helicopter", "7th"};
	};
	class vn_b_air_uh1c_07_03 {
		tags[] = {"uh1", "transport", "helicopter", "usaf"};
	};
	class vn_b_air_uh1c_07_04 {
		tags[] = {"uh1", "transport", "helicopter", "usmc"};
	};
	class vn_b_air_uh1c_07_05 {
		tags[] = {"uh1", "transport", "helicopter", "frogmen"};
	};
	class vn_b_air_uh1c_07_06 {
		tags[] = {"uh1", "transport", "helicopter", "anzac"};
	};
	class vn_b_air_uh1c_07_07 {
		tags[] = {"uh1", "transport", "helicopter", "tf"};
	};
	class vn_b_air_uh1d_02_01 {
		tags[] = {"uh1","armed","transport","helicopter","army"};
	};
	class vn_b_air_uh1d_02_02 {
		tags[] = {"uh1", "transport", "helicopter", "7th"};
	};
	class vn_b_air_uh1d_02_03 {
		tags[] = {"uh1", "transport", "helicopter", "usaf"};
	};
	class vn_b_air_uh1d_02_04 {
		tags[] = {"uh1","transport","helicopter","usmc"};
	};
	class vn_b_air_uh1d_02_05 {
		tags[] = {"uh1", "transport", "helicopter", "frogmen"};
	};
	class vn_b_air_uh1d_02_06 {
		tags[] = {"uh1", "transport", "helicopter", "anzac"};
	};
	class vn_b_air_uh1d_02_07 {
		tags[] = {"uh1", "transport", "helicopter", "tf"};
	};
	class vn_b_air_uh1f_01_03 {
		tags[] = {"uh1", "transport", "helicopter", "usaf"};
	};
	class vn_i_air_uh1c_07_01{
		tags[] = {"uh1", "transport", "helicopter", "arvn"};
	};
	class vn_i_air_uh1d_02_01{
		tags[] = {"uh1", "transport", "helicopter", "arvn"};
	};

	//Helo CAS
	class vn_b_air_ach47_01_01 {
		tags[] = {"ch47","armed","firesupport","helicopter"};
	};
	class vn_b_air_ah1g_01 {
		tags[] = {"ah1g","armed","firesupport","helicopter"};
	};
	class vn_b_air_ah1g_06 {
		tags[] = {"ah1g","armed","firesupport","helicopter"};
	};
	class vn_b_air_oh6a_02 {
		tags[] = {"oh6a","armed","scout","helicopter","MG"};
	};
	class vn_b_air_oh6a_03 {
		tags[] = {"oh6a","armed","scout","helicopter","GL"};
	};
	class vn_b_air_oh6a_05 {
		tags[] = {"oh6a","armed","firesupport","helicopter"};
	};
	class vn_b_air_uh1c_01_01 {
		tags[] = {"uh1","armed","firesupport","helicopter"};
	};
	class vn_b_air_uh1c_02_01 {
		tags[] = {"uh1","armed","firesupport","helicopter"};
	};
	class vn_b_air_uh1c_03_01 {
		tags[] = {"uh1","armed","firesupport","helicopter"};
	};
	class vn_b_air_uh1c_04_01 {
		tags[] = {"uh1","armed","firesupport","helicopter"};
	};
	class vn_b_air_uh1c_05_01 {
		tags[] = {"uh1","armed","firesupport","helicopter"};
	};
	class vn_b_air_uh1c_06_01 {
		tags[] = {"uh1","armed","firesupport","helicopter"};
	};
	class vn_b_air_uh1d_03_06 {
		tags[] = {"uh1","armed","firesupport","helicopter"};
	};
	class vn_b_air_uh1e_01_04 {
		tags[] = {"uh1","armed","firesupport","helicopter"};
	};
	class vn_b_air_uh1e_02_04 {
		tags[] = {"uh1","armed","firesupport","helicopter"};
	};
	class vn_b_air_ch34_04_01 {
		tags[] = {"ch34","armed","firesupport","helicopter"};
	};

	//Plane CAS
	class vn_b_air_f100d_at {
		tags[] = {"f100","armed","firesupport","jet"};
	};
	class vn_b_air_f4b_navy_at {
		tags[] = {"f4","armed","firesupport","jet","naval"};
	};
	class vn_b_air_f4c_at {
		tags[] = {"f4","armed","firesupport","jet"};
	};

	//APC
	class vn_b_armor_m113_01 {
		tags[] = {"m113","armed","transport","apc"};
	};
	class vn_b_armor_m113_acav_01 {
		tags[] = {"m113","armed","transport","apc"};
	};
	class vn_b_armor_m113_acav_02 {
		tags[] = {"m113","armed","transport","apc"};
	};
	class vn_b_armor_m113_acav_03 {
		tags[] = {"m113","armed","transport","apc"};
	};
	class vn_b_armor_m113_acav_04 {
		tags[] = {"m113","armed","transport","apc"};
	};
	class vn_b_armor_m113_acav_05 {
		tags[] = {"m113","armed","transport","apc"};
	};
	class vn_b_armor_m113_acav_06 {
		tags[] = {"m113","armed","firesupport","apc","antitank"};
	};
	class vn_b_armor_m125_01 {
		tags[] = {"m113","armed","firesupport","apc","artillery"};
	};
	class vn_b_armor_m132_01 {
		tags[] = {"m113","armed","firesupport","apc","flamethrower"};
	};
	class vn_b_armor_m577_01 {
		tags[] = {"m577","transport","apc"};
	};
	class vn_b_armor_m577_02 {
		tags[] = {"m577","medical","apc"};
	};
	class vn_i_armor_m113_01 {
		tags[] = {"m113","armed","transport","apc","arvn"};
	};
	class vn_i_armor_m113_acav_01 {
		tags[] = {"m113","armed","transport","apc","arvn"};
	};
	class vn_i_armor_m113_acav_02 {
		tags[] = {"m113","armed","transport","apc","arvn"};
	};
	class vn_i_armor_m113_acav_03 {
		tags[] = {"m113","armed","transport","apc","arvn"};
	};
	class vn_i_armor_m113_acav_04 {
		tags[] = {"m113","armed","transport","apc","arvn"};
	};
	class vn_i_armor_m113_acav_05 {
		tags[] = {"m113","armed","transport","apc","arvn"};
	};
	class vn_i_armor_m113_acav_06 {
		tags[] = {"m113","armed","firesupport","apc","antitank","arvn"};
	};
	class vn_i_armor_m125_01 {
		tags[] = {"m113","armed","firesupport","apc","artillery","arvn"};
	};
	class vn_i_armor_m132_01 {
		tags[] = {"m113","armed","firesupport","apc","flamethrower","arvn"};
	};
	class vn_i_armor_m577_01 {
		tags[] = {"m577","transport","apc","arvn"};
	};
	class vn_i_armor_m577_02 {
		tags[] = {"m577","medical","apc","arvn"};
	};

	//Armor
	class vn_b_armor_m41_01_01 {
		tags[] = {"m41a3","armed","firesupport","tank","lighttank","antitank","army"};
	};
	class vn_b_armor_m48_01_01 {
		tags[] = {"m48a3","armed","firesupport","tank","heavytank","antitank","army"};
	};
	class vn_b_armor_m67_01_01 {
		tags[] = {"m67a2","armed","firesupport","tank","flamethrower","army"};
	};
	class vn_b_armor_m41_01_02 {
		tags[] = {"m41a3","armed","firesupport","tank","lighttank","antitank","usmc"};
	};
	class vn_b_armor_m48_01_02 {
		tags[] = {"m48a3","armed","firesupport","tank","heavytank","antitank","usmc"};
	};
	class vn_b_armor_m67_01_02 {
		tags[] = {"m67a2","armed","firesupport","tank","flamethrower","usmc"};
	};
	class vn_i_armor_type63_01 {
		tags[] = {"type63","armed","firesupport","tank","lighttank","arvn"};
	};
	class vn_i_armor_m41_01 {
		tags[] = {"type63","armed","firesupport","tank","lighttank","arvn"};
	};
	class vn_i_armor_m67_01_01 {
		tags[] = {"type63","armed","firesupport","tank","lighttank","arvn"};
	};
	class vn_i_armor_m48_01_01 {
		tags[] = {"type63","armed","firesupport","tank","lighttank","arvn"};
	};

	//Car
	class vn_b_wheeled_lr2a_01_aus_army {
		tags[] = {"dirtranger","transport","car"};
	};
	class vn_b_wheeled_lr2a_02_aus_army {
		tags[] = {"dirtranger","transport","car"};
	};
	class vn_b_wheeled_lr2a_03_aus_army {
		tags[] = {"dirtranger","medical","car"};
	};
	class vn_b_wheeled_lr2a_mg_01_aus_army {
		tags[] = {"dirtranger","armed","firesupport","car"};
	};
	class vn_b_wheeled_lr2a_mg_02_aus_army {
		tags[] = {"dirtranger","armed","firesupport","car"};
	};
	class vn_b_wheeled_lr2a_mg_03_aus_army {
		tags[] = {"dirtranger","armed","firesupport","car","antitank"};
	};
	class vn_b_wheeled_m151_01 {
		tags[] = {"m151a1","transport","car","army"};
	};
	class vn_b_wheeled_m151_02 {
		tags[] = {"m151a1","transport","car","army"};
	};
	class vn_b_wheeled_m151_01_mp {
		tags[] = {"m151a1","transport","car","mp"};
	};
	class vn_b_wheeled_m151_02_mp {
		tags[] = {"m151a1","transport","car","mp"};
	};
	class vn_b_wheeled_m151_01_usmc {
		tags[] = {"m151a1","transport","car","usmc"};
	};
	class vn_b_wheeled_m151_02_usmc {
		tags[] = {"m151a1","transport","car","usmc"};
	};
	class vn_b_wheeled_m151_mg_02 {
		tags[] = {"m151a1","armed","firesupport","car","army"};
	};
	class vn_b_wheeled_m151_mg_02_mp {
		tags[] = {"m151a1","armed","firesupport","car","mp"};
	};
	class vn_b_wheeled_m151_mg_02_usmc {
		tags[] = {"m151a1","armed","firesupport","car","usmc"};
	};
	class vn_b_wheeled_m151_mg_03 {
		tags[] = {"m151a1","armed","firesupport","car","army"};
	};
	class vn_b_wheeled_m151_mg_03_mp {
		tags[] = {"m151a1","armed","firesupport","car","mp"};
	};
	class vn_b_wheeled_m151_mg_03_usmc {
		tags[] = {"m151a1","armed","firesupport","car","usmc"};
	};
	class vn_b_wheeled_m151_mg_04 {
		tags[] = {"m151a1","armed","firesupport","car","army"};
	};
	class vn_b_wheeled_m151_mg_04_mp {
		tags[] = {"m151a1","armed","firesupport","car","mp"};
	};
	class vn_b_wheeled_m151_mg_04_usmc {
		tags[] = {"m151a1","armed","firesupport","car","usmc"};
	};
	class vn_b_wheeled_m151_mg_05 {
		tags[] = {"m151a1","armed","firesupport","car","antitank"};
	};
	class vn_b_wheeled_m151_mg_06 {
		tags[] = {"m151a1","armed","firesupport","car","antitank"};
	};
	class vn_b_wheeled_m274_01_01 {
		tags[] = {"m274","transport","car"};
	};
	class vn_b_wheeled_m274_02_01 {
		tags[] = {"m274","transport","car"};
	};
	class vn_b_wheeled_m274_02_03 {
		tags[] = {"m274","transport","car","airport"};
	};
	class vn_b_wheeled_m274_mg_01_01 {
		tags[] = {"m274","armed","firesupport","car"};
	};
	class vn_b_wheeled_m274_mg_02_01 {
		tags[] = {"m274","armed","firesupport","car","antitank"};
	};
	class vn_b_wheeled_m274_mg_03_01 {
		tags[] = {"m274","armed","firesupport","car"};
	};
	class vn_b_wheeled_m54_01 {
		tags[] = {"m54","transport","truck"};
	};
	class vn_b_wheeled_m54_02 {
		tags[] = {"m54","transport","truck"};
	};
	class vn_b_wheeled_m54_03 {
		tags[] = {"m109","transport","truck"};
	};
	class vn_b_wheeled_m54_01_usmc {
		tags[] = {"m54","transport","truck","usmc"};
	};
	class vn_b_wheeled_m54_02_usmc {
		tags[] = {"m54","transport","truck","usmc"};
	};
	class vn_b_wheeled_m54_03_usmc {
		tags[] = {"m109","transport","truck","usmc"};
	};
	class vn_b_wheeled_m54_ammo_usmc {
		tags[] = {"m54","ammo","truck","usmc"};
	};
	class vn_b_wheeled_m54_fuel_usmc {
		tags[] = {"m49","fuel","truck","usmc"};
	};
	class vn_b_wheeled_m54_repair_usmc {
		tags[] = {"m54","repair","truck","usmc"};
	};
	class vn_b_wheeled_m54_ammo {
		tags[] = {"m54","ammo","truck"};
	};
	class vn_b_wheeled_m54_fuel {
		tags[] = {"m49","fuel","truck"};
	};
	class vn_b_wheeled_m54_mg_01 {
		tags[] = {"m54","armed","firesupport","truck"};
	};
	class vn_b_wheeled_m54_mg_02 {
		tags[] = {"m54","armed","firesupport","truck","antiair"};
	};
	class vn_b_wheeled_m54_mg_03 {
		tags[] = {"m54","armed","firesupport","truck"};
	};
	class vn_b_wheeled_m54_repair {
		tags[] = {"m54","repair","truck"};
	};
	class vn_i_wheeled_m151_01 {
		tags[] = {"m151a1","transport","car","arvn"};
	};
	class vn_i_wheeled_m151_02 {
		tags[] = {"m151a1","transport","car","arvn"};
	};
	class vn_i_wheeled_m151_mg_01 {
		tags[] = {"m151a1","armed","firesupport","car","arvn"};
	};
	class vn_i_wheeled_m151_mg_06 {
		tags[] = {"m151a1","armed","firesupport","car","antitank","arvn"};
	};
	class vn_i_wheeled_m54_01 {
		tags[] = {"m54","transport","truck","arvn"};
	};
	class vn_i_wheeled_m54_02 {
		tags[] = {"m54","transport","truck","arvn"};
	};
	class vn_i_wheeled_m54_03 {
		tags[] = {"m109","transport","truck","arvn"};
	};
	class vn_i_wheeled_m54_ammo {
		tags[] = {"m54","ammo","truck","arvn"};
	};
	class vn_i_wheeled_m54_fuel {
		tags[] = {"m49","fuel","truck","arvn"};
	};
	class vn_i_wheeled_m54_repair {
		tags[] = {"m54","repair","truck","arvn"};
	};

	//Airport Car
	class vn_b_wheeled_m54_repair_airport {
		tags[] = {"m54","repair","truck","airport"};
	};
	class vn_b_wheeled_m54_fuel_airport {
		tags[] = {"m49","fuel","truck","airport"};
	};
	class vn_b_wheeled_m54_ammo_airport {
		tags[] = {"m54","ammo","truck","airport"};
	};
	class vn_b_wheeled_m54_01_airport {
		tags[] = {"m54","transport","truck","airport"};
	};
	class vn_b_wheeled_m274_01_03 {
		tags[] = {"m274","transport","car","airport"};
	};

	//Civilian
	class vn_c_bicycle_01 {
		tags[] = {"bicycle","civilian","transport","bicycle"};
	};
	class vn_c_bicycle_02 {
		tags[] = {"bicycle","civilian","transport","bicycle"};
	};
	class vn_c_car_01_01 {
		tags[] = {"boheme","civilian","transport","car"};
	};
	class vn_c_car_01_02 {
		tags[] = {"boheme","civilian","transport","car"};
	};
	class vn_c_car_02_01 {
		tags[] = {"boheme","civilian","transport","car"};
	};
	class vn_c_car_03_01 {
		tags[] = {"boheme","civilian","transport","car"};
	};
	class vn_c_car_04_01 {
		tags[] = {"boheme","civilian","transport","car"};
	};
	class vn_c_wheeled_m151_01 {
		tags[] = {"offroad","civilian","transport","car"};
	};
	class vn_c_wheeled_m151_02 {
		tags[] = {"offroad","civilian","transport","car"};
	};

	//Statics
	class vn_i_fank_70_static_sgm_high_01 {
		tags[] = {"sgm","static","machinegun"};
	};
	class vn_i_fank_70_static_sgm_low_01 {
		tags[] = {"sgm","static","machinegun"};
	};
	class vn_i_fank_70_static_sgm_low_02 {
		tags[] = {"sgm","static","machinegun"};
	};
	class vn_i_fank_70_static_zgu1_01 {
		tags[] = {"zgu1","static","antiair","nodisassemble"};
	};
	class vn_b_army_static_tow {
		tags[] = {"bgm71","armed","firesupport","static","antitank"};
	};
	class vn_b_sf_static_tow {
		tags[] = {"bgm71","armed","firesupport","static","antitank"};
	};
	class vn_b_navy_static_l60mk3 {
		tags[] = {"l60","armed","firesupport","static","antiair","nodisassemble"};
	};
	class vn_b_navy_static_l70mk2 {
		tags[] = {"l70","armed","firesupport","static","antiair","nodisassemble"};
	};
	class vn_b_army_static_m101_01 {
		tags[] = {"m101","armed","firesupport","static","antitank","nodisassemble"};
	};
	class vn_b_army_static_m101_02 {
		tags[] = {"m101","armed","firesupport","static","artillery","nodisassemble"};
	};
	class vn_b_army_static_m1919a4_high {
		tags[] = {"m1919","armed","firesupport","static","machinegun"};
	};
	class vn_b_army_static_m1919a4_low {
		tags[] = {"m1919","armed","firesupport","static","machinegun"};
	};
	class vn_b_army_static_m1919a6 {
		tags[] = {"m1919","armed","firesupport","static","machinegun"};
	};
	class vn_b_army_static_mortar_m2 {
		tags[] = {"m2","armed","firesupport","static","artillery","mortar"};
	};
	class vn_b_army_static_mortar_m29 {
		tags[] = {"m29","armed","firesupport","static","artillery","mortar"};
	};
	class vn_b_army_static_m2_high {
		tags[] = {"m2hb","armed","firesupport","static","machinegun"};
	};
	class vn_b_army_static_m2_scoped_high {
		tags[] = {"m2hb","armed","firesupport","static","machinegun"};
	};
	class vn_b_army_static_m2_low {
		tags[] = {"m2hb","armed","firesupport","static","machinegun"};
	};
	class vn_b_army_static_m2_scoped_low {
		tags[] = {"m2hb","armed","firesupport","static","machinegun"};
	};
	class vn_b_army_static_m40a1rr {
		tags[] = {"m40","armed","firesupport","static","antitank","nodisassemble"};
	};
	class vn_b_army_static_m45 {
		tags[] = {"m45","armed","firesupport","static","antiair","nodisassemble"};
	};
	class vn_b_army_static_m60_high {
		tags[] = {"m60","armed","firesupport","static","machinegun"};
	};
	class vn_b_army_static_m60_low {
		tags[] = {"m60","armed","firesupport","static","machinegun"};
	};
	class vn_b_army_static_mk18 {
		tags[] = {"m60","armed","firesupport","static","machinegun"};
	};

	//Boat
	class vn_b_boat_12_01 {
		tags[] = {"naval","pbr"};
	};
	class vn_b_boat_12_02 {
		tags[] = {"naval","pbr"};
	};
	class vn_b_boat_12_03 {
		tags[] = {"naval","pbr"};
	};
	class vn_b_boat_12_04 {
		tags[] = {"naval","pbr"};
	};
	class vn_b_boat_13_01 {
		tags[] = {"naval","pbr"};
	};
	class vn_b_boat_13_02 {
		tags[] = {"naval","pbr"};
	};
	class vn_b_boat_13_03 {
		tags[] = {"naval","pbr"};
	};
	class vn_b_boat_13_04 {
		tags[] = {"naval","pbr"};
	};
	class vn_b_boat_05_01 {
		tags[] = {"naval","nasty"};
	};
	class vn_b_boat_05_02 {
		tags[] = {"naval","nasty"};
	};
	class vn_b_boat_06_01 {
		tags[] = {"naval","nasty"};
	};
	class vn_b_boat_06_02 {
		tags[] = {"naval","nasty"};
	};
	class vn_b_boat_09_01 {
		tags[] = {"naval","stab"};
	};
	class vn_b_boat_10_01 {
		tags[] = {"naval","stab"};
	};
	class vn_b_boat_11_01 {
		tags[] = {"naval","stab"};
	};
	class B_Boat_Transport_01_F {
		tags[] = {"naval","RHIB"};
	};

	//DAC CONG
	//Armor
	class vn_o_armor_type63_01 {
		tags[] = {"t63","pavn","armor"};
	};
	class vn_o_armor_m41_01 {
		tags[] = {"m41","pavn","armor"};
	};
	class vn_o_armor_pt76a_01 {
		tags[] = {"pt76","pavn","armor"};
	};
	class vn_o_armor_pt76b_01 {
		tags[] = {"pt76","pavn","armor"};
	};
	class vn_o_armor_t54b_01 {
		tags[] = {"t54","pavn","armor"};
	};
	class vn_o_armor_ot54_01 {
		tags[] = {"t54","pavn","armor"};
	};


	//Helicopters
	class vn_o_air_mi2_01_01 {
		tags[] = {"mi2","pavn","helo","transport"};
	};
	class vn_o_air_mi2_01_02 {
		tags[] = {"mi2","pavn","helo","transport"};
	};
	class vn_o_air_mi2_01_03 {
		tags[] = {"mi2","pavn","helo","transport"};
	};
	class vn_o_air_mi2_02_01 {
		tags[] = {"mi2","pavn","helo","medical"};
	};
	class vn_o_air_mi2_02_02 {
		tags[] = {"mi2","pavn","helo","medical"};
	};
	class vn_o_air_mi2_03_01 {
		tags[] = {"mi2","pavn","helo","transport","armed"};
	};
	class vn_o_air_mi2_03_02 {
		tags[] = {"mi2","pavn","helo","transport","armed"};
	};
	class vn_o_air_mi2_03_03 {
		tags[] = {"mi2","pavn","helo","transport","armed"};
	};
	class vn_o_air_mi2_03_04 {
		tags[] = {"mi2","pavn","helo","transport","armed"};
	};
	class vn_o_air_mi2_03_05 {
		tags[] = {"mi2","pavn","helo","transport","armed"};
	};
	class vn_o_air_mi2_03_06 {
		tags[] = {"mi2","pavn","helo","transport","armed"};
	};
	class vn_o_air_mi2_04_01 {
		tags[] = {"mi2","pavn","helo","viper"};
	};
	class vn_o_air_mi2_04_02 {
		tags[] = {"mi2","pavn","helo","viper"};
	};
	class vn_o_air_mi2_04_03 {
		tags[] = {"mi2","pavn","helo","viper"};
	};
	class vn_o_air_mi2_04_04 {
		tags[] = {"mi2","pavn","helo","viper"};
	};
	class vn_o_air_mi2_04_05 {
		tags[] = {"mi2","pavn","helo","viper"};
	};
	class vn_o_air_mi2_04_06 {
		tags[] = {"mi2","pavn","helo","viper"};
	};
	class vn_o_air_mi2_05_01 {
		tags[] = {"mi2","pavn","helo","salamander"};
	};
	class vn_o_air_mi2_05_02 {
		tags[] = {"mi2","pavn","helo","salamander"};
	};
	class vn_o_air_mi2_05_03 {
		tags[] = {"mi2","pavn","helo","salamander"};
	};
	class vn_o_air_mi2_05_04 {
		tags[] = {"mi2","pavn","helo","salamander"};
	};
	class vn_o_air_mi2_05_05 {
		tags[] = {"mi2","pavn","helo","salamander"};
	};
	class vn_o_air_mi2_05_06 {
		tags[] = {"mi2","pavn","helo","salamander"};
	};

	//APC
	class vn_o_armor_btr50pk_01 {
		tags[] = {"btr50","pavn","apc"};
	};
	class vn_o_armor_btr50pk_02 {
		tags[] = {"btr50","pavn","apc"};
	};
	class vn_o_armor_btr50pk_03 {
		tags[] = {"btr50","pavn","apc"};
	};
	class vn_o_armor_m113_01 {
		tags[] = {"m113","pavn","apc"};
	};

	//Cars
	class vn_o_wheeled_btr40_mg_01 {
		tags[] = {"btr40","pavn","car"};
	};
	class vn_o_wheeled_btr40_mg_02 {
		tags[] = {"btr40","pavn","car"};
	};
	class vn_o_wheeled_btr40_mg_03 {
		tags[] = {"btr40","pavn","car"};
	};
	class vn_o_wheeled_btr40_mg_04 {
		tags[] = {"btr40","pavn","car"};
	};
	class vn_o_wheeled_btr40_mg_05 {
		tags[] = {"btr40","pavn","car"};
	};
	class vn_o_wheeled_btr40_mg_06 {
		tags[] = {"btr40","pavn","car"};
	};
	class vn_o_wheeled_btr40_01 {
		tags[] = {"btr40","pavn","car"};
	};
	class vn_o_wheeled_btr40_02 {
		tags[] = {"btr40","pavn","car"};
	};
	class vn_o_wheeled_z157_01 {
		tags[] = {"z157","pavn","car"};
	};
	class vn_o_wheeled_z157_02 {
		tags[] = {"z157","pavn","car"};
	};
	class vn_o_wheeled_z157_03 {
		tags[] = {"z157","pavn","car"};
	};
	class vn_o_wheeled_z157_04 {
		tags[] = {"z157","pavn","car"};
	};
	class vn_o_wheeled_z157_ammo {
		tags[] = {"z157","pavn","car","utility"};
	};
	class vn_o_wheeled_z157_fuel {
		tags[] = {"z157","pavn","car","utility"};
	};
	class vn_o_wheeled_z157_repair {
		tags[] = {"z157","pavn","car","utility"};
	};

	//Planes
	class vn_o_air_mig19_at {
		tags[] = {"mig19","pavn","jet"};
	};
	class vn_o_air_mig19_bmb {
		tags[] = {"mig19","pavn","jet"};
	};
	class vn_o_air_mig19_cas {
		tags[] = {"mig19","pavn","jet"};
	};
	class vn_o_air_mig19_cap {
		tags[] = {"mig19","pavn","jet"};
	};
	class vn_o_air_mig19_gun {
		tags[] = {"mig19","pavn","jet"};
	};
	class vn_o_air_mig19_hbmb {
		tags[] = {"mig19","pavn","jet"};
	};
	class vn_o_air_mig19_mr {
		tags[] = {"mig19","pavn","jet"};
	};
	class vn_o_air_mig21_at {
		tags[] = {"mig21","pavn","jet"};
	};
	class vn_o_air_mig21_atgm {
		tags[] = {"mig21","pavn","jet"};
	};
	class vn_o_air_mig21_bmb {
		tags[] = {"mig21","pavn","jet"};
	};
	class vn_o_air_mig21_cas {
		tags[] = {"mig21","pavn","jet"};
	};
	class vn_o_air_mig21_cap {
		tags[] = {"mig21","pavn","jet"};
	};
	class vn_o_air_mig21_gun {
		tags[] = {"mig21","pavn","jet"};
	};
	class vn_o_air_mig21_hbmb {
		tags[] = {"mig21","pavn","jet"};
	};
	class vn_o_air_mig21_hcas {
		tags[] = {"mig21","pavn","jet"};
	};
	class vn_o_air_mig21_mr {
		tags[] = {"mig21","pavn","jet"};
	};

	//Statics

	class vn_o_nva_static_zgu1_01 {
		tags[] = {"pavn","static"};
	};
	class vn_o_nva_static_zpu4 {
		tags[] = {"pavn","static"};
	};
	class vn_o_nva_65_static_zpu4 {
		tags[] = {"pavn","static"};
	};
	class vn_o_nva_static_d44_01 {
		tags[] = {"pavn","static"};
	};
	class vn_o_nva_65_static_d44 {
		tags[] = {"pavn","static"};
	};
	class vn_o_nva_65_static_d44_01 {
		tags[] = {"pavn","static"};
	};
	class vn_o_vc_static_mg42_low {
		tags[] = {"pavn","static"};
	};
	class vn_o_vc_static_mg42_high {
		tags[] = {"pavn","static"};
	};

	// DO NOT EVER ALLOW ANYONE TO USE THIS!
	// it is far too OP it is completely ridiculous
	/*
	class vn_o_nva_static_h12 {
		tags[] = {"pavn","static"};
	};
	*/

	// don't spawn these either as setting them up would be OP
	/*
	class vn_o_static_rsna75 {
		tags[] = {"pavn","static"};
	};
	class vn_sa2 {
		tags[] = {"pavn","static"};
	};
	*/
};


/*
TEMPLATES FOR WHAT VEHICLES PEOPLE CAN GET FROM DIFFERENT SPAWN POINTS

i.e. applying the tags above to possible spawner

A NOTE ON NAMING CONVENTIONS -------------------------------------------------------------------

All classes here use a naming convention following this pattern: locking_type_subtype_othersubtypes

- locking --> who the vehicle is locked to, if any
- whether the vehidle is ground (grnd), air (air), static weapon (statics) or a boat (boats)
- subtypes are: firesupport, transport, patrol, utility etc.
- further subtypes are things like: custom, light, heavy, medium, airport etc.

please add additional subtypes can be added at the end, e.g. unlocked_utility_airport_light
*/

class parent_grnd_transport_light {
	name = "Ground Transport (Light)";
	class categories {
		class m151 {
			name = "M151A1";
			icon = VEHICLE_ICON_CAR;
			include[] = { { "m151a1","transport","army" } };
			exclude[] = { { "armed" } };
		};
		class mule {
			name = "M274 Mule";
			icon = VEHICLE_ICON_CAR;
			include[] = { { "m274","transport" } };
			exclude[] = { { "airport" } };
		};
	};
};

class parent_grnd_patrol {
	name = "Ground Transport (Patrol)";
	class categories {
		class m151 {
			name = "M151A1";
			icon = VEHICLE_ICON_CAR;
			include[] = { { "m151a1","armed","army" } };
			exclude[] = { { "transport" } };
		};
		class mule {
			name = "M274 Mule";
			icon = VEHICLE_ICON_CAR;
			include[] = { { "m274", "armed" } };
			exclude[] = { { "transport" } };
		};
	};
};

class parent_grnd_transport_heavy {
	name = "Ground Transport (Heavy)";
	class categories {
		class m113 {
			name = "M113";
			icon = VEHICLE_ICON_ARMOUR;
			include[] = { { "m113", "transport" } };
			exclude[] = { { "firesupport" } };
		};
		class trucks {
			name = "Trucks";
			icon = VEHICLE_ICON_TRUCK;
			include[] = { { "truck", "transport" } };
			exclude[] = { { "airport" } };
		};
	};
};



class parent_air_transport_all {
	name = "Air Transport (All)";
	class categories {
		class cayuse {
			name = "OH-6A";
			icon = VEHICLE_ICON_HELO;
			include[] = { {"oh6a","transport"}};
			exclude[] = { {"firesupport","scout"} };
		};
		class uh1 {
			name = "UH-1";
			icon = VEHICLE_ICON_HELO;
			include[] = { {"uh1","transport","army"} };
			exclude[] = { {"firesupport","usmc","medical","cia","arvn","usaf","pavn","7th","frogmen","anzac"} };
		};
		class ch34 {
			name = "CH-34";
			icon = VEHICLE_ICON_HELO;
			include[] = { {"ch34","transport"} };
			exclude[] = { {"firesupport"} };
		};
		class ch47 {
			name = "CH-47";
			icon = VEHICLE_ICON_HELO;
			include[] = { {"ch47","transport","army"} };
			exclude[] = { {"firesupport","7th"} };
		};
	};
};

class parent_grnd_firesupport_light {
	name = "Ground Firesupport (Lights)";
	class categories {
		class m151 {
			name = "M151A1";
			icon = VEHICLE_ICON_CAR;
			include[] = { { "m151a1", "armed", "antitank" } };
			exclude[] = { { "transport","usmc","mp","army"} };
		};
		class trucks {
			name = "Trucks";
			icon = VEHICLE_ICON_TRUCK;
			include[] = { {"truck", "firesupport" } };
			exclude[] = { { "pavn" } };
		};
		class armor {
			name = "Armor";
			icon = VEHICLE_ICON_ARMOUR;
			include[] = { { "apc", "firesupport" } };
			exclude[] = { { "pavn" } };
		};
	};
};



class parent_air_transport_light {
	name = "Air Transport (Cayuse)";
	class categories {
		class cayuse {
			name = "OH-6A";
			icon = VEHICLE_ICON_HELO;
			include[] = { {"oh6a", "transport" } };
			exclude[] = { {"firesupport" } };
		};
	};
};

class parent_air_transport_medium {
	name = "Air Transport (Slicks)";
	class categories {
		class uh1 {
			name = "UH-1";
			icon = VEHICLE_ICON_HELO;
			include[] = { {"uh1","transport","army" } };
			exclude[] = { {"firesupport", "7thcav","usmc","arvn"} };
		};
	};
};

class parent_air_transport_heavy {
	name = "Air Transport (Heavy)";
	class categories {
		class ch47 {
			name = "CH-47";
			icon = VEHICLE_ICON_HELO;
			include[] = { {"ch47","army" }};
			exclude[] = { {"firesupport", "7th" } };
		};
		class ch34 {
			name = "CH-34";
			icon = VEHICLE_ICON_HELO;
			include[] = { {"ch34","transport"} };
			exclude[] = { {"firesupport"} };
		};
	};
};

class parent_transport_trucks {
	name = "Ground Transport (Trucks)";
	class categories {
		class trucks {
			name = "Trucks";
			icon = VEHICLE_ICON_TRUCK;
			include[] = { { "truck", "transport" } };
			exclude[] = { {"airport"} };
		};
	};
};

class parent_grnd_ambulance {
	name = "Ground Utility (Ambulance)";
	class categories {
		class car {
			name = "Cars";
			icon = VEHICLE_ICON_CAR;
			include[] = { { "car", "medical" } };
			exclude[] = { { "pavn" } };
		};
		class truck {
			name = "Trucks";
			icon = VEHICLE_ICON_TRUCK;
			include[] = { { "truck", "medical" } };
			exclude[] = { { "pavn" } };
		};
	};
};


class parent_grnd_firesupport_heavy {
	name = "Ground Firesupport (Heavy)";
	class categories {
		class tanks {
			name = "Tanks";
			icon = VEHICLE_ICON_ARMOUR;
			include[] = { { "tank","army" } };
			exclude[] = { { "arvn","usmc","pavn" } };
		};
	};
};


class parent_statics_large {
	name = "Static Weapons (Heavy)";
	class categories {
		class anti_air {
			name = "Anti-air";
			icon = VEHICLE_ICON_STATIC;
			include[] = { { "static", "antiair", "nodisassemble" } };
			exclude[] = { {"artillery" } };
		};
		class anti_tank {
			name = "Anti-tank";
			icon = VEHICLE_ICON_STATIC;
			include[] = { { "static", "antitank", "nodisassemble" } };
			exclude[] = { {"artillery" } };
		};
	};
};


class parent_grnd_utility {
	name = "Ground Utility (All)";
	class categories {
		class fuel {
			name = "Fuel";
			icon = VEHICLE_ICON_TRUCK;
			include[] = { {"fuel" }};
			exclude[] = { {"airport" }};
		};
		class ammo {
			name = "Ammo";
			icon = VEHICLE_ICON_TRUCK;
			include[] = { {"ammo" }};
			exclude[] = { {"airport" }};
		};
		class repair {
			name = "Repair";
			icon = VEHICLE_ICON_TRUCK;
			include[] = { {"repair" }};
			exclude[] = { {"airport" }};
		};
	};
};

// not currently used
// respawn short, unlocked is default
class parent_grnd_utility_airport {
	name = "Ground Utility (Airport)";
	class categories {
		class fuel {
			name = "Fuel";
			icon = VEHICLE_ICON_TRUCK;
			include[] = { { "fuel", "airport" } };
			exclude[] = { { "pavn" } };
		};
		class ammo {
			name = "Ammo";
			icon = VEHICLE_ICON_TRUCK;
			include[] = { { "ammo", "airport" } };
			exclude[] = { { "pavn" } };
		};
		class repair {
			name = "Repair";
			icon = VEHICLE_ICON_TRUCK;
			include[] = { { "repair", "airport" } };
			exclude[] = { { "pavn" } };
		};
	};
};

// not currently used
// respawn short, unlocked is default
class parent_transport_airport {
	name = "Ground Transport (Airport)";
	class categories {
		class mule {
			name = "M274 Mule";
			icon = VEHICLE_ICON_CAR;
			include[] = { { "m274","airport" } };
			exclude[] = { { "armed" } };
		};
		class truck {
			name = "Truck";
			icon = VEHICLE_ICON_TRUCK;
			include[] = { { "truck", "airport" } };
			exclude[] = { { "armed" } };
		};
	};
};

// everything for dac cong has the spawn respawns and whitelisting
class parent_dac {
	RESPAWN_SHORT;
	lockTeams[] = LOCKED_MACV_DACCONG;
};

/*
SPAWNERS THAT CAN BE USED IN THE MISSION

either by applying whitelisting and respawning configurations to the templates above
or by creating a new spawner configuration from scratch

Please read the following two notes. They will help you to find things quicker when someone complains
about their whitelisting.

*Code is read more often than it is written.*

A NOTE ON NAMING CONVENTIONS -------------------------------------------------------------------

All classes here use a naming convention following this pattern: locking_type_subtype_othersubtypes

- locking --> who the vehicle is locked to, if any
- whether the vehidle is ground (grnd), air (air), static weapon (statics) or a boat (boats)
- subtypes are: firesupport, transport, patrol, utility etc.
- further subtypes are things like: custom, light, heavy, medium, airport etc.

please add additional subtypes can be added at the end, e.g. unlocked_utility_airport_light

A NOTE ON ORDERING -------------------------------------------------------------------

each class is sorted in the following order

1. whitelisting (unlocked first, then public-ish, then WLUs alphabetically)
2. inherited from tempalte above first, then custom spawners
3. ground -> air
4. light -> heavy

please try to stick to that order in future so it's easy to find things!
*/


class spawn_point_types {

	// unlocked /////////////////////////////////////////////////////////////////////////

	// spike team base helos

	class unlocked_air_transport_light: parent_air_transport_light {
		RESPAWN_SHORT;
		lockTeams[] = UNLOCKED;
	};

	// acav base

	class unlocked_grnd_patrol: parent_grnd_patrol {
		RESPAWN_MEDIUM;
		lockTeams[] = UNLOCKED;
	};
	class unlocked_grnd_light_transport: parent_grnd_transport_light {
		RESPAWN_SHORT;
		lockTeams[] = UNLOCKED;
	};
	class unlocked_grnd_transport_trucks: parent_grnd_transport_trucks {
		RESPAWN_LONG;
		lockTeams[] = UNLOCKED;
	};
	class unlocked_grnd_utility: parent_grnd_utility {
		RESPAWN_SHORT;
		lockTeams[] = UNLOCKED;
	};

	// boat dock

	class unlocked_boats_small {
		name = "Small Boats (Public)";
		RESPAWN_SHORT;
		lockTeams[] = UNLOCKED;
		class categories {
			class pbr {
				name = "PBR";
				icon = VEHICLE_ICON_BOAT;
				include[] = { { "naval", "pbr" } };
				exclude[] = { { "pavn" } };
			};
			class boat {
				name = "Stab";
				icon = VEHICLE_ICON_BOAT;
				include[] = { { "naval", "stab" } };
				exclude[] = { { "pavn" } };
			};
			class RHIB {
				name = "RHIB";
				icon = VEHICLE_ICON_BOAT;
				include[] = { { "naval" , "RHIB"} };
				exclude[] = { { "pavn" } };
			};
		};
	};

	// green hornets /////////////////////////////////////////////////////////////////////

	class greenhornets_air_transport_all: parent_air_transport_all {
		RESPAWN_MEDIUM;
		lockTeams[] = LOCKED_PUBLIC_HELOS;
	};

	// acav + somewlus /////////////////////////////////////////////////////////////////////////

	class acav_grnd_transport_heavy: parent_grnd_transport_heavy {
		WRECK_LONG;
		lockTeams[] = LOCKED_LIMITED_ARMOR;
	};
	class acav_grnd_firesupport_light: parent_grnd_firesupport_light {
		WRECK_LONG;
		lockTeams[] = LOCKED_LIMITED_ARMOR;
	};
	class acav_grnd_firesupport_heavy: parent_grnd_firesupport_heavy {
		WRECK_LONG;
		lockTeams[] = LOCKED_LIMITED_ARMOR;
	};
	class acav_statics_large: parent_statics_large {
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_LIMITED_ARMOR;
	};

	// 633rd //////////////////////////////////////////////////////////////////////////////

	class 633rd_grnd_ambulance: parent_grnd_ambulance {
		RESPAWN_LONG;
		lockTeams[] = LOCKED_633RD;
	};
	class 633rd_air_transport_custom {
		name = "Transport Helicopters (633rd)";
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_633RD;
		class categories {
			class uh1 {
				name = "UH-1";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"uh1","transport","usaf" } };
				exclude[] = { {"firesupport", "7thcav","usmc","arvn","army"} };
			};
		};
	};
	class 633rd_air_dustoff_medical_custom {
		name = "Dust-off and Medevac Helicopters (633rd)";
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_633RD;
		class categories {
			class uh1 {
				name = "UH-1 Medical";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "uh1", "medical", "dustoff" } };
				exclude[] = { { "pavn" } };
			};
			class ch47 {
				name = "Ch-47 Medical";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "ch47", "medical", "dustoff" } };
				exclude[] = { { "pavn" } };
			};
		};
	};

	// 7th cav //////////////////////////////////////////////////////////////////////////

	class 7thcav_grnd_patrol: parent_grnd_patrol {
		RESPAWN_MEDIUM;
		lockTeams[] = LOCKED_7THCAV;
	};
	class 7thcav_grnd_transport_light: parent_grnd_transport_light {
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_7THCAV;
	};
	class 7thcav_grnd_transport_heavy: parent_grnd_transport_heavy {
		WRECK_LONG;
		lockTeams[] = LOCKED_7THCAV;
	};
	class 7th_air_transport_custom {
		name = "Tranport Helicopters (7th Cav)";
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_7THCAV;
		class categories {
			class cayuse {
				name = "OH-6A";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"oh6a","transport"} };
				exclude[] = { {"firesupport","GL","pavn"} };
			};
			class uh1 {
				name = "UH-1";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"uh1","7th"} };
				exclude[] = { {"firesupport","usmc","medical","cia","arvn","usaf","army","pavn","frogmen","anzac"} };
			};
			class ch47 {
				name = "CH-47A";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"ch47","7th"} };
				exclude[] = { {"firesupport","medical","army","pavn"} };
			};
		};
	};

	// arnv ////////////////////////////////////////////////////////////////////////////////

	class arvn_grnd_patrol_custom {
		name = "Patrol (ARVN)";
		RESPAWN_MEDIUM;
                lockTeams[] = LOCKED_ARVN;

		class categories {
			class m151 {
				name = "M151A1";
				icon = VEHICLE_ICON_CAR;
				include[] = { { "m151a1","armed","arvn" } };
				exclude[] = { { "transport","army","firesupport" } };
			};
		};
	};
	class arvn_grnd_transport_heavy_custom {
		name = "Heavy transport (ARVN)";
		RESPAWN_LONG;
		lockTeams[] = LOCKED_ARVN;

		class categories {
			class m113 {
				name = "M113";
				icon = VEHICLE_ICON_ARMOUR;
				include[] = { { "m113", "transport","arvn" } };
				exclude[] = { { "firesupport" } };
			};
		};
	};
	class arvn_grnd_firesupport_light_custom {
		name = "Light fire support (ARVN)";
		WRECK_SHORT;
		lockTeams[] = LOCKED_ARVN;

		class categories {
			class m151 {
				name = "M151A1";
				icon = VEHICLE_ICON_CAR;
				include[] = { { "m151a1","armed","antitank","arvn" } };
				exclude[] = { { "transport","usmc","mp","army"} };
			};
			class trucks {
				name = "Trucks";
				icon = VEHICLE_ICON_TRUCK;
				include[] = { { "truck", "firesupport","arvn" } };
				exclude[] = { { "pavn" } };
			};
			class armor {
				name = "Armor";
				icon = VEHICLE_ICON_ARMOUR;
				include[] = { { "apc","firesupport","arvn" } };
				exclude[] = { { "pavn" } };
			};
		};
	};
	class arvn_grnd_firesupport_heavy_custom {
		name = "Heavy fire support (ARVN)";
		WRECK_LONG;
		lockTeams[] = LOCKED_ARVN;
		class categories {
			class tanks {
				name = "Tanks";
				icon = VEHICLE_ICON_ARMOUR;
				include[] = { { "tank","arvn" } };
				exclude[] = { { "army","usmc","pavn" } };
			};
		};
	};
	class arvn_air_transport_custom {
		name = "Transport Helicopters (ARVN)";
		RESPAWN_MEDIUM;
		lockTeams[] = LOCKED_ARVN;
		class categories {
			class uh1 {
				name = "UH-1";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "uh1","arvn" } };
				exclude[] = { {"firesupport","usmc","medical","cia","7th","usaf","army","pavn","frogmen","anzac"} };
			};
			class ch34 {
				name = "CH-34";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "ch34","arvn" } };
			};
		};
	};

	// anzac ////////////////////////////////////////////////////////////////////

	class anzac_air_transport_all: parent_air_transport_all {
		RESPAWN_MEDIUM;
		lockTeams[] = LOCKED_ANZAC;
	};
	class anzac_grnd_patrol_custom {
		name = "Light Transport (ANZAC)";
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_ANZAC;
		class categories {
			class dirtranger_t {
				name = "Dirt Ranger";
				icon = VEHICLE_ICON_CAR;
				include[] = { { "dirtranger", "transport" } };
				exclude[] = { {"armed" } };
			};
			class dirtranger_p {
				name = "Armed Dirt Ranger";
				icon = VEHICLE_ICON_CAR;
				include[] = { { "dirtranger", "armed" } };
				exclude[] = { {"transport" } };
			};
		};
	};
	class anzac_air_transport_custom {
		name = "Transport Helicopters (ANZAC)";
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_ANZAC;
		class categories {
			class cayuse {
				name = "OH-6A";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"oh6a","transport"} };
				exclude[] = { {"firesupport","pavn"} };
			};
			class uh1 {
				name = "UH-1";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"uh1","anzac"} };
				exclude[] = { {"firesupport","usmc","medical","cia","arvn","usaf","army","pavn","7th","frogmen"} };
			};
			class ch47 {
				name = "CH-47A";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"ch47","army"} };
				exclude[] = { {"firesupport","medical","army","pavn","7th"} };
			};
		};
	};

	// blackhorse /////////////////////////////////////////////////////////////////

	class blackhorse_air_transport_all: parent_air_transport_all {
		RESPAWN_MEDIUM;
		lockTeams[] = LOCKED_BLACKHORSE;
	};
	class blackhorse_statics_105s_custom {
		name = "105 Artillery (Blackhorse)";
		WRECK_LONG;
		lockTeams[] = LOCKED_BLACKHORSE;
		class categories {
			class m101 {
				name = "M101";
				icon = VEHICLE_ICON_STATIC;
				include[] = { { "static", "artillery" } };
				exclude[] = { {"mortar" } };
			};
		};
	};
	class blackhorse_grnd_firesupport_custom {
		name = "11th ACR (Blackhorse) Fire Support";
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_BLACKHORSE;
		class categories {
			class tanks {
				name = "Tanks";
				icon = VEHICLE_ICON_ARMOUR;
				include[] = { { "tank","army" } };
				exclude[] = { { "arvn","usmc","pavn"} };
			};
			class m113 {
				name = "M113";
				icon = VEHICLE_ICON_ARMOUR;
				include[] = { { "m113","firesupport" } };
				exclude[] = { { "transport", "pavn" } };
			};
			class trucks {
				name = "Trucks";
				icon = VEHICLE_ICON_TRUCK;
				include[] = { { "truck","firesupport" } };
				exclude[] = { { "pavn" } };
			};
		};
	};

	// military police ////////////////////////////////////////////////////////////////

	class mp_grnd_patrol_custom {
		name = "Patrol (Military Police)";
		RESPAWN_MEDIUM;
		lockTeams[] = LOCKED_MILITARY_POLICE;
		class categories {
			class patrol {
				name = "M151A1 Patrol";
				icon = VEHICLE_ICON_CAR;
				include[] = { { "m151a1", "armed","mp" } };
				exclude[] = { { "transport","usmc","antitank","army" } };
			};
			class transport {
				name = "M151A1 Transport";
				icon = VEHICLE_ICON_CAR;
				include[] = { { "m151a1", "transport","mp" } };
				exclude[] = { { "armed","usmc","antitank","army" } };
			};
		};
	};
	class mp_air_transport_medium: parent_air_transport_medium
	{
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_MILITARY_POLICE;
	};

	// macv ///////////////////////////////////////////////////////////////////////////

	class macv_air_transport_custom {
		name = "Transport Helicopters (MACV)";
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_MACV_DACCONG;
		class categories {
			/*
			// contains modern gear
			class hummingbird {
				name = "Hummingbird";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"hummingbird"} };
			};
			*/
			class cia {
				name = "Air America";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"uh1", "transport", "cia"} };
				exclude[] = { {"firesupport","usmc","medical","cia","arvn","usaf","army","pavn","frogmen","anzac","7th"} };
			};
			class cayuse {
				name = "OH-6A Transport";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"oh6a","transport"}};
				exclude[] = { {"firesupport","scout"} };
			};
			class uh1 {
				name = "UH-1 Transport (Army)";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"uh1","transport","army"} };
				exclude[] = { {"firesupport","usmc","medical","cia","arvn","usaf","pavn","7th","frogmen","anzac"} };
			};
			class ch34 {
				name = "CH-34 Transport";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"ch34","transport"} };
				exclude[] = { {"firesupport"} };
			};
			class ch47 {
				name = "CH-47 Transport (Army)";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"ch47","transport","army"} };
				exclude[] = { {"firesupport","7th"} };
			};
		};
	};

	// muskets ////////////////////////////////////////////////////////////////////////

	class muskets_air_transport_all: parent_air_transport_all {
		RESPAWN_MEDIUM;
		lockTeams[] = LOCKED_MUSKETS;
	};
	class muskets_air_firesupport_all_custom {
		name = "Close Air Support Helicopters (Muskets)";
		WRECK_LONG;
		lockTeams[] = LOCKED_MUSKETS;
		class categories {
			class cayuse {
				name = "OH-6A";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "oh6a","armed" } };
				exclude[] = { { "transport","pavn" } };
			};
			class ah1g {
				name = "AH-1G";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "ah1g", "firesupport" } };
				exclude[] = { { "pavn" } };
			};
			class uh1 {
				name = "UH-1";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "uh1", "firesupport" } };
				exclude[] = { { "transport","pavn" } };
			};
			class ch34 {
				name = "CH-34";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "ch34", "firesupport" } };
				exclude[] = { { "transport","pavn" } };
			};
			class ch47 {
				name = "ACH-47";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "ch47", "firesupport" } };
				exclude[] = { { "transport","pavn" } };
			};

		};
	};

	// satans angels /////////////////////////////////////////////////////////////////

	class satansangels_air_jets_runway_custom {
		name = "Jets (Satan's Angels)";
		WRECK_LONG;
		lockTeams[] = LOCKED_SATANS_ANGELS;
		class categories {
			class f100 {
				name = "F100";
				icon = VEHICLE_ICON_PLANE;
				include[] = { { "jet", "f100" } };
				exclude[] = { { "pavn" } };
			};
			class f4 {
				name = "F4 Phantom II";
				icon = VEHICLE_ICON_PLANE;
				include[] = { { "jet", "f4" } };
				exclude[] = { { "pavn" } };
			};
		};
	};
	class satansangels_air_jets_carrier_custom {
		name = "Naval Jets (Satan's Angels)";
		WRECK_LONG;
		lockTeams[] = LOCKED_SATANS_ANGELS;
		class categories {
			class f4 {
				name = "F4B Phantom II";
				icon = VEHICLE_ICON_PLANE;
				include[] = { { "jet", "f4", "naval" } };
				exclude[] = { { "pavn" } };
			};
		};
	};

	// tigers ///////////////////////////////////////////////////////////////////////////

	class tigerforce_grnd_patrol: parent_grnd_patrol {
		RESPAWN_MEDIUM;
		lockTeams[] = LOCKED_TIGER_FORCE;
	};
	class tigerforce_grnd_firesupport_light: parent_grnd_firesupport_light {
		RESPAWN_LONG;  // @dijksterhuis: changed from WRECK_LONG at tf request
		lockTeams[] = LOCKED_TIGER_FORCE;
	};
	class tigerforce_air_transport_custom {
		name = "Transport Helicopters (Tiger Force)";
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_TIGER_FORCE;

		class categories {
			class cayuse {
				name = "OH-6A";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"oh6a","transport"}};
				exclude[] = { {"firesupport","scout"} };
			};
			class uh1 {
				name = "UH-1";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "uh1", "tf" } };
				exclude[] = { { "pavn" } };
			};
			class ch47 {
				name = "CH-47";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"ch47","transport","army"} };
				exclude[] = { {"firesupport","7th"} };
			};
		};
	};

	// udt /////////////////////////////////////////////////////////////////////////////////

	class udt_grnd_patrol: parent_grnd_patrol {
		RESPAWN_MEDIUM;
		lockTeams[] = LOCKED_UDT;
	};
	class udt_air_transport_custom {
		name = "Transport Helicopters (UDT)";
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_UDT;

		class categories {
			class cayuse {
				name = "OH-6A";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"oh6a","transport"} };
				exclude[] = { {"firesupport","pavn"} };
			};
			class uh1 {
				name = "UH-1";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"uh1","frogmen"} };
				exclude[] = { {"firesupport","usmc","medical","cia","arvn","usaf","army","pavn","7th","anzac"} };
			};
			class ch47 {
				name = "CH-47A";
				icon = VEHICLE_ICON_HELO;
				include[] = { {"ch47","army"} };
				exclude[] = { {"firesupport","medical","army","pavn","7th"} };
			};
		};
	};
	class udt_boats_nasty {
		name = "Nasty Boats (UDT)";
		RESPAWN_LONG;
		lockTeams[] = LOCKED_UDT;
		class categories {
			class nasty {
				name = "Nasty";
				icon = VEHICLE_ICON_BOAT;
				include[] = { { "naval" , "nasty" } };
				exclude[] = { { "pavn" } };
			};
		};
	};

	// usmc ///////////////////////////////////////////////////////////////////////

	class usmc_grnd_transport_light_custom {
		name = "USMC Wheeled Vehicles";
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_USMC;
		class categories {
			class m54_t {
				name = "M54";
				icon = VEHICLE_ICON_TRUCK;
				include[] = { { "m54","usmc" } };
				exclude[] = { { "pavn" } };
			};
			class m151a {
				name = "M151A1";
				icon = VEHICLE_ICON_CAR;
				include[] = { { "m151a1", "usmc" } };
				exclude[] = { { "pavn" } };
			};
		};
	};
	class usmc_grnd_firesupport_heavy_custom {
		name = "USMC Armor Vehicles";
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_USMC;
		class categories {
			class m113 {
				name = "APC";
				icon = VEHICLE_ICON_ARMOUR;
				include[] = { { "m113","armed","firesupport","apc" } };
				exclude[] = { { "artillery","pavn" } };
			};
			class usmctank {
				name = "Tanks";
				icon = VEHICLE_ICON_TANK;
				include[] = { { "tank","usmc" } };
				exclude[] = { { "pavn","arvn" } };
			};
		};
	};
	class usmc_air_transport_custom {
		name = "Transport Helicopters (USMC)";
		RESPAWN_SHORT;
		lockTeams[] = LOCKED_USMC;
		class categories {
			class ch34_t {
				name = "CH-34";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "ch34","usmc" } };
				exclude[] = { { "pavn" } };
			};
			class uh1 {
				name = "UH-1";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "uh1", "usmc" } };
				exclude[] = { { "pavn" } };
			};
		};
	};

	// DAC /////////////////////////////////////////////////////////////////////////

	class dac_car: parent_dac {
		name = "Wheeled Vehicle";
		class categories {
			class btr40 {
				name = "BTR-40";
				icon = VEHICLE_ICON_CAR;
				include[] = { { "btr40" } };
			};
			class z157 {
				name = "Z-157";
				icon = VEHICLE_ICON_TRUCK;
				include[] = { { "z157" } };
			};
		};
	};
	class dac_apc: parent_dac {
		name = "APC";
		class categories {
			class btr50 {
				name = "BTR-50";
				icon = VEHICLE_ICON_ARMOUR;
				include[] = { { "btr50" } };
			};
			class m113 {
				name = "M113";
				icon = VEHICLE_ICON_ARMOUR;
				include[] = { { "m113","pavn" } };
			};
		};
	};
	class dac_armor: parent_dac {
		name = "Armor";
		class categories {
			class t54 {
				name = "T-54";
				icon = VEHICLE_ICON_TANK;
				include[] = { { "t54" } };
			};
			class type63 {
				name = "Type 63";
				icon = VEHICLE_ICON_ARMOUR;
				include[] = { { "t63" } };
			};
			class m41 {
				name = "M41";
				icon = VEHICLE_ICON_TANK;
				include[] = { { "m41","pavn" } };
			};
			class pt76 {
				name = "PT-76";
				icon = VEHICLE_ICON_ARMOUR;
				include[] = { { "pt76" } };
			};
		};
	};
	class dac_jet: parent_dac {
		name = "Jets";
		class categories {
			class mig19 {
				name = "MiG-19";
				icon = VEHICLE_ICON_PLANE;
				include[] = { { "mig19" } };
			};
			class mig21 {
				name = "MiG-21";
				icon = VEHICLE_ICON_PLANE;
				include[] = { { "mig21" } };
			};
		};
	};
	class dac_helo: parent_dac {
		name = "Helicopter";
		class categories {
			class mi2p {
				name = "Mi-2P";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "mi2","transport" } };
				exclude[] = { { "armed" }};
			};
			class mi2urn {
				name = "Mi-2URN";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "mi2","viper" } };
			};
			class mi2urp {
				name = "Mi-2URP";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "mi2","salamander" } };
			};
			class mi2us {
				name = "Mi-2US";
				icon = VEHICLE_ICON_HELO;
				include[] = { { "mi2","transport","armed" } };
			};
		};
	};
	class dac_static: parent_dac {
		name = "Static Emplacements";
		class categories {
			class statics {
				name = "Statics";
				icon = VEHICLE_ICON_STATIC;
				include[] = { { "pavn","static" } };
			};
		};
	};
};
