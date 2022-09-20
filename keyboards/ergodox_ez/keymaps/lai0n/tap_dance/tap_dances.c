                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
                       //  Single tap  |  Single hold  |  Double tap  |  Double hold  |  Triple tap  |  Triple hold  | DOUBLE SINGLE | TRIPLE SINGLE //
// Mod tap dances:     //              |               |              |               |              |               |               |               //
enum tap_dances {      //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    EQL_PLUS  = 0,     //       =      |       ==      |       +      |       ++      |     ===      |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    MINS_UNDS = 1,     //       -      |       --      |       _      |       __      |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    SLSH_BSLS = 2,     //       /      |               |       \      |       \\      |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    GRV_TILD  = 3,     //       `      |               |       ~      |               |     ```      |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    QUOT_DQUO = 4,     //       '      |   CTRL+ALT    |      "       |               |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    SCLN_COLN = 5,     //       ;      |ALT+SHIFT+META |      :       |       ::      |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    ASTR_CIRC = 6,     //       *      |               |       ^      |               |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    APMR_PIPE = 7,     //       &      |       &&      |       |      |       ||      |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    EXLM_QUES = 8,     //       !      |               |       ?      |       ??      |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    HASH_PERC = 9,     //       #      |               |       %      |               |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    DLR_AT    = 10,    //       $      |               |       @      |               |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    LPRN_LABK = 11,    //       (      |               |       <      |               |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    RPRN_RABK = 12,    //       )      |               |       >      |               |      ->      |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    LCBR_LBRC = 13,    //       {      |               |      [       |               |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    RCBR_RBRC = 14,    //       }      |               |      ]       |               |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    DOT_COMM  = 15,    //       .      |  CTRL+SHIFT   |      ,       |               |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    NONE_LEAD = 16,    //     NONE     |   ALT+SHIFT   |     LEAD     |               |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    U_ARR_GUI = 17,    //       U      |     ARROWS    |              |      GUI      |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    H_MOU_GUI = 18,    //       H      |     MOUSE     |              |      GUI      |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    J_MED_MEH = 19,    //       J      |   MEDIA_FN    |              |      MEH      |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    W_MED_MEH = 20,    //       W      |   MEDIA_FN    |              |      MEH      |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    K_NUM_HYP = 21,    //       K      |    NUMPAD     |              |    HYPER      |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    M_CHO_HYP = 22,    //       M      |     CHORD     |              |    HYPER      |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    HOLD_BOOT = 23,    //              |    QK_BOOT    |              |               |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    HOLD_EEP_RST = 24, //              |    EEP_RST    |              |               |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
                       //              |               |              |               |              |               |               |               //
    LSFT_DEL = 25,     //    LSHIFT    |               |      DEL     |               |              |               |               |               //
                       //              |               |              |               |              |               |               |               //
                       //--------------------------------------------------------------------------------------------------------------------------//
};
