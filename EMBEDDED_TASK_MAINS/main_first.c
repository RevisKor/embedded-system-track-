#include "../Libs/std_types.h"
#include "../MCAL/DIO/DIO_Interface.h"
#include "../MCAL/DIO/DIO_Private.h"
#include "../HAL/LED/LED_Interface.h"

int main(void) {

	u8 value;

	DIO_SetPortMode(DIO_PORTA, DIO_PORT_OUTPUT);

	DIO_SetPortMode(DIO_PORTB, DIO_PORT_INPUT);
	DIO_SetPortValue(DIO_PORTB, DIO_PORT_HIGH);

	while(1)
	{
	    DIO_GetPortValue(DIO_PORTB, &value);
        DIO_SetPortValue(DIO_PORTA, ~value);
	}

	return 0;
}