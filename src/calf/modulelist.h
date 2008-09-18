    PER_MODULE_ITEM(filter, false, "filter")
    PER_MODULE_ITEM(flanger, false, "flanger")
    PER_MODULE_ITEM(reverb, false, "reverb")
    PER_MODULE_ITEM(monosynth, true, "monosynth")
    PER_MODULE_ITEM(vintage_delay, false, "vintagedelay")
    PER_MODULE_ITEM(organ, true, "organ")
    PER_MODULE_ITEM(rotary_speaker, false, "rotaryspeaker")
    PER_MODULE_ITEM(phaser, false, "phaser")
#ifdef ENABLE_EXPERIMENTAL
    PER_SMALL_MODULE_ITEM(small_lp_filter)
    PER_SMALL_MODULE_ITEM(small_hp_filter)
    PER_SMALL_MODULE_ITEM(small_bp_filter)
    PER_SMALL_MODULE_ITEM(small_br_filter)
    PER_SMALL_MODULE_ITEM(small_onepole_lp_filter)
    PER_SMALL_MODULE_ITEM(small_onepole_hp_filter)
    PER_SMALL_MODULE_ITEM(small_onepole_ap_filter)
    PER_SMALL_MODULE_ITEM(small_min)
    PER_SMALL_MODULE_ITEM(small_max)
    PER_SMALL_MODULE_ITEM(small_minus)
    PER_SMALL_MODULE_ITEM(small_mul)
    PER_SMALL_MODULE_ITEM(small_neg)
    PER_SMALL_MODULE_ITEM(small_map_lin2exp)
    PER_SMALL_MODULE_ITEM(small_square_osc)
    PER_SMALL_MODULE_ITEM(small_saw_osc)
    PER_SMALL_MODULE_ITEM(small_print)
    PER_SMALL_MODULE_ITEM(small_print2)
#endif
#undef PER_MODULE_ITEM
#undef PER_SMALL_MODULE_ITEM
