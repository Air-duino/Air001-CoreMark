# Air001-CoreMark
Air001的CoreMark跑分工程

基于Keil MDK移植的Air001的跑分工程，默认的主频为48MHz，使用AC6编译器的-Ofast优化等级，可以自行修改主频以及优化等级。日志默认采用串口0（PA2/PA3）输出，波特率为115200。

默认工程的跑分结果参考：

```text
About to start Air001 CoreMark testing
The current running frequency is 48000000 Hz
2K performance run parameters for coremark.
CoreMark Size    : 666
Total ticks      : 35380
Total time (secs): 35.380000
Iterations/Sec   : 56.529112
Iterations       : 2000
Compiler version : ArmClang 18.0.0
Compiler flags   : -Ofast
Memory location  : STACK
seedcrc          : 0xe9f5
[0]crclist       : 0xe714
[0]crcmatrix     : 0x1fd7
[0]crcstate      : 0x8e3a
[0]crcfinal      : 0x4983
Correct operation validated. See README.md for run and reporting rules.
CoreMark 1.0 : 56.529112 / ArmClang 18.0.0 -Ofast / STACK
```
