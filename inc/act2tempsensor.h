/**
 * @file act2tempsensor.h
 * @author Preethu R()
 * @brief ADC Channels
 * @version 0.1
 * @date 2021-04-30
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef ACT2TEMPSENSOR_H_INCLUDED
#define ACT2TEMPSENSOR_H_INCLUDED

#include <avr/io.h>

void initiADC();
uint16_t ReadADC(uint8_t ch);

#endif // ACT2TEMPSENSOR_H_INCLUDED
