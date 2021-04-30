/*
 */

#include <avr/io.h>
#include "act1buttonsensor.h"
#include "act2tempsensor.h"
#include "act3PWMoutput.h"
#include "act4USART.h"

int main(void)
{
    uint16_t temp;
    char temp_value;
    initiLED();
    initiADC();
    initiPWM();
    initiUSART(103);
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
