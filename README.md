# slz40
PCB and keymap files for the SLZ40, a 40s style keyboard with numbers for Zhuyin input.

The PCB requires a Pro Micro (or comparable) controller as well as 58 diodes, 58 MX style switches

The sandwich case takes M2 screws and standoffs.

You can find the key caps required in the following layout.

cap size | number | R1 | R2 | R3 | R4 | R5
-------|-------|-------|-------|------|------|-------|
1u | 47 | 11 | 13 | 10 | 10 | 3 |
1.25u | 6 | 0 | 0 | 1 | 1 | 4 |
1.5u | 1 | 0 | 0 | 0 | 0 | 1 |
1.75u | 4 | 0 | 0 | 1 | 1 | 2 |

![](slz40-layout.svg)

[QMK toolbox](https://docs.qmk.fm/#/) is required to flash the layout 

The default keymap can be found in the keymap folder.

A hex of the default layout can be found [here](slz40_default.hex) to make sure the keyboard is working.

--
Update 6/24/2024
Added firmware for Via/Vial compatability.
