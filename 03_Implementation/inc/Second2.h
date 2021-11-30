#ifndef __ACTIVITY_2_H__
#define __ACTIVITY_2_H__
/**
 * @Including header files
 * 
 */
 
#include <util/delay.h>
#include <avr/io.h>

/**
 * @Intialising the function for ADC
 * 
 */
void initialiseADC();

/**
 * 
 * @returning the ADC value
 */
uint16_t readADC(uint8_t ch);

/**
 * @Return the ADC value to main function
 * 
 */
uint16_t activity2(void);

#endif
