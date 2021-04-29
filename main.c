#include <avr/io.h>
#include "act1buttonsensor.h"
int main(void)
{
    initiLED();
    while(1)
    {
          if(ButtonSensor_ON && Heater_ON)
          {
                  PORTB|=(1<<PB0);
          }
          else
        {
              PORTB&=~(1<<PB0);
        }
    }

    return 0;
}
