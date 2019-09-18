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
#define OS_LALT OSM(MOD_LALT)
#define OS_RALT OSM(MOD_RALT)

#define CTL_ESC LCTL_T(KC_ESC)
#define ALT_GRV LALT_T(KC_GRV)

#define BSPC_L1 LT(_LOWER, KC_BSPC)
#define SPC_L2  LT(_RAISE, KC_SPC)

#define KS_EURO (QK_RALT | QK_LSFT | KC_2)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------.                      ,--------+--------+--------+--------+--------+--------.
    XXXXXXX, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                        KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                        KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    KC_ESC , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                        KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
// |-------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------|
    ALT_GRV, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , XXXXXXX,      XXXXXXX, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, OS_RALT,
// `-------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------'
                                        OS_LGUI, BSPC_L1, OS_LSFT,      KC_ENT , SPC_L2 , OS_RCTL
//                                    `--------+--------+--------'    `--------+--------+--------'
  ),

  [_COLEMAK] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------.                      ,--------+--------+--------+--------+--------+--------.
    XXXXXXX, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                        KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    KC_TAB , KC_Q   , KC_W   , KC_F   , KC_P   , KC_B   ,                        KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN, KC_MINS,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    KC_ESC , KC_A   , KC_R   , KC_S   , KC_T   , KC_G   ,                        KC_K   , KC_N   , KC_E   , KC_I   , KC_O   , KC_QUOT,
// |-------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------|
    ALT_GRV, KC_Z   , KC_X   , KC_C   , KC_D   , KC_V   , XXXXXXX,      XXXXXXX, KC_M   , KC_H   , KC_COMM, KC_DOT , KC_SLSH, OS_RALT,
// `-------+--------+--------+--------+--------+--------+--------|    |--------+--------+--------+--------+--------+--------+--------'
                                        OS_LGUI, BSPC_L1, OS_LSFT,      KC_ENT , SPC_L2 , OS_RCTL
//                                    `--------+--------+--------'    `--------+--------+--------'
  ),

  [_LOWER] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------.                      ,--------+--------+--------+--------+--------+--------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_F12 , KC_F11 , KC_F10 , KC_F9  , KC_VOLU,                        KC_INS , KC_DEL , XXXXXXX, XXXXXXX, XXXXXXX, KC_PSCR,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_F8  , KC_F7  , KC_F6  , KC_F5  , KC_MPLY,                        KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX, XXXXXXX,
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
    KC_EQL , KC_MINS, KC_HASH, KC_LPRN, KC_RPRN, KC_AT  ,                        KS_EURO, KC_7   , KC_8   , KC_9   , KC_PMNS, KC_PSLS,
// |-------+--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------+--------|
    KC_AMPR, KC_ASTR, KC_PERC, KC_LBRC, KC_RBRC, KC_EXLM,                        KC_0   , KC_4   , KC_5   , KC_6   , KC_PPLS, KC_PAST,
// |-------+--------+--------+--------+--------+--------+--------.    ,--------+--------+--------+--------+--------+--------+--------|
    KC_PIPE, KC_BSLS, KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR , XXXXXXX,      XXXXXXX, KC_PDOT, KC_1   , KC_2   , KC_3   , KC_PEQL, KC_PENT,
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
