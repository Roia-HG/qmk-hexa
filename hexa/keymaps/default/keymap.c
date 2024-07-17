// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*							Left															Right
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐	┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ESC│ F1│ F2│ F3│ F4│ F5│   │   │   │   │   │   │   │   │	│ F6│ F7│ F8│ F9│F10│F11│F12│F13│   │   │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤	├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │Ins│Hom│PgU│Num│ / │ * │ - │	│ 7 │ 8 │ 9 │ 0 │ - │ = │   │bks│Ins│Hom│PgU│Num│ / │ * │ - │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤	├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Tap│ q │ w │ e │ r │ t │   │Del│End│PgD│ 7 │ 8 │ 9 │ + │	│ y │ u │ i │ o │ p │ [ │ ] │ \ │Del│End│PgD│ 7 │ 8 │ 9 │ + │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤	├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
	 * │Cap│ a │ s │ d │ f │ g │   │ NO│ NO│ NO│ 4 │ 5 │ 6 │ + │	│ h │ j │ k │ l │ ; │ ' │   │Ent│ NO│ NO│ NO│ 4 │ 5 │ 6 │ + │
	 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤	├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │LSh│ z │ x │ c │ v │ b │   │ NO│ ↑ │ NO│ 1 │ 2 │ 3 │Ent│	│ b │ n │ m │ , │ . │ / │   │RSh│ NO│ ↑ │ NO│ 1 │ 2 │ 3 │Ent│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤	├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Ctr│Win│Alt│   │Spa│   │   │ ← │ ↓ │ → │ 0 │ 0 │ . │Ent│	│ b │   │Spa│   │Alt│Win│Fn │Ctr│ ← │ ↓ │ → │ 0 │ 0 │ . │Ent│
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘	└───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
	 
     */
    [0] = LAYOUT(
		KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,																					KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F13,
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,		KC_INS,  KC_HOME, KC_PGUP, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,		KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_GRV,  KC_BSPC,		KC_INS,  KC_HOME, KC_PGUP, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,				KC_DEL,  KC_END,  KC_PGDN, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,		KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,		KC_DEL,  KC_END,  KC_PGDN, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
		KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,				_______, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,		KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,				_______, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,				_______, KC_UP,   _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT,		KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, TO(0),		_______, KC_UP,   _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT,
		KC_LCTL, KC_LGUI, KC_LALT,			KC_SPC,						KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,   KC_P0,   KC_PDOT, KC_PENT,		KC_B,    KC_SPC,  KC_RALT,					 KC_RGUI, TO(1),   KC_RCTL,		KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,	KC_P0,   KC_PDOT, KC_PENT
    )
};
