#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: ANSI layer with caps replaced for FN0 and LSHIFT with FN4 */
    KEYMAP(\
         ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11,  F12,        PSCR,SLCK,PAUS,                         \
         GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS, EQL,BSPC,   INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS, \
         TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,   DEL, END, PGDN,    P7,  P8,  P9,        \
         FN0, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,      ENT,                      P4,  P5,  P6,  PPLS, \
         FN4 ,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,        UP,           P1,  P2,  P3,        \
         LCTL,LGUI,LALT,               SPC,                RALT,RGUI,CAPS,RCTL,   LEFT,DOWN,RGHT,    P0,  PDOT, PENT),    \
    /* SpaceFn/media layer */
    KEYMAP(\
         ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11,  F12,        PWR, WAKE,SLEP,                         \
         GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11,  F12, DEL,   TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,FN3 ,ESC ,MUTE,TRNS,TRNS,HOME, UP, END, PSCR,SLCK, PAUS,INS,   TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,      \
         TRNS,TRNS,TRNS,TRNS,VOLU,TRNS,PGUP,LEFT,DOWN,RGHT,TRNS,TRNS,     TRNS,                      TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,VOLD,SPC, PGDN,FN1,TRNS, TRNS,APP,           TRNS,        PGUP,         TRNS,TRNS,TRNS,      \
         TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,   HOME,PGDN,END,     TRNS,TRNS,TRNS),     \
    /* Mouse layer */
    KEYMAP(\
         FN2 ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,        TRNS,TRNS,TRNS,                         \
         FN2 ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_L,MS_U,WH_R,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,      \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_U,MS_L,MS_D,MS_R,BTN2,TRNS,     TRNS,                      TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_D,TRNS,TRNS,TRNS,TRNS,          TRNS,        TRNS,         TRNS,TRNS,TRNS,      \
         TRNS,TRNS,TRNS,               BTN1,               TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS),     \
    /* Win Gaming layer */
    KEYMAP(\
         ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11,  F12,        PSCR,SLCK,PAUS,                         \
         GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS, EQL,BSPC,   INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS, \
         TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,   DEL, END, PGDN,    P7,  P8,  P9,        \
         FN0, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,      ENT,                      P4,  P5,  P6,  PPLS, \
         LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,        UP,           P1,  P2,  P3,        \
         LCTL,NO  ,LALT,               SPC,                RALT,  NO,CAPS,RCTL,   LEFT,DOWN,RGHT,    P0,  PDOT, PENT),    \
    /* OSX layer */
    KEYMAP(\
         ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11,  F12,        PSCR,SLCK,PAUS,                         \
         GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS, EQL,BSPC,   INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS, \
         TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,   DEL, END, PGDN,    P7,  P8,  P9,        \
         FN0, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,      ENT,                      P4,  P5,  P6,  PPLS, \
         LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,        UP,           P1,  P2,  P3,        \
         LCTL,LALT,LGUI,               SPC,                RALT,RGUI,CAPS,RCTL,   LEFT,DOWN,RGHT,    P0,  PDOT, PENT)     \
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),     // SpaceFn
    [1] = ACTION_DEFAULT_LAYER_SET(2),   // Mouse layer
    [2] = ACTION_DEFAULT_LAYER_SET(0),   // Back to normal layer
    [3] = ACTION_DEFAULT_LAYER_SET(3),   // Gaming layer
    [4] = ACTION_MODS_ONESHOT(MOD_LSFT), // Oneshot Shift
    /*OSX specific bindings -WIP-*/
};