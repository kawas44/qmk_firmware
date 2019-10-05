#include QMK_KEYBOARD_H

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

#define OS_L1   OSL(_LOWER)
#define OS_L2   OSL(_RAISE)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_LBRC,                       KC_RBRC, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_EQL ,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_LCBR,                       KC_RCBR, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , OS_RSFT,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_ESC , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_PGUP,                       KC_PGDN, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_ENT ,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    OS_LALT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , XXXXXXX,                       XXXXXXX, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, OS_RALT,
// |-------+--------+--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------+--------+--------|
    KC_HOME, KC_LEFT, KC_RGHT, OS_LGUI,          OS_L1  , KC_BSPC, OS_LSFT,     KC_ENT , KC_SPC , OS_L2  ,          OS_RCTL, KC_UP  , KC_DOWN, KC_END
// `-------+--------+--------+--------+        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  ),

  [_COLEMAK] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_LBRC,                       KC_RBRC, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_EQL ,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_TAB , KC_Q   , KC_W   , KC_F   , KC_P   , KC_G   , KC_LCBR,                       KC_RCBR, KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN, OS_RSFT,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_ESC , KC_A   , KC_R   , KC_S   , KC_T   , KC_D   , KC_PGUP,                       KC_PGDN, KC_H   , KC_N   , KC_E   , KC_I   , KC_O   , KC_ENT ,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    OS_LALT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , XXXXXXX,                       XXXXXXX, KC_K   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, OS_RALT,
// |-------+--------+--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------+--------+--------|
    KC_HOME, KC_LEFT, KC_RGHT, OS_LGUI,          OS_L1  , KC_BSPC, OS_LSFT,     KC_ENT , KC_SPC , OS_L2  ,          OS_RCTL, KC_UP  , KC_DOWN, KC_END
// `-------+--------+--------+--------+        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  ),

  [_LOWER] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_PSCR, KC_F12 , KC_F11 , KC_F10 , KC_F9  , KC_VOLU, XXXXXXX,                       XXXXXXX, KC_INS , KC_DEL , KC_ESC , XXXXXXX, KC_PIPE, KC_BSLS,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_F8  , KC_F7  , KC_F6  , KC_F5  , KC_MPLY, XXXXXXX,                       XXXXXXX, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_DQUO, KC_QUOT,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_F4  , KC_F3  , KC_F2  , KC_F1  , KC_VOLD, XXXXXXX,                       XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_QUES, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, _______,          _______, _______, _______,     _______, _______, _______,          _______, XXXXXXX, XXXXXXX, XXXXXXX
// `-------+--------+--------+--------+        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  ),

  [_RAISE] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_GRV , KC_TILD, KC_HASH, KC_LPRN, KC_RPRN, KC_AT  , XXXXXXX,                       XXXXXXX, KC_ASTR, KC_7   , KC_8   , KC_9   , KC_MINS, KC_PERC,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_AMPR, KC_COLN, KC_UNDS, KC_LBRC, KC_RBRC, KC_EXLM, XXXXXXX,                       XXXXXXX, KC_0   , KC_4   , KC_5   , KC_6   , KC_EQL , KC_PENT,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_LT  , KC_GT  , KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR , XXXXXXX,                       XXXXXXX, KC_PLUS, KC_1   , KC_2   , KC_3   , KC_SLSH, KC_PDOT,
// |-------+--------+--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, _______,          _______, _______, _______,     _______, _______, _______,          _______, XXXXXXX, XXXXXXX, XXXXXXX
// `-------+--------+--------+--------'        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  ),

  [_ADJUST] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QWERTY ,                       COLEMAK, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, _______,          _______, _______, _______,     _______, _______, _______,          _______, XXXXXXX, XXXXXXX, XXXXXXX
// `-------+--------+--------+--------'        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  )
};

#ifdef CONSOLE_ENABLE
void keyboard_post_init_user(void) {
  debug_enable=true;
  /* debug_matrix=true; */
  debug_keyboard=true;
  /* debug_mouse=true; */
}
#endif

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
