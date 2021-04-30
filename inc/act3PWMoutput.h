/**
 * @file act3PWMoutput.h
 * @author 259870 (you@domain.com)
 * @brief Display the output of the temperature sensor
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef ACT3PWMOUTPUT_H_INCLUDED
#define ACT3PWMOUTPUT_H_INCLUDED
#include<avr/io.h>
/**
 * @brief Function definition
 *
 * @param temp_value
 * @return char
 */
void initiPWM(void);
char PWMoutput(uint16_t temp_value);

#endif // ACT3PWMOUTPUT_H_INCLUDED
