#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _COLEMAK 1
#define _LOWER 2
#define _RAISE 3
#define _ADJUST 4

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK
};


#define OS_LCTL OSM(MOD_LCTL)
#define OS_RCTL OSM(MOD_RCTL)
#define OS_LGUI OSM(MOD_LGUI)
#define OS_LSFT OSM(MOD_LSFT)
#define OS_RSFT OSM(MOD_RSFT)
#define OS_LALT OSM(MOD_LALT)
#define OS_RALT OSM(MOD_RALT)

#define GUI_ESC LGUI_T(KC_ESC)
#define ALT_GRV LALT_T(KC_GRV)
#define RALT_QT RALT_T(KC_QUOT)

#define OSL_L1  OSL(_LOWER)
#define OSL_L2  OSL(_RAISE)

#define SFT_P   (QK_LSFT | KC_P)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------.                      ,--------+--------+--------+--------+--------+--------.
    XXXXXXX, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                        KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                        KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , OS_RCTL,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    KC_ESC , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                        KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_ENT ,
// |-------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------|
    OS_LALT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , XXXXXXX,      XXXXXXX, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, OS_RALT,
// `-------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------'
                                        OS_LGUI, OSL_L1 , KC_BSPC,      KC_SPC , OSL_L2 , OS_RSFT
//                                    `--------+--------+--------'    `--------+--------+--------'
  ),

  [_COLEMAK] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------.                      ,--------+--------+--------+--------+--------+--------.
    XXXXXXX, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                        KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    KC_TAB , KC_Q   , KC_W   , KC_F   , KC_P   , KC_G   ,                        KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN, OS_RCTL,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    KC_ESC , KC_A   , KC_R   , KC_S   , KC_T   , KC_D   ,                        KC_H   , KC_N   , KC_E   , KC_I   , KC_O   , KC_ENT ,
// |-------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------|
    OS_LALT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , XXXXXXX,      XXXXXXX, KC_K   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, OS_RALT,
// `-------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------'
                                        OS_LGUI, OSL_L1 , KC_BSPC,      KC_SPC , OSL_L2 , OS_RSFT
//                                    `--------+--------+--------'    `--------+--------+--------'
  ),

  [_LOWER] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------.                      ,--------+--------+--------+--------+--------+--------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    KC_PSCR, KC_F12 , KC_F11 , KC_F10 , KC_F9  , KC_VOLU,                        KC_INS , KC_DEL , KC_ESC , XXXXXXX, KC_PIPE, KC_BSLS,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_F8  , KC_F7  , KC_F6  , KC_F5  , KC_MPLY,                        KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_DQUO, KC_QUOT,
// |-------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_F4  , KC_F3  , KC_F2  , KC_F1  , KC_VOLD, XXXXXXX,      XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END , XXXXXXX, XXXXXXX,
// `-------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------'
                                        _______, _______, _______,      _______, _______, _______
//                                    `--------+--------+--------'    `--------+--------+--------'
  ),

  [_RAISE] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------.                      ,--------+--------+--------+--------+--------+--------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    KC_GRV , KC_TILD, KC_HASH, KC_LPRN, KC_RPRN, KC_AT  ,                        KC_ASTR, KC_7   , KC_8   , KC_9   , KC_MINS, KC_PERC,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    KC_AMPR, SFT_P  , KC_UNDS, KC_LBRC, KC_RBRC, KC_EXLM,                        KC_0   , KC_4   , KC_5   , KC_6   , KC_EQL , KC_PENT,
// |-------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------|
    KC_LT  , KC_GT  , KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR , XXXXXXX,      XXXXXXX, KC_PLUS, KC_1   , KC_2   , KC_3   , KC_SLSH, KC_PDOT,
// `-------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------'
                                        _______, _______, _______,      _______, _______, _______
//                                    `--------+--------+--------'    `--------+--------+--------'
  ),

  [_ADJUST] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------.                      ,--------+--------+--------+--------+--------+--------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QWERTY ,                        COLEMAK, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// `-------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------'
                                        _______, _______, _______,      _______, _______, _______
//                                    `--------+--------+--------'    `--------+--------+--------'
  )
};


layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case COLEMAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAK);
      }
      return false;
      break;
  }
  return true;
}
