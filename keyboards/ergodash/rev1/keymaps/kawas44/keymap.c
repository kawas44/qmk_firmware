#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2


#define BSPC_L1 LT(_LOWER, KC_BSPC)
#define CTL_OSM OSM(MOD_LCTL)
#define DEL_GUI LGUI_T(KC_DEL)

#define ENT_ALT RALT_T(KC_ENT)
#define SFT_OSM OSM(MOD_RSFT)
#define SPC_L2  LT(_RAISE, KC_SPC)

#define ALT_ESC LALT_T(KC_ESC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT( \
// ,--------------------------------------------------------------+                     +---------------------------------------------------------------.
     XXXXXXX, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , XXXXXXX,                       XXXXXXX, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX, \
// |--------+--------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+--------+---------|
     KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , XXXXXXX,                       XXXXXXX, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS, \
// |--------+--------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+--------+---------|
     ALT_ESC, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , XXXXXXX,                       XXXXXXX, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, \
// |--------+--------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+--------+---------|
     KC_GRV , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , XXXXXXX,                       XXXXXXX, KC_N   , KC_M   , KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS, \
// |--------+--------+--------+--------+--------+--------+--------+---------|  |--------+--------+--------+--------+--------+--------+--------+---------|
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          BSPC_L1, CTL_OSM, DEL_GUI,     ENT_ALT, SFT_OSM, SPC_L2          , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX  \
// ,------------------------------------------------------------------------|  |------------------------------------------------------------------------.
  ),

  [_LOWER] = LAYOUT(
// ,--------------------------------------------------------------+                     +---------------------------------------------------------------.
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
// |--------+--------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+--------+---------|
     _______, KC_F12 , KC_F11 , KC_F10 , KC_F9  , KC_VOLU, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
// |--------+--------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+--------+---------|
     _______, KC_F8  , KC_F7  , KC_F6  , KC_F5  , KC_MPLY, XXXXXXX,                       XXXXXXX, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX, XXXXXXX, \
// |--------+--------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+--------+---------|
     KC_PSCR, KC_F4  , KC_F3  , KC_F2  , KC_F1  , KC_VOLD, XXXXXXX,                       XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, XXXXXXX, \
// |--------+--------+--------+--------+--------+--------+--------+---------|  |--------+--------+--------+--------+--------+--------+--------+---------|
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          BSPC_L1, CTL_OSM, DEL_GUI,     ENT_ALT, SFT_OSM, SPC_L2          , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX  \
// ,------------------------------------------------------------------------|  |------------------------------------------------------------------------.
  ),

  [_RAISE] = LAYOUT(
// ,--------------------------------------------------------------+                     +---------------------------------------------------------------.
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
// |--------+--------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+--------+---------|
     _______, KC_PSLS, KC_9   , KC_8   , KC_7   , KC_PMNS, XXXXXXX,                       XXXXXXX, KC_AT  , KC_LPRN, KC_RPRN, KC_HASH, KC_MINS, KC_EQL , \
// |--------+--------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+--------+---------|
     _______, KC_PAST, KC_6   , KC_5   , KC_4   , KC_PPLS, XXXXXXX,                       XXXXXXX, KC_EXLM, KC_LBRC, KC_RBRC, KC_PERC, KC_AMPR, KC_ASTR, \
// |--------+--------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+--------+---------|
     XXXXXXX, KC_PDOT, KC_3   , KC_2   , KC_1   , KC_0   , XXXXXXX,                       XXXXXXX, KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR,  KC_UNDS, KC_PLUS, \
// |--------+--------+--------+--------+--------+--------+--------+---------|  |--------+--------+--------+--------+--------+--------+--------+---------|
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          BSPC_L1, CTL_OSM, DEL_GUI,     ENT_ALT, SFT_OSM, SPC_L2          , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX  \
// ,------------------------------------------------------------------------|  |------------------------------------------------------------------------.
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
  return true;
}
