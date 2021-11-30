#include "activity1.h"

void peripherals(void)
{	
	/* set the pin PD2*/
	DDRD |= (1<<PD2); 
	/* Clearing the bit PD0 */
    DDRD &= ~(1<<PD0); 
	
    PORTD |= (1<<PD0); 
    DDRD &= ~(1<<PD1); 
    PORTD |= (1<<PD1); 
}
void led_on(){
    LED_PORT |= (1<<LED_PIN); 
}
void led_off(){
    LED_PORT &= ~(1<<LED_PIN);
}
int temp1=0;
int activity1(void)
{
       peripherals();
        if(!(PIND&(1<<BUTTON_SENSOR )) && !(PIND&(1<<TEMP_SENSOR))) 
        { 
            temp1=1;
        }
        else 
        {
            temp1=0;
        }
    return temp1;
}
