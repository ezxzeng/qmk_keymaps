#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


#define base_layer              0
#define num_sym_layer           1
#define right_nav_layer         2
#define nav_layer               3
#define mouse_layer             4
#define fnc_layer               5
#define right_numpad_layer_1    6
#define right_numpad_layer_2    7

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[base_layer]           = LAYOUT_split_3x6_3(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_TAB, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC, KC_LCTL, LGUI_T(KC_ESC), LT(nav_layer,KC_ENT), LT(num_sym_layer,KC_BSPC), RSFT_T(KC_SPC), KC_RSFT),
                                                              [num_sym_layer]        = LAYOUT_split_3x6_3(KC_TRNS, KC_TILD, KC_COLN, KC_LPRN, KC_RPRN, KC_BSLS, KC_EQL, KC_7, KC_8, KC_9, KC_BSPC, KC_TRNS, KC_TRNS, LGUI_T(KC_GRV), LALT_T(KC_QUOT), LCTL_T(KC_LBRC), LSFT_T(KC_RBRC), KC_UNDS, KC_MINS, RSFT_T(KC_4), RCTL_T(KC_5), RALT_T(KC_6), RGUI_T(KC_SCLN), KC_TRNS, KC_TRNS, KC_PIPE, KC_DQUO, KC_LT, KC_GT, KC_SLSH, KC_0, KC_1, KC_2, KC_3, TG(right_nav_layer), KC_TRNS, KC_TRNS, KC_TRNS, LT(fnc_layer,KC_ENT), KC_TRNS, KC_TRNS, KC_TRNS),
															  [right_nav_layer]		 = LAYOUT_split_3x6_3(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_U, KC_HOME, KC_UP, KC_END, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_D, KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TAB, KC_WH_L, KC_NO, KC_WH_R, TG(right_nav_layer), KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, MO(mouse_layer), KC_TRNS, KC_TRNS),
                                                              [nav_layer]            = LAYOUT_split_3x6_3(KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, TG(right_numpad_layer_1), KC_NO, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_TRNS, KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_BSPC, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_TRNS, KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_CAPS, KC_NO, KC_MPRV, KC_NO, KC_NO, KC_MNXT, KC_TRNS, KC_DEL, KC_SPC, KC_TRNS, LT(fnc_layer,KC_DEL), LT(mouse_layer,KC_TAB), KC_TRNS),
                                                              [mouse_layer]          = LAYOUT_split_3x6_3(KC_NO, KC_BTN3, KC_BTN1, KC_WH_U, KC_BTN2, KC_NO, KC_NO, KC_BTN1, KC_MS_U, KC_BTN2, KC_BTN3, KC_NO, KC_NO, KC_BTN5, KC_WH_L, KC_WH_D, KC_WH_R, KC_BTN4, KC_BTN4, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN5, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [fnc_layer]            = LAYOUT_split_3x6_3(KC_NO, QK_BOOT, KC_VOLU, RGB_VAI, KC_NO, KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_NO, KC_TRNS, KC_NO, DB_TOGG, KC_VOLD, RGB_VAD, KC_NO, KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, CG_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [right_numpad_layer_1] = LAYOUT_split_3x6_3(KC_NO, KC_EQL, KC_7, KC_8, KC_9, TG(right_numpad_layer_1), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI_T(KC_MINS), LALT_T(KC_4), LCTL_T(KC_5), LSFT_T(KC_6), KC_DOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3, KC_COMM, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RSFT_T(KC_TAB), LT(right_numpad_layer_2,KC_ENT), KC_NO, KC_NO, KC_NO),
                                                              [right_numpad_layer_2] = LAYOUT_split_3x6_3(KC_NO, QK_GESC, KC_COLN, KC_LPRN, KC_RPRN, KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_QUOT, KC_LBRC, KC_RBRC, KC_UNDS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSLS, KC_DQUO, KC_LT, KC_GT, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RSFT_T(KC_SPC), KC_TRNS, KC_NO, KC_NO, KC_NO)};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(num_sym_layer,KC_BSPC):
            // Immediately select the hold action when another key is tapped.
            return true;
        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(num_sym_layer,KC_BSPC):
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}
// qmk c2json keymap.c -kb crkbd -km ezxzeng > keymap.json && qmk format-json keymap.json --inplace
// keymapviz keymap.c -c keymapviz.properties -r
/* ,-----------------------------------------.                ,-----------------------------------------.
 * | ESC  |  Q   |  W   |  E   |  R   |  T   |                |  Y   |  U   |  I   |  O   |  P   | DEL  |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * | TAB  | ◆_A  | ⎇_S  | ⎈_D  | ⇧_F  |  G   |                |  H   | ⇧_J  | ⎈_K  | ⎇_L  | ◆_;: | ' "  |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * | LSFT |  Z   |  X   |  C   |  V   |  B   |                |  N   |  M   | , <  | . >  | / ?  | ESC  |
 * `------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------|
 *                             | LCTL |LGUI_T|LT(nav|  |LT(num|RSFT_T| RSFT |
 *                             `--------------------'  `--------------------'
 *                                                                               generated by [keymapviz] */
