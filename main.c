  
/**
 * @file main.c
 * @author Preethu R (you@domain.com)
 * @brief Sensors used in car for temperature adjustment purpose
 * @version 0.1
 * @date 2021-04-28
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <avr/io.h>
#include <util/delay.h>
#include "act1buttonsensor.h"
#include "act2tempsensor.h"
#include "act3PWMoutput.h"
#include "act4USART.h"

int main(void)
{
    uint16_t temp;
    char temp_value;
    initiLED();      // Initilization of switch ports(input ports) and LED port(output port)
    initiADC();      // Initilization of ADC channels
    initiPWM();      // Initilization of PWM pins
    initiUSART(103); // Initilization of USART ports
    while(1)
    {
          if(ButtonSensor_ON && Heater_ON) // If seat occupied and heater is turned ON
          {
                  PORTB|=(1<<PB0); // LED is turned ON
                  temp=ReadADC(0);
                  temp_value= PWMoutput(temp);
                  USARTWriteValue(temp_value);
          }
          else
        {
              PORTB&=~(1<<PB0); // LED is turned OFF
              OCR1A=0;
        }
    }

    return 0;
}
