/**
 * @file act4USART.h
 * @author Preethu R()
 * @brief USART serial communication
 * @version 0.1
 * @date 2021-04-30
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef ACT4USART_H_INCLUDED
#define ACT4USART_H_INCLUDED
#include <avr/io.h>

/**
 * @brief Initilization of UART serial communication ports
 *
 * @param ubrr
 */
void initiUSART(uint16_t );

/**
 * @brief Write the temperature values to UART port
 *
 * @param data
 */
char USARTReadValue(char );

/**
 * @brief Write the temperature values to UART port
 *
 * @param data
 */
void USARTWriteValue(char );

#endif // ACT4USART_H_INCLUDED