/* ,-----------------------------------------.                ,-----------------------------------------.
 * |      |  ~   |  :   |  (   |  )   | \ |  |                | = +  |  7   |  8   |  9   | BSPC |      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * |      | ◆_`~ | ⎇_'" | ⎈_[{ | ⇧_]} |  _   |                | - _  | ⇧_4$ | ⎈_5% | ⎇_6^ | ◆_;: |      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * |      |  |   | DQUO |  LT  |  GT  | / ?  |                |  0   |  1   |  2   |  3   |TG(rig|      |
 * `------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------|
 *                             |      |      |LT(fnc|  |      |      |      |
 *                             `--------------------'  `--------------------'
 *                                                                               generated by [keymapviz] */
/* ,-----------------------------------------.                ,-----------------------------------------.
 * |      |      |      |      |      |      |                | WH_U | HOME |  UP  | END  |      |      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                | WH_D | LEFT | DOWN | RGHT | ENT  |      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                | TAB  | WH_L |      | WH_R |TG(rig|      |
 * `------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------|
 *                             |      |      |      |  |MO(mou|      |      |
 *                             `--------------------'  `--------------------'
 *                                                                               generated by [keymapviz] */
/* ,-----------------------------------------.                ,-----------------------------------------.
 * |      | LEFT | DOWN |  UP  | RGHT |TG(rig|                |      | HOME |  UP  | END  | PGUP |      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * |      | LGUI | LALT | LCTL | LSFT | BSPC |                |      | LEFT | DOWN | RGHT | PGDN |      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * |      | WH_L | WH_D | WH_U | WH_R | CAPS |                |      | MPRV |      |      | MNXT |      |
 * `------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------|
 *                             | DEL  | SPC  |      |  |LT(fnc|LT(mou|      |
 *                             `--------------------'  `--------------------'
 *                                                                               generated by [keymapviz] */
/* ,-----------------------------------------.                ,-----------------------------------------.
 * |      | BTN3 | BTN1 | WH_U | BTN2 |      |                |      | BTN1 | MS_U | BTN2 | BTN3 |      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * |      | BTN5 | WH_L | WH_D | WH_R | BTN4 |                | BTN4 | MS_L | MS_D | MS_R | BTN5 |      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * |      | LGUI | LALT | LCTL | LSFT |      |                |      | RSFT | RCTL | RALT | RGUI |      |
 * `------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------|
 *                             |      |      |      |  |      |      |      |
 *                             `--------------------'  `--------------------'
 *                                                                               generated by [keymapviz] */
/* ,-----------------------------------------.                ,-----------------------------------------.
 * |      |QK_BOO| VOLU |RGB_VA|      |      |                | F12  |  F7  |  F8  |  F9  |      |      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * |      |DB_TOG| VOLD |RGB_VA|      |      |                | F11  |  F4  |  F5  |  F6  |      |      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * |      | PSCR | MUTE |      |      |      |                | F10  |  F1  |  F2  |  F3  |CG_TOG|      |
 * `------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------|
 *                             |      |      |      |  |      |      |      |
 *                             `--------------------'  `--------------------'
 *                                                                               generated by [keymapviz] */
/* ,-----------------------------------------.                ,-----------------------------------------.
 * |      | = +  |  7   |  8   |  9   |TG(rig|                |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * |      |LGUI_T|LALT_T|LCTL_T|LSFT_T| . >  |                |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                |------+------+------+------+------+------|
 * |      |  0   |  1   |  2   |  3   | , <  |                |      |      |      |      |      |      |
 * `------+------+------+------+------+------+------.  ,------+------+------+------+------+------+------|
 *                             |      |RSFT_T|LT(rig|  |      |      |      |
 *                             `--------------------'  `--------------------'
 *                                                                               generated by [keymapviz] */