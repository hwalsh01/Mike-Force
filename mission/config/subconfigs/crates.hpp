class MedicalCrate
{
	objectClassname = "vn_b_ammobox_supply_03";
	weapons[] = {};
	magazines[] = {{"vn_prop_med_antivenom",30},
	{"vn_prop_med_wormpowder",15},
	{"vn_prop_med_dysentery",15},
	{"vn_prop_med_painkillers",30},
	{"vn_prop_med_antimalaria",15},
	{"vn_prop_med_antibiotics",30}};
	items[] = {{"vn_b_item_medikit_01",10},
	{"vn_b_item_firstaidkit",300}};
	backpacks[] = {};
};

class AmmoCrateLight
{
	objectClassname = "vn_b_ammobox_supply_01";
	weapons[] = {{"vn_m127",3},{"vn_m72",30}};
	magazines[] = {
		{"vn_m1911_mag",20},
		{"vn_mk22_mag",20},
		{"vn_m16_40_mag",15},
		{"vn_welrod_mag",20},
		{"vn_m61_grenade_mag",10},
		{"vn_m67_grenade_mag",10},
		{"vn_v40_grenade_mag",10},
		{"vn_m18_green_mag",10},
		{"vn_m18_purple_mag",10},
		{"vn_m18_red_mag",10},
		{"vn_m18_white_mag",25},
		{"vn_m18_yellow_mag",10},
		{"vn_m14_grenade_mag",5},
		{"vn_m34_grenade_mag",5},
		{"vn_m127_mag",15},
		{"vn_hd_mag",20},
		{"vn_hp_mag",20},
		{"vn_m10_mag",20},
		{"vn_m16_30_mag",60},
		{"vn_m63a_30_mag",30},
		{"vn_m16_20_mag",60},
		{"vn_carbine_15_mag",30},
		{"vn_carbine_30_mag",30},
		{"vn_m4956_10_mag",30},
		{"vn_m14_mag",30},
		{"vn_m1895_mag",20},
		{"vn_mc10_mag",30},
		{"vn_sten_mag",30},
		{"vn_m3a1_mag",30},
		{"vn_m45_mag",30},
		{"vn_l1a1_20_mag", 30},
		{"vn_l1a1_30_02_mag",30},
		{"vn_f1_smg_mag", 30},
		{"vn_m1_garand_mag", 30},
		{"vn_mpu_mag", 30},
		{"vn_m1928_mag", 30},
		{"vn_m72_mag", 30},
		{"vn_m20a1b1_01", 5},
		{"vn_m20a1b1_heat_mag",	20},
		{"vn_m20a1b1_wp_mag", 3},
		{"vn_pm_mag",20},
        {"vn_tt33_mag",20},
        {"vn_ppk_mag",20},
        {"vn_p38_mag",20},
        {"vn_vz61_mag",20},
        {"vn_mat49_mag",30},
        {"vn_m1a1_30_mag",30},
        {"vn_hp_mag",30},
        {"vn_m14_10_mag",30},
        {"vn_l1a1_30_mag",60},
	};
	items[] = {};
	backpacks[] = {{"vn_b_pack_static_base_01", 5},{"vn_b_pack_static_tow",5},{"vn_b_pack_static_ammo_01",2}};
};

