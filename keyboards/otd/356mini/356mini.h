/* Copyright 2021 yui<yui@dalesnail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D,   \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D,   \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C,        \
      k30,    k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C,   \
    k40, k41, k42,                     k43,           k44, k45, k46, k47,   \
) { \
    { KC_NO, KC_NO, KC_NO, KC_NO, k47,   KC_NO, k40,   KC_NO, k3C   }, \
    { k11,   k10,   k21,   k00,   k31,   KC_NO, KC_NO, k01,   KC_NO }, \
    { k12,   k20,   k22,   k1D,   k32,   KC_NO, KC_NO, k02,   KC_NO }, \
    { k13,   KC_NO, k23,   KC_NO, k33,   KC_NO, KC_NO, k03,   KC_NO }, \
    { k14,   k15,   k24,   k25,   k34,   k35,   k05,   k04,   KC_NO }, \
    { k17,   k16,   k27,   k26,   k37,   k36,   k06,   k05,   KC_NO }, \
    { k18,   k1C,   k28,   KC_NO, k38,   KC_NO, k0C,   k06,   KC_NO }, \
    { k19,   KC_NO, k29,   KC_NO, k39,   k46,   KC_NO, k07,   KC_NO }, \
    { k20,   k1B,   k2A,   k2B,   KC_NO, k3A,   k0B,   k08,   KC_NO }, \
    { KC_NO, KC_NO, KC_NO, k42,   KC_NO, k44,   KC_NO, KC_NO, KC_NO }, \
    { KC_NO, k0D,   KC_NO, KC_NO, k2C,   KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, k43,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, k45,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, k30,   k3B,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, k41,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
