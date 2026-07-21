#include "../../Libs/std_types.h"
#include "../../MCAL/DIO/DIO_Interface.h"

#include "SEVEN_SEG_Config.h"
#include "SEVEN_SEG_Interface.h"
#include "SEVEN_SEG_Private.h"


ErrorCode SevenSeg_enumInit(const SevenSeg_t* SevenSeg_Config) {

    if (SevenSeg_Config == NULL) {

        // the condfig ptr is NULL
        return INVALID;
    }

    if (SevenSeg_Config->PortID > DIO_PORTD) {

        // the port number is invalid
        return INVALID;
    }

    // sets the port mode to output
    DIO_SetPortMode(SevenSeg_Config->PortID, DIO_PORT_OUTPUT);

    return VALID;
}

ErrorCode SevenSeg_enumDisplayDigit(const SevenSeg_t* SevenSeg_Config, u8 Copy_u8Digit) {

    if (SevenSeg_Config == NULL) {

        // the condfig ptr is NULL
        return INVALID;
    }

    if (SevenSeg_Config->PortID > DIO_PORTD) {

        // the port number is invalid
        return INVALID;
    }

    // Set the value to the number value
    DIO_SetPortValue(SevenSeg_Config->PortID, Copy_u8Digit);

    return VALID;
}

ErrorCode SevenSeg_enumClear(const SevenSeg_t* SevenSeg_Config) {

    if (SevenSeg_Config == NULL) {

        // the condfig ptr is NULL
        return INVALID;
    }

    if (SevenSeg_Config->PortID > DIO_PORTD) {

        // the port number is invalid
        return INVALID;
    }

    // Set the value to the number value
    DIO_SetPortValue(SevenSeg_Config->PortID, CLEAR);

    return VALID;
}