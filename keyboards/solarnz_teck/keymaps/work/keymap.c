#include QMK_KEYBOARD_H

enum _layer {
  _MA,
  _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Not sure what the key on the left of '~' is supposed to be. The key is C2,R2. */
    /* 0: qwerty */
    [_MA] = LAYOUT(
        KC_ESC,    KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_MPRV,   KC_MPLY,   KC_MNXT,   KC_MUTE,   KC_VOLD,   KC_VOLU, \
        KC_NO,     KC_ESC,    KC_BSLS,   KC_NO,     KC_NO,     KC_NO,     KC_FN0,    KC_NLCK,   KC_NO,     KC_NO,     KC_NO,     KC_EQL,    KC_RBRC, \
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
