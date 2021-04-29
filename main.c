#include <avr/io.h>
#include "act1buttonsensor.h"
#include "act2tempsensor.h"

uint16_t temp1;
int main(void)
{
    initiLED();
    initiADC();
    while(1)
    {
          if(ButtonSensor_ON && Heater_ON)
          {
                  PORTB|=(1<<PB0);
                  temp1=ReadADC(0);
          }
          else
        {
              PORTB&=~(1<<PB0);
        }
    }

    return 0;
}
