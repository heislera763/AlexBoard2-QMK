#pragma once

#include "quantum.h"

#define LAYOUT_tkl_ansi( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c,        k0e, k0f, k0g, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d,   k1e, k1f, k1g, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d,   k2e, k2f, k2g, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,      k3d,                  \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a,           k4d,        k4f,      \
	k50,  k51,  k52,            k53,          k58,  k59,  k5a,       k5d,   k5e, k5f, k5g  \
  ) { \
    { k00, k01, k02, k03, k04,   k05,   k06,   k07,   k08, k09, k0a, k0b,   k0c,   KC_NO, k0e,   k0f,   k0g },   \
	{ k10, k11,	k12, k13, k14,   k15,	k16,   k17,   k18, k19,	k1a, k1b,   k1c,   k1d,   k1e,   k1f,   k1g },   \
	{ k20, k21,	k22, k23, k24,   k25,	k26,   k27,   k28, k29,	k2a, k2b,   k2c,   k2d,   k2e,   k2f,   k2g },   \
	{ k30, k31,	k32, k33, k34,   k35,	k36,   k37,   k38, k39,	k3a, k3b,   KC_NO, k3d,   KC_NO, KC_NO, KC_NO }, \
	{ k40, k41,	k42, k43, k44,   k45,	k46,   k47,   k48, k49,	k4a, KC_NO, KC_NO, k4d,   KC_NO, k4f,   KC_NO }, \
	{ k50, k51, k52, k53, KC_NO, KC_NO, KC_NO, KC_NO, k58, k59, k5a, KC_NO, KC_NO, k5d,   k5e,   k5f,   k5g }    \
}
