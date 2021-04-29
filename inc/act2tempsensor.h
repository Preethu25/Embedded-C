#ifndef ACT2TEMPSENSOR_H_INCLUDED
#define ACT2TEMPSENSOR_H_INCLUDED

#include <avr/io.h>

void initiADC();
uint16_t ReadADC(uint8_t ch);

#endif // ACT2TEMPSENSOR_H_INCLUDED
