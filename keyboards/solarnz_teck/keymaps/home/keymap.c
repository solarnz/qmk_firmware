#include QMK_KEYBOARD_H

enum _layer {
  _MA,
  _FN
};

#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, \
    K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, \
    K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C }, \
    { K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C }, \
    { K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C }  \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Not sure what the key on the left of '~' is supposed to be. The key is C2,R2. */
    /* 0: qwerty */
    [_MA] = LAYOUT(
        KC_RALT,   KC_RIGHT,  KC_DOWN,   KC_UP,     KC_LEFT,   KC_BSPC,   KC_END,    KC_SPC,    KC_LGUI,   KC_PGDN,   KC_HOME,   KC_PGUP,   KC_LCTRL, \
        KC_ENT,    KC_QUOT,   KC_DOT,    KC_COMM,   KC_M,      KC_B,      KC_V,      KC_N,      KC_LCTRL,  KC_C,      KC_Z,      KC_X,      MT(MOD_LCTL, KC_TAB), \
        KC_LBRC,   KC_P,      KC_O,      KC_I,      KC_U,      KC_T,      KC_R,      KC_Y,      KC_DEL,    KC_E,      KC_Q,      KC_W,      KC_SLASH, \
        KC_RSFT,   KC_SCLN,   KC_L,      KC_K,      KC_J,      KC_G,      KC_F,      KC_H,      KC_U,      KC_D,      KC_A,      KC_S,      KC_LSFT, \
        KC_EQL,    KC_RBRC,   KC_S,      KC_D,      KC_F,      KC_CALC,   KC_TAB,    KC_PSCR,   MO(_FN),   KC_K,      KC_BSLS,   KC_ESC,    KC_ESC, \
        KC_TAB,    KC_VOLU,   KC_VOLD,   KC_MUTE,   KC_MNXT,   KC_F6,     KC_F5,     KC_MPLY,   KC_MPRV,   KC_F4,     KC_F2,     KC_F3,     KC_F1, \
        KC_MINS,   KC_0,      KC_9,      KC_8,      KC_7,      KC_5,      KC_4,      KC_6,      KC_LGUI,   KC_3,      KC_1,      KC_2,      KC_GRV  \
    ),
    /* 1: first FN layer */
    [_FN] = LAYOUT(
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,\
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______, \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______, \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______, \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______, \
        _______,   KC_F12,    KC_F11,    KC_F10,    KC_F9,     _______,   _______,   KC_F8,     KC_F7,     _______,   _______,   _______,   _______, \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______  \
    )
};
