#include QMK_KEYBOARD_H

// Helpful defines
#define ______ KC_NO
#define __TR__ KC_TRNS

#define _DEFAULT 0
#define _HYPER 1
#define _LAYER_SELECT 2
#define _MEDIA 3
#define _BACKLIGHT 4
#define _MOUSE 5

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_DEFAULT] = LAYOUT_2_shifts(
            KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_BSPC,
            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
            MO(_HYPER), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
            KC_LSFT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_RSFT, RCTL_T(KC_DEL),
            KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, MO(_LAYER_SELECT), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),

	[_HYPER] = LAYOUT_2_shifts(
            KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_PSCR,

            __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, KC_SLCK,
            KC_TRNS, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, KC_PAUS,
            __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, __TR__, KC_INS,
            KC_RCTL, KC_RGUI, KC_RALT, KC_APP, KC_APP, KC_APP, ______, KC_HOME, KC_PGDN, KC_PGUP, KC_END),

	[_LAYER_SELECT] = LAYOUT_2_shifts(
            TO(_DEFAULT), ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
            ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
            ______, ______, TO(_MEDIA), ______, ______, ______, ______, ______, ______, TO(_BACKLIGHT), ______, ______, ______,
            ______, ______, ______, ______, ______, ______, ______, ______, TO(_MOUSE), ______, ______, ______, ______, ______, ______,
            ______, ______, ______, ______, ______, ______, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END),

	[_MEDIA] = LAYOUT_2_shifts(
            TO(_DEFAULT), ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, KC_VOLD, KC_VOLU, ______, ______,
            ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
            ______, ______, KC_TRNS, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
            ______, ______, ______, ______, ______, ______, ______, ______, KC_MUTE, ______, ______, ______, ______, ______, ______,
            ______, ______, ______, ______, ______, ______, TO(_DEFAULT), KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT),

	[_BACKLIGHT] = LAYOUT_2_shifts(
            TO(_DEFAULT), ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, BL_DEC, BL_INC, BL_TOGG, BL_TOGG,
            ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, BL_BRTG,
            ______, ______, ______, ______, ______, ______, ______, ______, ______, KC_TRNS, ______, ______, ______,
            ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, RGB_SAD, RGB_SAI, ______, ______, ______,
            RGB_TOG, RGB_MODE_FORWARD, RGB_MODE_REVERSE, ______, ______, ______, TO(_DEFAULT), RGB_HUD, RGB_VAD, RGB_VAI, RGB_HUI),

	[_MOUSE] = LAYOUT_2_shifts(
            TO(_DEFAULT), KC_MS_ACCEL0, KC_MS_ACCEL1, KC_MS_ACCEL2, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
            ______, ______, KC_MS_WH_UP, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
            ______, KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_RIGHT, ______, ______, ______, ______, ______, ______, ______, ______, ______,
            ______, ______, ______, ______, ______, ______, ______, ______, KC_TRNS, ______, ______, ______, ______, ______, ______,
            KC_MS_BTN1, KC_MS_BTN2, KC_MS_BTN3, ______, ______, ______, TO(_DEFAULT), KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT)
};
