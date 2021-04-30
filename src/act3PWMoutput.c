/**
 * @file act3PWMoutput.c
 * @author Preethu R (you@domain.com)
 * @brief Generating PWM output waveform according to the change in temperature
 * @version 0.1
 * @date 2021-04-29
 *
 * @copyright Copyright (c) 2021
 *
 */
#include<avr/io.h>
#include<util/delay.h>
#include"act3PWMoutput.h"

/**
 * @brief Initilization of timer and counter register
 *
 */
void initiPWM(void)
{
    /*Configuring the registers and ports*/
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB|=(1<<PB1);

}
/**
 * @brief Output according to given analog input
 *
 * @param ADC_value
 */
char PWMoutput (uint16_t ADC_value)
{

    char temp;

    if((ADC_value>=0) && (ADC_value<=209))
    {

        OCR1A = 205; // Duty cycle = 20%
        temp = 20;   // Temperature = 20 C
        _delay_ms(20);
    }
    else if((ADC_value>=210) && (ADC_value<=509))
    {

        OCR1A = 410; //Duty cycle = 40%
        temp = 25;   // Temperature = 25 C
       _delay_ms(20);
    }
    else if((ADC_value>=510) && (ADC_value<=709))
    {

        OCR1A = 717;// Duty cycle = 70%
        temp = 29;  // Temperature = 29 C
        _delay_ms(20);
    }
    else if((ADC_value>=710) && (ADC_value<=1024))
    {

        OCR1A = 973; // Duty cycle = 95%
        temp = 33;   // Temperature = 33 C
        _delay_ms(20);
    }
    else
    {
        OCR1A = 0; //0% output
        temp = 0;  // Temperature = 0 C
    }
    return temp;
}
