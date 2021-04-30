/**
 * @file act4UART.c
 * @author Preethu R (you@domain.com)
 * @brief UART serial communication
 * @version 0.1
 * @date 2021-04-30
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <avr/io.h>
#include "act4USART.h"
/**
 * @brief Port initialization
 *
 * @param ubrr_value
 */
void initiUSART(uint16_t ubrr_value)
{
    // Set Baud rate

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ01);

    // Enable the transmitter and receiver

    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}
/**
 * @brief Read the temperature value
 *
 * @param data
 */
char USARTReadValue(char data)
{
    // Wait until data is available
    while(!(UCSR0A & (1<<RXC0)))
    {
      // Do Nothing
    }
    // Read the data
    return 0;
}

/**
 * @brief write data on USART port
 *
 * @param data
 */
void USARTWriteValue(char data)
{
    // Wait until the transmitter is ready
    while(!(UCSR0A & (1<<UDRE0)))
    {
      // Do Nothing
    }
    // Write the data to USART buffer
    UDR0 = data;
}
