#ifndef __ACTIVITY_1_H__
#define __ACTIVITY_1_H__

/**
 * Defining the macros
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTD)    /**< LED Port Number */

/**
 * Defining the pins for button, temperature sensor, led.
 */
#define BUTTON_SENSOR  (PORTD0)   
#define TEMP_SENSOR  (PORTD1)   
#define LED_PIN  (PORTD2)   


/**
 * Include header files
 */ 
#include <util/delay.h>
#include <avr/io.h>

/**
 * @function to initialize the peripherals
 * 
 */
void peripherals(void);

/**
 * @Function to turn LED on
 */
void Led_on();

/**
 * @Function to turn LED off
 */
void Led_off();

/**
 * @If both the buttons are pressed then turn the led on 
 */
int activity1(void);

#endif
