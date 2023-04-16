/*
Copyright 2018 Embedded Microprocessor Benchmark Consortium (EEMBC)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <coremark.h>
#include <stdarg.h>
#include "air001xx_hal.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>

extern UART_HandleTypeDef huart1;

int ee_printf(const char *fmt, ...)
{
    char buf[256];
    va_list args;
    int len;
    va_start(args, fmt);
    len = vsnprintf(buf, sizeof(buf),fmt, args);
    va_end(args);

    HAL_UART_Transmit(&huart1, (uint8_t *)buf, len, 0xFFFF);
    return len;
}
