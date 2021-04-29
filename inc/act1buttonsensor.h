#ifndef ACT1BUTTONSENSOR_H_INCLUDED
#define ACT1BUTTONSENSOR_H_INCLUDED

#include <avr/io.h>

#define Heater_ON !(PIND&(1<<PD0)) // Switch 1 is ON
#define ButtonSensor_ON !(PIND&(1<<PD1)) // Switch 2 is ON

void initiLED(void);

#endif // ACT1BUTTONSENSOR_H_INCLUDED
