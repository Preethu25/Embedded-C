#ifndef ACT2_TEMPSENSOR_H_INCLUDED
#define ACT2_TEMPSENSOR_H_INCLUDED

#include <avr/io.h>

void initiADC();
uint16_t ReadADC(uint8_t ch);

#endif // ACT2_TEMPSENSOR_H_INCLUDED
