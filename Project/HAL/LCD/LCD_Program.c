#include "../../Libs/std_types.h"
#include "../../Libs/bitmath.h"

#include "../../MCAL/DIO/DIO_Interface.h"

#include "LCD_Config.h"
#include "LCD_Interface.h"
#include "LCD_Private.h"

// #include <util/delay.h>

/* ------------------- Functions ------------------- */
void LCD_voidInit(void) {

    /* Set the Direction (Input / Output ) of the ctrl Pins */
    DIO_SetPinMode(LCD_u8_CTRL_PORT, LCD_u8_RSPIN, DIO_PIN_OUTPUT);
    DIO_SetPinMode(LCD_u8_CTRL_PORT, LCD_u8_RWPIN, DIO_PIN_OUTPUT);
    DIO_SetPinMode(LCD_u8_CTRL_PORT, LCD_u8_ENPIN, DIO_PIN_OUTPUT);

    /* Set the Values (Input / Output ) of the ctrl Pins */
    DIO_SetPinValue(LCD_u8_CTRL_PORT, LCD_u8_RSPIN, DIO_PIN_LOW);
    DIO_SetPinValue(LCD_u8_CTRL_PORT, LCD_u8_RWPIN, DIO_PIN_LOW);
    DIO_SetPinValue(LCD_u8_CTRL_PORT, LCD_u8_ENPIN, DIO_PIN_LOW);

    /* Set the Direction (Input / Output ) of the data Port */
    DIO_SetPortMode(LCD_u8_DATA_PORT, DIO_PORT_OUTPUT);
    _delay_ms(35);

    /* --------------- Function Set --------------- */
    LCD_voidSendInstructions(0b00111100);
    _delay_ms(2);

    /* --------------- On/Off Control --------------- */
    LCD_voidSendInstructions(0b00001111);
    _delay_ms(2);

    /* --------------- Display Clear --------------- */
    LCD_voidSendInstructions(0b00000001);
    _delay_ms(2);

    /* --------------- Entry Mode Set --------------- */
    LCD_voidSendInstructions(0b00000110);
    _delay_ms(2);
}

void LCD_voidSendInstructions(u8 Copy_u8Instruction) {

    /* ------- Configure the modes for the control pins ------- */
    DIO_SetPinValue(LCD_u8_CTRL_PORT, LCD_u8_RSPIN, COMMAND);
    DIO_SetPinValue(LCD_u8_CTRL_PORT, LCD_u8_RWPIN, WRITE);
    DIO_SetPinValue(LCD_u8_CTRL_PORT, LCD_u8_ENPIN, ENABLE_HIGH);

    /* Send the instruction to the Data port*/
    DIO_SetPortValue(LCD_u8_DATA_PORT, Copy_u8Instruction);

    /* Delay the processor a bit for the the instruction to be made */
    _delay_ms(1);

    /* ------- Lower the enable back (HIGH -> LOW) to get ready for a new instruction ------- */
    DIO_SetPinValue(LCD_u8_CTRL_PORT, LCD_u8_ENPIN, ENABLE_LOW);
}

void LCD_voidWriteCharacter(u8 Copy_u8Data) {

    /* Set the Control pin values */
    DIO_SetPinValue(LCD_u8_CTRL_PORT, LCD_u8_RSPIN, DATA);
    DIO_SetPinValue(LCD_u8_CTRL_PORT, LCD_u8_RWPIN, WRITE);

    /* Give to the data stream */
    DIO_SetPortValue(LCD_u8_DATA_PORT, Copy_u8Data);

    /* Toggle Enable */
    DIO_SetPinValue(LCD_u8_CTRL_PORT, LCD_u8_ENPIN, ENABLE_HIGH);
    _delay_ms(1);
    DIO_SetPinValue(LCD_u8_CTRL_PORT, LCD_u8_ENPIN, ENABLE_LOW);
}

void LCD_voidWriteString(u8* ptr_u8String) {

    u8 StringIndex = 0;

    // Loop till arr[i] = NULL
    while (ptr_u8String[StringIndex] != '\0') {

        LCD_voidWriteCharacter(ptr_u8String[StringIndex]);
        StringIndex++;
    }
}

ErrorCode LCD_enumMoveCursor(u8 Copy_u8Row, u8 Copy_u8Column) {
    
    /* Check the Row and Column inputs */
    if (Copy_u8Column > 15) {

        return INVALID;
    }

    if (Copy_u8Row > 1) {

        return INVALID;
    }

    /* Depending on the row decide the address */
    if (Copy_u8Row == 0) {

        LCD_voidSendInstructions(0x80 + Copy_u8Column);

    } else if (Copy_u8Row == 1) {

        LCD_voidSendInstructions(0xC0 + Copy_u8Column);
    }

    return VALID;
}

void LCD_voidClearDisplay(void) {

    LCD_voidSendInstructions(0b00000001);
}

void LCD_voidWriteSpecialCharacter( u8* ptr_u8Pattern, u8 Copy_u8PatternNumber, u8 Copy_u8Row, u8 Copy_u8Column) {

    //! SELF STUDY MAKE THIS
}