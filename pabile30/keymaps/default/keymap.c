#include QMK_KEYBOARD_H
#include "muse.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_3x10(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, LT(1,KC_ENT), LSFT_T(KC_Z), LCTL_T(KC_X), LGUI(KC_C), LALT(KC_V), LT(4,KC_SPC), LT(3,KC_SPC), RALT(KC_B), LT(2,KC_N), RCTL(KC_M), RSFT(KC_SLSH)),
	[1] = LAYOUT_ortho_3x10(KC_ESC, KC_PSCR, KC_SLCK, KC_PAUS, KC_NO, KC_INS, KC_PGUP, KC_UP, KC_PGDN, KC_DEL, KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_END, KC_NO, KC_NO, KC_BSPC),
	[2] = LAYOUT_ortho_3x10(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, KC_NO, KC_DEL, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_NO),
	[3] = LAYOUT_ortho_3x10(KC_ESC, KC_NO, KC_NO, KC_GRV, KC_MINS, KC_EQL, KC_7, KC_8, KC_9, KC_0, KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_PENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_BSPC),
	[4] = LAYOUT_ortho_3x10(KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_BSLS, KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SCLN, KC_QUOT, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_COMM, KC_DOT, KC_BSPC)
};

void matrix_scan_user(void) {
}
