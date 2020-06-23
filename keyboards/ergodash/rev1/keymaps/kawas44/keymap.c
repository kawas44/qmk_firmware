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

#define TO_L1   TT(_LOWER)
#define TO_L2   TT(_RAISE)
#define TO_L3   MO(_ADJUST)

// Define a key to type a COLON ':'
//   OS set to Colemak, use LSFT(KC_P)
//   OS set to Qwerty, use KC_COLN
#define U_COLN  LSFT(KC_P)
// #define U_COLN KC_COLN


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
    KC_HOME, KC_LEFT, KC_RGHT, OS_LGUI,          TO_L1  , KC_BSPC, XXXXXXX,     XXXXXXX, KC_SPC , TO_L2  ,          OS_RCTL, KC_UP  , KC_DOWN, KC_END
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
    KC_HOME, KC_LEFT, KC_RGHT, OS_LGUI,          TO_L1  , KC_BSPC, XXXXXXX,     XXXXXXX, KC_SPC , TO_L2  ,          OS_RCTL, KC_UP  , KC_DOWN, KC_END
// `-------+--------+--------+--------+        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  ),

  [_LOWER] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_F12 , KC_F11 , KC_F10 , KC_F9  , KC_DEL , XXXXXXX,                       XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_COLN , XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_F8  , KC_F7  , KC_F6  , KC_F5  , KC_LSFT, XXXXXXX,                       XXXXXXX, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_QUOT, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_F4  , KC_F3  , KC_F2  , KC_F1  , KC_INS , XXXXXXX,                       XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_QUES, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, _______,          _______, _______, _______,     _______, _______, TO_L3  ,          _______, XXXXXXX, XXXXXXX, XXXXXXX
// `-------+--------+--------+--------+        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  ),

  [_RAISE] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_GRV , KC_TILD, KC_HASH, KC_LPRN, KC_RPRN, KC_AT  , XXXXXXX,                       XXXXXXX, KC_ASTR, KC_7   , KC_8   , KC_9   , KC_MINS, KC_PERC,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_AMPR, KC_DQUO, KC_UNDS, KC_LBRC, KC_RBRC, KC_EXLM, XXXXXXX,                       XXXXXXX, KC_0   , KC_4   , KC_5   , KC_6   , KC_EQL , KC_PENT,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_BSLS, KC_PIPE, KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR , XXXXXXX,                       XXXXXXX, KC_PLUS, KC_1   , KC_2   , KC_3   , KC_SLSH, KC_PDOT,
// |-------+--------+--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, _______,          TO_L3  , _______, _______,     _______, _______, _______,          _______, XXXXXXX, XXXXXXX, XXXXXXX
// `-------+--------+--------+--------'        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  ),

  [_ADJUST] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    QWERTY , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, COLEMAK,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLU, XXXXXXX,                       XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPLY, XXXXXXX,                       XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, XXXXXXX,                       XXXXXXX, XXXXXXX, KC_BTN1, KC_BTN2, KC_BTN3, XXXXXXX, XXXXXXX,
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
