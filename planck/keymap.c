#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom(); // Enables RGB, without saving settings
    rgblight_sethsv_noeeprom(HSV_TEAL);
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT_ortho_4x12(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_ENT), KC_LCTL, KC_NO, KC_LALT, KC_LGUI, MO(2), KC_SPC, LT(4,KC_SPC), MO(3), KC_RSFT, KC_NO, KC_NO, MO(5)),

        [1] = LAYOUT_ortho_4x12(KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC, LCTL_T(KC_ESC), KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_ENT), KC_LCTL, KC_NO, KC_LALT, KC_LGUI, MO(2), KC_SPC, LT(4,KC_SPC), MO(3), KC_RSFT, KC_NO, KC_NO, MO(5)),

        [2] = LAYOUT_ortho_4x12(KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS,
                                KC_GRV, KC_PIPE, KC_LCBR, KC_LBRC, KC_LPRN, KC_LT, KC_GT, KC_RPRN, KC_RBRC, KC_RCBR, KC_BSLS, KC_TRNS,
                                KC_TRNS, KC_NO, KC_NO, KC_MINS, KC_PLUS, KC_NO, KC_NO, KC_EQL, KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS,
                                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

        [3] = LAYOUT_ortho_4x12(KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
                                KC_TILD, KC_PIPE, KC_LCBR, KC_LBRC, KC_LPRN, KC_LT, KC_GT, KC_RPRN, KC_RBRC, KC_RCBR, KC_BSLS, KC_TRNS,
                                KC_TRNS, KC_NO, KC_NO, KC_MINS, KC_PLUS, KC_NO, KC_NO, KC_EQL, KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS,
                                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

        [4] = LAYOUT_ortho_4x12(KC_TRNS, KC_NO, KC_NO, LCTL(KC_RGHT), KC_NO, KC_NO, LCTL(KC_INS), KC_PGUP, KC_HOME, KC_NO, LSFT(KC_INS), KC_TRNS, KC_TRNS, KC_END, KC_PSCR, KC_PGDN, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, LCTL(KC_LEFT), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

        [5] = LAYOUT_ortho_4x12(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, QK_BOOT, KC_CAPS, KC_F11, KC_F12, DF(0), DF(1), KC_NO, KC_NO, RGB_TOG, RGB_HUI, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};
