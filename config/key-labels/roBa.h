/*                                      42 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────┬────────────────────────╮   ╭──────────────────────── ┬─────────────────────────╮ 
  │ 0   1   2   3   4      │      5  6   7   8   9  │   │ LT4 LT3 LT2 LT1 LT0     │     RT0 RT1 RT2 RT3 RT4 │ 
  │ 10  11  12  13  14  15 │ 16  17  18  19  20  21 │   │ LM4 LM3 LM2 LM1 LM0 LTE │ RTE RM0 RM1 RM2 RM3 RM4 │ 
  │ 22  23  24  25  26  27 │ 28  29  30  31  32  33 │   │ LB4 LB3 LB2 LB1 LB0 LBE │ RBE RB0 RB1 RB2 RB3 RB4 │ 
  │ 34  35  35  37  38  39 │ 40  41 ╭──────────╮ 42 │   │ LH5 LH4 LH3 LH2 LH1 LH0 │ RH0 RH1 ╭─────────╮ RH2 │ 
  ╰────────────────────────┴────────╯          ╰────╯   ╰─────────────────────────┴─────────╯         ╰─────╯ */

#pragma once

#define LT0  4  // left-top row
#define LT1  3
#define LT2  2
#define LT3  1
#define LT4  0

#define RT0  5  // right-top row
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9

#define LM0 14  // left-middle row
#define LM1 13
#define LM2 12
#define LM3 11
#define LM4 10

#define RM0 17  // right-middle row
#define RM1 18
#define RM2 19
#define RM3 20
#define RM4 21

#define LB0 26  // left-bottom row
#define LB1 25
#define LB2 24
#define LB3 23
#define LB4 22

#define RB0 29  // right-bottom row
#define RB1 30
#define RB2 31
#define RB3 32
#define RB4 33

#define LH0 39  // left thumb keys
#define LH1 38
#define LH2 37
#define LH3 36
#define LH4 35
#define LH5 34

#define RH1 40 // right thumb keys
#define RH1 41
#define RH2 42

#define LTE 15  // encoders
#define RTE 16
#define LBE 27  
#define RBE 28

#define NUMROW 
#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4
#define THUMBS_L LH0 LH1 LH2 LH3 LH4 LH5
#define THUMBS_R RH0 RH1 RH2 
#define THUMBS THUMBS_L THUMBS_R
