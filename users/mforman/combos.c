// QWERTY
const uint16_t PROGMEM weEsc[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM sdBspc[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM asdBspc[] = {KC_A, KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM dfTab[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM sdfAltTab[] = {KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM uiBckSlsh[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM jkDash[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM klColon[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM mCommUnd[] = {KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM commDotScl[] = {KC_COMMA, KC_DOT, COMBO_END};

// COLEMAK
const uint16_t PROGMEM wfEsc[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM rsBspc[] = {KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM arsBspc[] = {KC_A, KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM stTab[] = {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM rstAltTab[] = {KC_R, KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM luBckSlsh[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM neDash[] = {KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM eiColon[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM hCommUnd[] = {KC_H, KC_COMMA, COMBO_END};

// Others
const uint16_t PROGMEM ctrlLeft[] = {KC_LEFT, KC_HOME, COMBO_END};
const uint16_t PROGMEM ctrlDown[] = {KC_UP, KC_PGDN, COMBO_END};
const uint16_t PROGMEM ctrlUp[] = {KC_DOWN, KC_PGUP, COMBO_END};
const uint16_t PROGMEM ctrlRight[] = {KC_RIGHT, KC_END, COMBO_END};

const uint16_t PROGMEM volDwnUp[] = {KC_VOLD, KC_VOLU, COMBO_END};
const uint16_t PROGMEM spcTabCmdCt[] = {TC_SPC, TC_TAB, COMBO_END};
const uint16_t PROGMEM grvCtl[] = {KC_GRV, KC_LCTL, COMBO_END};

combo_t key_combos[] = {
    COMBO(weEsc, KC_ESC),
    COMBO(sdBspc, KC_BSPC),
    COMBO(asdBspc, BSP_WRD),
    COMBO(dfTab, KC_TAB),
    COMBO(sdfAltTab, ALT_TAB),
    COMBO(uiBckSlsh, KC_BSLS),
    COMBO(jkDash, KC_MINS),
    COMBO(klColon, KC_COLN),
    COMBO(mCommUnd, KC_UNDS),
    COMBO(commDotScl, KC_SCLN),

    COMBO(wfEsc, KC_ESC),
    COMBO(rsBspc, KC_BSPC),
    COMBO(arsBspc, BSP_WRD),
    COMBO(stTab, KC_TAB),
    COMBO(rstAltTab, ALT_TAB),
    COMBO(luBckSlsh, KC_BSLS),
    COMBO(neDash, KC_MINS),
    COMBO(eiColon, KC_COLN),
    COMBO(hCommUnd, KC_UNDS),

    COMBO(ctrlLeft, LCTL(KC_LEFT)),
    COMBO(ctrlDown, LCTL(KC_DOWN)),
    COMBO(ctrlUp, LCTL(KC_UP)),
    COMBO(ctrlRight, LCTL(KC_RIGHT)),

    COMBO(volDwnUp, KC_MUTE),
    COMBO(spcTabCmdCt, LCTL(KC_LGUI)),
    COMBO(grvCtl, CMD_GRV)
};