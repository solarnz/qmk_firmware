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
        KC_ESC,    KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_MPRV,   KC_MPLY,   KC_MNXT,   KC_MUTE,   KC_VOLD,   KC_VOLU, \
        KC_NO,     KC_ESC,    KC_BSLS,   KC_NO,     KC_NO,     KC_NO,     MO(_FN),   KC_NLCK,   KC_NO,     KC_NO,     KC_NO,     KC_EQL,    KC_RBRC, \
        KC_GRV,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_LGUI,   KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS, \
        KC_SLASH,  KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_DEL,    KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC, \
        KC_LSFT,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_TAB,    KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_RSFT, \
        KC_TAB,    KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_RCTRL,  KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_QUOT,   KC_ENT, \
        KC_LCTRL,  KC_HOME,   KC_PGDN,   KC_PGUP,   KC_END,    KC_BSPC,   KC_LGUI,   KC_SPC,    KC_LEFT,   KC_DOWN,   KC_UP,     KC_RIGHT,  KC_RALT \
    ),
    /* 1: first FN layer */
    [_FN] = LAYOUT(
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12, \
        _______,   _______,   _______,   _______,   _______,   KC_CAPS,   _______,   _______,   _______,   _______,   _______,   _______,   _______, \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______, \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______, \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______, \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______, \
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______  \
    )
};
