
#include "project_config.h"

#include "user_utils.h"
#include "blinky.h"


void peripheral_init(void)
{
	// Configure LED Pin 
	DDRB |= (1 << DDB0);
}

void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}



int main(void)
{
	// Initialize Peripherals 
	peripheral_init();

	for(;;)
	{
        change_led_state(LED_ON);
		delay_ms(LED_ON_TIME);
		
        change_led_state(LED_OFF);
		delay_ms(LED_OFF_TIME);	
	}
	return 0;
}
