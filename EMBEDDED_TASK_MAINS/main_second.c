#include "../Libs/std_types.h"
#include "../MCAL/DIO/DIO_Interface.h"
#include "../MCAL/DIO/DIO_Private.h"
#include "../HAL/LED/LED_Interface.h"

#define ZERO   0b00111111
#define ONE    0b00000110
#define TWO    0b01011011
#define THREE  0b01001111
#define FOUR   0b01100110
#define FIVE   0b01101101
#define SIX    0b01111101
#define SEVEN  0b00000111
#define EIGHT  0b01111111
#define NINE   0b01101111

const u8 arr[10] = { ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

int main(void) {

	u8 value;
	u8 index = 0;

	DIO_SetPortMode(DIO_PORTA, DIO_PORT_OUTPUT);

	DIO_SetPinMode(DIO_PORTB, DIO_PIN0, DIO_PIN_INPUT);
	DIO_SetPinValue(DIO_PORTB, DIO_PIN0, DIO_PIN_LOW);

	while(1)
	{
		DIO_SetPortValue(DIO_PORTA, arr[index]);

	    DIO_GetPinValue(DIO_PORTB, DIO_PIN0, &value);

		while (value == DIO_PIN_LOW) {
			index = (index + 1) % 10;
		}

	}

	return 0;
}