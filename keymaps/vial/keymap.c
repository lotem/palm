#include QMK_KEYBOARD_H

#define CTL_ESC LCTL_T(KC_ESC)
#define CTL_QUO RCTL_T(KC_QUOT)

#define SYM_TAB LT(1, KC_TAB)
#define NAV_BSP LT(2, KC_BSPC)
#define NUM_ENT LT(3, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │   `  │   1  │   2  │   3  │   4  │   5  │   6  │   7  │   8  │   9  │   0  │  Del │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │  Tab │   Q  │   W  │   E  │   R  │   T  │   Y  │   U  │   I  │   O  │   P  │ Bksp │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │  Esc │   A  │   S  │   D  │   F  │   G  │   H  │   J  │   K  │   L  │   ;  │   '  │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ Shift│   Z  │   X  │   C  │   V  │   B  │   N  │   M  │   ,  │   .  │   /  │ Shift│
     * └───┴───┴───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
     *                         │  Sym │ Enter│  Alt │  Gui │ space│  Nav │
     *                         └───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_5x6_3_quasi_split(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        CTL_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, CTL_QUO,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                   SYM_TAB, NUM_ENT, KC_LALT, KC_LGUI, KC_SPC,  NAV_BSP
    ),

    [1] = LAYOUT_5x6_3_quasi_split(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_TRNS, KC_NO,   KC_LBRC, KC_LCBR, KC_RCBR, KC_NO,   KC_CIRC, KC_LPRN, KC_RPRN, KC_RBRC, KC_TILD, KC_TRNS,
        KC_TRNS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_AMPR, KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,  KC_TRNS,
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_ASTR, KC_UNDS, KC_PLUS, KC_PIPE, KC_SLSH, KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [2] = LAYOUT_5x6_3_quasi_split(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_NO,   KC_TRNS,
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_TRNS,
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT_5x6_3_quasi_split(
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_P7,   KC_P8,   KC_P9,   KC_PAST, KC_TRNS,
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_PMNS, KC_TRNS,
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_P1,   KC_P2,   KC_P3,   KC_PPLS, KC_NUM,
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_P0,   KC_NO,   KC_PDOT, KC_PSLS, KC_PENT,
                                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
};
