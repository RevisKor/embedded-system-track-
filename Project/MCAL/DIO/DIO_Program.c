#include "../../Libs/std_types.h"
#include "../../Libs/bitmath.h"

#include "DIO_Config.h"
#include "DIO_Interface.h"
#include "DIO_Private.h"

/* ----------------------------------- Pin Functions ------------------------------------------- */
ErrorCode DIO_SetPinMode(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Mode) {
    
    // Default Status as valid
    ErrorCode Local_enumValidationStatus = VALID;

    if ((Copy_u8PortID <= DIO_PORTD) && (Copy_u8PinID <= DIO_PIN7) && (Copy_u8Mode <= DIO_PIN_OUTPUT)) {
        
        // (input / 0) ---> clear
        if (Copy_u8Mode == DIO_PIN_INPUT) {
            
            switch (Copy_u8PortID) {

                case DIO_PORTA: CLEAR_BIT(DDRA, Copy_u8PinID); break;
                case DIO_PORTB: CLEAR_BIT(DDRB, Copy_u8PinID); break;
                case DIO_PORTC: CLEAR_BIT(DDRC, Copy_u8PinID); break;
                case DIO_PORTD: CLEAR_BIT(DDRD, Copy_u8PinID); break;

                default: Local_enumValidationStatus = INVALID; break;
            }

        // (output / 1) ---> set    
        } else if (Copy_u8Mode == DIO_PIN_OUTPUT) {

            switch (Copy_u8PortID) {

                case DIO_PORTA: SET_BIT(DDRA, Copy_u8PinID); break;
                case DIO_PORTB: SET_BIT(DDRB, Copy_u8PinID); break;
                case DIO_PORTC: SET_BIT(DDRC, Copy_u8PinID); break;
                case DIO_PORTD: SET_BIT(DDRD, Copy_u8PinID); break;

                default: Local_enumValidationStatus = INVALID; break;
            }
        }
    } else {

        // The user entered an invalid Port / Pin / Mode value
        Local_enumValidationStatus = INVALID;
    }

    // return Status of the condition
    return Local_enumValidationStatus; 
}

ErrorCode DIO_SetPinValue(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value) {

    // Default Status as valid
    ErrorCode Local_enumValidationStatus = VALID;

    if ((Copy_u8PortID <= DIO_PORTD) && (Copy_u8PinID <= DIO_PIN7) && (Copy_u8Value <= DIO_PIN_HIGH)) {

        if (Copy_u8Value == DIO_PIN_LOW) {

            switch (Copy_u8PortID) {

                case DIO_PORTA: CLEAR_BIT(PORTA, Copy_u8PinID); break;
                case DIO_PORTB: CLEAR_BIT(PORTB, Copy_u8PinID); break;
                case DIO_PORTC: CLEAR_BIT(PORTC, Copy_u8PinID); break;
                case DIO_PORTD: CLEAR_BIT(PORTD, Copy_u8PinID); break;

                default: Local_enumValidationStatus = INVALID; break;
            }

        } else if (Copy_u8Value == DIO_PIN_HIGH) {

            switch (Copy_u8PortID) {

                case DIO_PORTA: SET_BIT(PORTA, Copy_u8PinID); break;
                case DIO_PORTB: SET_BIT(PORTB, Copy_u8PinID); break;
                case DIO_PORTC: SET_BIT(PORTC, Copy_u8PinID); break;
                case DIO_PORTD: SET_BIT(PORTD, Copy_u8PinID); break;

                default: Local_enumValidationStatus = INVALID; break;
            }

        } else {

            // The user entered an invalid Value
            Local_enumValidationStatus = INVALID;
        }

    } else {

        // The user entered an invalid Port / Pin / Value
        Local_enumValidationStatus = INVALID;
    }

    // return Status of the condition
    return Local_enumValidationStatus;
}

ErrorCode DIO_TogglePinValue(u8 Copy_u8PortID, u8 Copy_u8PinID) {

    // Default Status as valid
    ErrorCode Local_enumValidationStatus = VALID;

    if ((Copy_u8PortID <= DIO_PORTD) && (Copy_u8PinID <= DIO_PIN7)) {

        switch(Copy_u8PortID) {

            case DIO_PORTA: TOGGLE_BIT(PORTA, Copy_u8PinID); break;
            case DIO_PORTB: TOGGLE_BIT(PORTB, Copy_u8PinID); break;
            case DIO_PORTC: TOGGLE_BIT(PORTC, Copy_u8PinID); break;
            case DIO_PORTD: TOGGLE_BIT(PORTD, Copy_u8PinID); break;

            default: Local_enumValidationStatus = INVALID; break;
        }

    } else {

        // The user entered an invalid value
        Local_enumValidationStatus = INVALID;
    }

    // return Status of the condition
    return Local_enumValidationStatus;

}

