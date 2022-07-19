# ULX3S Ninja

PCB for connecting 2 Raspi cams to an ULX3S FPGA board

# Pinout ULX3S (preliminary)

```
       cam0   cam1
lane0  8      10     (differential pair)
lane1  9      11     (differential pair)
clk    12*    13     (differential pair)
SCL    6P     7P
SDA    6N     7N
Enable 5P     5N
```
  * Differential pair 12 is differential primary clock capable, see https://github.com/emard/ulx3s/blob/master/doc/MANUAL.md

# Pinout Raspi Camera FFC connector

```
1  GND
2  Lane_0_N
3  Lane_0_P
4  GND
5  Lane_1_N
6  Lane_1_N
7  GND
8  Clk_N
9  Clk_P
10 GND
11 GPIO/Enabel
12 x
13 SCL
14 SDA
15 3V3
```