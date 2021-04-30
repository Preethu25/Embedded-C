/**
 * @file act1buttonsensor.c
 * @author 259870 (you@domain.com)
 * @brief Turning the LED ON and OFF
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include "act1buttonsensor.h"

void initiLED(void)  // Initializing the input and output ports
{
    DDRB|=(1<<PB0);  //Set PB0=1 for LED
    DDRD&=~(1<<PD0); // Clear bit 
    PORTD|=(1<<PD0); // Set bit of D0
    PORTD|=(1<<PD1); // Set bit of D1
}
