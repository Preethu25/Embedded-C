/**
 * @file act2tempsensor.c
 * @author Preethu R ()
 * @brief Generating PWM output waveform according to the change in temperature
 * @version 0.1
 * @date 2021-04-28
 *
 * @copyright Copyright (c) 2021
 *
 */

#include<avr/io.h>
#include "act2tempsensor.h"

void initiADC()
{
    ADMUX=(1<<REFS0); // For Aref=AVcc;
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

uint16_t ReadADC(uint8_t ch)
{
    //Select ADC Channel ch must be 0-7
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    //Start single conversion
    ADCSRA|=(1<<ADSC);
    //Wait for conversion to complete
    while(!(ADCSRA & (1<<ADIF)));
    //Clear ADIF by writing one to it
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
