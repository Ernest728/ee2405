/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

DigitalOut myled(LED1);

int main()
{
    while (1)
    {
        myled = 1;  // set LED1 pin to high
        ThisThread::sleep_for(1s);

        myled.write(0);  // set LED1 pin to low
        ThisThread::sleep_for(1s);
    }
}
