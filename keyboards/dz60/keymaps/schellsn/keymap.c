#include QMK_KEYBOARD_H

// Helpful defines
#define __TRN__ KC_TRNS

#define _DEFAULT 0
#define _HYPER 1
#define _FN1 2
#define _FN2 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* DEFAULT */
    LAYOUT_60_ansi(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,
        KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        MO(_HYPER),       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,
        KC_LCTL, KC_LGUI,          KC_LALT,                   KC_SPC,                             KC_RALT, MO(_FN1),         MO(_FN2),KC_RCTL),

/* HYPER */
    LAYOUT_60_ansi(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           KC_DEL,
        __TRN__,          __TRN__, __TRN__, __TRN__, __TRN__, __TRN__, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  __TRN__, __TRN__, __TRN__, KC_NUHS,
        __TRN__,          __TRN__, __TRN__, __TRN__, __TRN__, __TRN__, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,__TRN__, __TRN__, __TRN__,
        __TRN__,          __TRN__, __TRN__, __TRN__, __TRN__, __TRN__, __TRN__, __TRN__, KC_NUBS, KC_NUBS, __TRN__,          __TRN__,
        __TRN__, __TRN__,          __TRN__,                   __TRN__,                            __TRN__, __TRN__,          __TRN__, __TRN__),

/* _FN1 */
    LAYOUT_60_ansi(
        __TRN__, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, __TRN__, __TRN__, __TRN__, __TRN__, __TRN__, __TRN__, __TRN__, __TRN__,          KC_INS,
        __TRN__,          KC_7,    KC_8,    KC_9,    KC_PPLS, __TRN__, __TRN__, __TRN__, __TRN__, __TRN__, KC_PSCR, KC_SLCK, KC_PAUS, __TRN__,
        KC_CAPS,          KC_4,    KC_5,    KC_6,    KC_PPLS, __TRN__, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  __TRN__, __TRN__, __TRN__,
        __TRN__,          KC_1,    KC_2,    KC_3,    KC_PENT, __TRN__, __TRN__, __TRN__, __TRN__, __TRN__, __TRN__,          __TRN__,
        __TRN__, __TRN__,          KC_0,                      KC_PDOT,                            __TRN__, __TRN__,          __TRN__, __TRN__),

/* _FN2 */
    LAYOUT_60_ansi(
        BL_TOGG, BL_DEC,  BL_INC,  BL_BRTG, RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_MUTE, KC_VOLD, KC_VOLU,          __TRN__,
        __TRN__,          __TRN__, KC_WH_U, __TRN__, __TRN__, __TRN__,  RGB_HUD, RGB_SAD, RGB_VAD, __TRN__, __TRN__, __TRN__, __TRN__, __TRN__,
        __TRN__,          KC_WH_L, KC_WH_D, KC_WH_R, __TRN__, __TRN__, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, __TRN__, __TRN__, __TRN__,
        __TRN__,          KC_ACL0, KC_ACL1, KC_ACL2, __TRN__, __TRN__, __TRN__, __TRN__, __TRN__, __TRN__, __TRN__,          __TRN__,
        KC_BTN1, KC_BTN2,          KC_BTN3,                   __TRN__,                            __TRN__, __TRN__,          __TRN__, __TRN__)

};