class AmmoCrateSupport
{
	objectClassname = "vn_b_ammobox_wpn_08";
	weapons[] = {
		{"vn_m79",2},
		{"vn_m127",15},
		{"vn_m20a1b1_01", 5}
	};
	magazines[] = {
		{"vn_m60_100_mag",50},
		{"vn_l1a1_30_02_mag",30},
		{"vn_rpd_100_mag",10},
		{"vn_m63a_100_mag", 20},
		{"vn_m63a_150_t_mag",30},
		{"vn_m40a1_mag",30},
		{"vn_m127_mag",50},
		{"vn_m128_mag",20},
		{"vn_m129_mag",20},
		{"vn_m16_40_mag",15},
		{"vn_m61_grenade_mag",10},
		{"vn_m67_grenade_mag",10},
		{"vn_v40_grenade_mag",10},
		{"vn_m18_purple_mag",20},
		{"vn_m18_red_mag",20},
		{"vn_m18_white_mag",30},
		{"vn_m18_yellow_mag",20},
		{"vn_m14_grenade_mag",10},
		{"vn_m34_grenade_mag",10},
		{"vn_40mm_m651_cs_mag",20},
		{"vn_40mm_m583_flare_w_mag",40},
		{"vn_40mm_m661_flare_g_mag",20},
		{"vn_40mm_m662_flare_r_mag",20},
		{"vn_40mm_m695_flare_y_mag",20},
		{"vn_40mm_m680_smoke_w_mag",40},
		{"vn_40mm_m682_smoke_r_mag",20},
		{"vn_40mm_m715_smoke_g_mag",20},
		{"vn_40mm_m716_smoke_y_mag",20},
		{"vn_40mm_m717_smoke_p_mag",20},
		{"vn_m20a1b1_heat_mag",	20},
		{"vn_m20a1b1_wp_mag", 3},
		{"vn_m1918_mag",40},
        {"vn_l1a1_30_02_mag",40},
        {"vn_m1897_fl_mag",30},
        {"vn_m1897_buck_mag",30},
        {"vn_m1903_mag",30},
        {"vn_m36_mag",30},
        {"vn_mk1_udg_mag",30},
        {"vn_type56_t_mag",20},
        {"vn_mg42_50_mag",20},
        {"vn_mp40_mag",20},
        {"vn_ppsh41_71_mag",10},
        {"vn_22mm_lume_mag",20},
        {"vn_22mm_m22_smoke_mag",20},
        {"vn_22mm_cs_mag",20}
	};
	items[] = {{"vn_b_item_trapkit",5}};
	backpacks[] = {
		{"vn_b_pack_static_base_01", 10},
		{"vn_b_pack_static_m2_high_01",3},
		{"vn_b_pack_static_m60_high_01",5},
		{"vn_b_pack_static_mk18",2}
	};
};

class AmmoCrateExplosives
{
	objectClassname = "vn_b_ammobox_full_22";
	weapons[] = {
		{"vn_m79",2},
		{"vn_m72",10},
	};
	magazines[] = {
		{"vn_m61_grenade_mag",30},
		{"vn_m67_grenade_mag",30},
		{"vn_v40_grenade_mag",30},
		{"vn_40mm_m651_cs_mag",20},
		{"vn_40mm_m381_he_mag",20},
		{"vn_40mm_m406_he_mag",20},
		{"vn_40mm_m433_hedp_mag",20},
		{"vn_m72_mag", 20},
		{"vn_40mm_m583_flare_w_mag",20},
		{"vn_40mm_m661_flare_g_mag",20},
		{"vn_40mm_m662_flare_r_mag",20},
		{"vn_40mm_m695_flare_y_mag",20},
		{"vn_40mm_m680_smoke_w_mag",20},
		{"vn_40mm_m682_smoke_r_mag",20},
		{"vn_40mm_m715_smoke_g_mag",20},
		{"vn_40mm_m716_smoke_y_mag",20},
		{"vn_40mm_m717_smoke_p_mag",20},
		{"vn_mine_m18_mag",15},
		{"vn_mine_m18_range_mag",10},
		{"vn_mine_tripwire_m49_02_mag",10},
		{"vn_mine_tripwire_m49_04_mag",10},
		{"vn_mine_tripwire_m16_02_mag",20},
		{"vn_mine_tripwire_m16_04_mag",20},
		{"vn_mine_m16_mag",20},
		{"vn_mine_m15_mag",10},
		{"vn_mine_m14_mag",40},
		{"vn_mine_m112_remote_mag",15},
		{"vn_mine_m18_x3_mag",10},
		{"vn_mine_m18_x3_range_mag",10},
		{"vn_mine_satchel_remote_02_mag",10},
		{"vn_m20a1b1_01", 5},
		{"vn_m20a1b1_heat_mag",	20},
		{"vn_m20a1b1_wp_mag", 3},
		{"vn_m20a1b1_heat_mag",5},
        {"vn_m20a1b1_wp_mag",5},
        {"vn_22mm_m17_frag_mag",20},
        {"vn_22mm_m1a2_frag_mag",20},
        {"vn_22mm_m9_heat_mag",20},
        {"vn_22mm_m19_wp_mag",20},
        {"vn_22mm_m61_frag_mag",20},
        {"vn_22mm_n94_heat_mag",20}
	};
	items[] = {};
	backpacks[] = {
		{"vn_b_pack_static_base_01", 5},
		{"vn_b_pack_static_m2_01",2}
	};
};

class FoodCrate
{
	objectClassname = "vn_b_ammobox_supply_02";
	weapons[] = {};
	magazines[] = {};
	items[] = {};
	backpacks[] = {};
};

class EmptySupplyCrate
{
	objectClassname = "vn_b_ammobox_supply_01";
	weapons[] = {};
	magazines[] = {};
	items[] = {};
	backpacks[] = {};
};
