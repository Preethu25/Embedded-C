 * @date 2021-04-29
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
