#ifndef ACT1BUTTONSENSOR_H_INCLUDED
#define ACT1BUTTONSENSOR_H_INCLUDED

/**
 * @file act1buttonsensor.h
 * @author Preethu R ()
 * @brief Project to turn ON LED based on heater
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Include files
 */
#include <avr/io.h>

/**
 * Macro Definitions
 */
#define ButtonSensor_ON !(PIND&(1<<PD0)) // Switch 1 is ON
#define Heater_ON !(PIND&(1<<PD1)) // Switch 2 is ON


/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin based on button sensor and heater
 * 

 
void initiLED(void);

#endif // ACT1BUTTONSENSOR_H_INCLUDED
