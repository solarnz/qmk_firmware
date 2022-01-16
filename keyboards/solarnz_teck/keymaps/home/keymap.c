#include QMK_KEYBOARD_H

enum _layer {
  _MA,
  _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Not sure what the key on the left of '~' is supposed to be. The key is C2,R2. */
    /* 0: qwerty */
    [_MA] = LAYOUT(
        KC_RALT,   KC_RIGHT,  KC_DOWN,   KC_UP,     KC_LEFT,   KC_BSPC,   KC_END,    KC_SPC,    KC_LGUI,   KC_PGDN,   KC_HOME,   KC_PGUP,   KC_LCTRL, \
        KC_ENT,    KC_QUOT,   KC_DOT,    KC_COMM,   KC_M,      KC_B,      KC_V,      KC_N,      KC_LCTRL,  KC_C,      KC_Z,      KC_X,      KC_TAB, \
        KC_LBRC,   KC_P,      KC_O,      KC_I,      KC_U,      KC_T,      KC_R,      KC_Y,      KC_DEL,    KC_E,      KC_Q,      KC_W,      KC_SLASH, \
        KC_RSFT,   KC_SCLN,   KC_L,      KC_K,      KC_J,      KC_G,      KC_F,      KC_H,      KC_U,      KC_D,      KC_A,      KC_S,      KC_LSFT, \
        KC_EQL,    KC_RBRC,   KC_S,      KC_D,      KC_F,      KC_CALC,   KC_TAB,    KC_PSCR,   KC_FN0,    KC_K,      KC_BSLS,   KC_ESC,    KC_ESC, \
        KC_TAB,    KC_VOLU,   KC_VOLD,   KC_MUTE,   KC_MNXT,   KC_F6,     KC_F5,     KC_MPLY,   KC_MPRV,   KC_LGUI,   KC_DOWN,   KC_UP,     KC_RIGHT, \
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
