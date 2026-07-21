#include "../Libs/std_types.h"
#include "../MCAL/DIO/DIO_Interface.h"
#include "../MCAL/DIO/DIO_Private.h"
#include "../HAL/LED/LED_Interface.h"
#include "../HAL/LCD/LCD_Interface.h"



int main(void) {

	LCD_voidInit();

	while(1)
	{
		LCD_voidWriteString("Yahia");
	}

	return 0;
}