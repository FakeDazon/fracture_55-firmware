#pragma once
#include "quantum.h"

#define LAYOUT( \
    LA0, LA1, LA2, LA3, LA4, LA5, LA6, LA7,       RA0, RA1, RA2, RA3, RA4, RA5, RA6, RA7, RA8,\
    LB0, LB1, LB2,      LB4, LB5, LB6, LB7, LB8,  RB0, RB1, RB2, RB3, RB4, RB5, RB6,      RB8,\
    LC0, LC1,      LC3, LC4, LC5, LC6, LC7, LC8,  RC0, RC1, RC2, RC3, RC4, RC5, RC6,      RC8,\
    LD0, LD1, LD2,      LD4, LD5,      LD7,       RD0,      RD2, RD3, RD4, RD5, RD6, RD7      \
  ) \
  { \
    { LA0,   LA1,   LA2,   LA3,   LA4,   LA5,   LA6,   LA7,   KC_NO }, \
    { LB0,   LB1,   LB2,   KC_NO, LB4,   LB5,   LB6,   LB7,   LB8,  }, \
    { LC0,   LC1,   KC_NO, LC3,   LC4,   LC5,   LC6,   LC7,   LC8,  }, \
    { LD0,   LD1,   LD2,   KC_NO, LD4,   LD5,   KC_NO, LD7,   KC_NO }, \
    { RA0,   RA1,   RA2,   RA3,   RA4,   RA5,   RA6,   RA7,   RA8   }, \
    { RB0,   RB1,   RB2,   RB3,   RB4,   RB5,   RB6,   KC_NO, RB8,  }, \
    { RC0,   RC1,   RC2,   RC3,   RC4,   RC5,   RC6,   KC_NO, RC8,  }, \
    { RD0,   KC_NO, RD2,   RD3,   RD4,   RD5,   RD6,   RD7,   KC_NO } \
  }
