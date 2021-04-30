/*
 */

#include <avr/io.h>
#include "act1buttonsensor.h"
#include "act2tempsensor.h"
#include "act3PWMoutput.h"

uint16_t temp1;
char temp2;
int main(void)
{
    initiLED();
    initiADC();
    initiPWM();
    while(1)
    {
          if(ButtonSensor_ON && Heater_ON)
          {
                  PORTB|=(1<<PB0);
                  temp1=ReadADC(0);
                  temp2 = PWMoutput(temp1);
          }
          else
        {
              PORTB&=~(1<<PB0);
              OCR1A=0;
        }
    }

    return 0;
}