ErrorCode DIO_GetPinValue(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 *ptr_u8InputData) {
    
    // Default Status as valid
    ErrorCode Local_enumValidationStatus = VALID;

    if ((Copy_u8PortID <= DIO_PORTD) && (Copy_u8PinID <= DIO_PIN7) && (ptr_u8InputData != NULL)) {
        
        switch(Copy_u8PortID) {

        case DIO_PORTA: *ptr_u8InputData = CHECK_BIT(PINA, Copy_u8PinID); break;
        case DIO_PORTB: *ptr_u8InputData = CHECK_BIT(PINB, Copy_u8PinID); break;
        case DIO_PORTC: *ptr_u8InputData = CHECK_BIT(PINC, Copy_u8PinID); break;
        case DIO_PORTD: *ptr_u8InputData = CHECK_BIT(PIND, Copy_u8PinID); break;

        default: Local_enumValidationStatus = INVALID; 

        }

    } else {

        // Default Status as valid
        Local_enumValidationStatus = INVALID;
    }
    
    // return Status of the condition
    return Local_enumValidationStatus;
}

/* ----------------------------------- Port Functions ------------------------------------------- */
ErrorCode DIO_SetPortMode(u8 Copy_u8PortID, u8 Copy_u8Mode) {

    // Default Status as valid
    ErrorCode Local_enumValidationStatus = VALID;

    if ((Copy_u8PortID <= DIO_PORTD) && (Copy_u8Mode <= DIO_PORT_OUTPUT)) {

        switch (Copy_u8PortID) {

            case DIO_PORTA: DDRA = Copy_u8Mode; break;
            case DIO_PORTB: DDRB = Copy_u8Mode; break;
            case DIO_PORTC: DDRC = Copy_u8Mode; break;
            case DIO_PORTD: DDRD = Copy_u8Mode; break;

            default: Local_enumValidationStatus = INVALID; break;

        }

    } else {

        // The user entered an invalid value
        Local_enumValidationStatus = INVALID;
    }

    // return Status of the condition
    return Local_enumValidationStatus;
    
}

ErrorCode DIO_SetPortValue(u8 Copy_u8PortID, u8 Copy_u8Value) {

    // Default Status as valid
    ErrorCode Local_enumValidationStatus = VALID;

    if ((Copy_u8PortID <= DIO_PORTD) && (Copy_u8Value <= DIO_PORT_OUTPUT)) {

        switch (Copy_u8PortID) {

            case DIO_PORTA: PORTA = Copy_u8Value; break;
            case DIO_PORTB: PORTB = Copy_u8Value; break;
            case DIO_PORTC: PORTC = Copy_u8Value; break;
            case DIO_PORTD: PORTD = Copy_u8Value; break;

            default: Local_enumValidationStatus = INVALID; break;
        }

    } else {

        // The user entered an invalid value
        Local_enumValidationStatus = INVALID;
    }

    // return Status of the condition
    return Local_enumValidationStatus;
}

ErrorCode DIO_TogglePortValue(u8 Copy_u8PortID) {

    // Default Status as valid
    ErrorCode Local_enumValidationStatus = VALID;

    if ((Copy_u8PortID <= DIO_PORTD)) {

        switch (Copy_u8PortID) {

            case DIO_PORTA: PORTA = ~ PORTA; break;
            case DIO_PORTB: PORTB = ~ PORTB; break;
            case DIO_PORTC: PORTC = ~ PORTC; break;
            case DIO_PORTD: PORTD = ~ PORTD; break;

            default: Local_enumValidationStatus = INVALID; break;
        }

    } else {

        // The user entered an invalid value
        Local_enumValidationStatus = INVALID;
    }

    // return Status of the condition
    return Local_enumValidationStatus;
}

ErrorCode DIO_GetPortValue(u8 Copy_u8PortID, u8 *ptr_u8InputData) {

    // Default Status as valid
    ErrorCode Local_enumValidationStatus = VALID;

    if ((Copy_u8PortID <= DIO_PORTD) && (ptr_u8InputData != NULL)) {

        switch (Copy_u8PortID) {

            case DIO_PORTA: *ptr_u8InputData =  PINA; break;
            case DIO_PORTB: *ptr_u8InputData =  PINB; break;
            case DIO_PORTC: *ptr_u8InputData =  PINC; break;
            case DIO_PORTD: *ptr_u8InputData =  PIND; break;

            default: Local_enumValidationStatus = INVALID; break;
        }

    } else {

        // The user entered an invalid value
        Local_enumValidationStatus = INVALID;
    }

    // return Status of the condition
    return Local_enumValidationStatus;
}