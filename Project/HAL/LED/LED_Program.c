#include "../../Libs/std_types.h"
#include "../../MCAL/DIO/DIO_Interface.h"

#include "LED_Config.h"
#include "LED_Interface.h"
#include "LED_Private.h"

ErrorCode LED_enumInit    (const LED_t* LEDConfig) {
    
    ErrorCode Local_enumValidationStatus = VALID;

    if (LEDConfig != NULL) {
        if ((LEDConfig->PortID <= DIO_PORTD)    && 
            (LEDConfig->PinID <= DIO_PIN7)      &&
            (LEDConfig->ActiveMode <= ACTIVE_HIGH)) {

                DIO_SetPinMode(LEDConfig->PortID, LEDConfig->PinID, DIO_PIN_OUTPUT);
                DIO_SetPinValue(LEDConfig->PortID, LEDConfig->PinID, ~LEDConfig->ActiveMode); 
                
        } else {

            // the config is invalid
            Local_enumValidationStatus = INVALID;
        }
    } else {

        // the config is null
        Local_enumValidationStatus = INVALID;
    }

    // return the status
    return Local_enumValidationStatus;
}

ErrorCode LED_enumPowerOn (const LED_t* LEDConfig) {

    ErrorCode Local_enumValidationStatus = VALID;

    if (LEDConfig != NULL) {
        if ((LEDConfig->PortID <= DIO_PORTD)    && 
            (LEDConfig->PinID <= DIO_PIN7)      &&
            (LEDConfig->ActiveMode <= ACTIVE_HIGH)) {

                DIO_SetPinValue(LEDConfig->PortID, LEDConfig->PinID, LEDConfig->ActiveMode); 
                
        } else {

            // the config is invalid
            Local_enumValidationStatus = INVALID;
        }
    } else {

        // the config is null
        Local_enumValidationStatus = INVALID;
    }

    // return the status
    return Local_enumValidationStatus;
}


ErrorCode LED_enumPowerOff(const LED_t* LEDConfig) {

    ErrorCode Local_enumValidationStatus = VALID;

    if (LEDConfig != NULL) {
        if ((LEDConfig->PortID <= DIO_PORTD)    && 
            (LEDConfig->PinID <= DIO_PIN7)      &&
            (LEDConfig->ActiveMode <= ACTIVE_HIGH)) {

                DIO_SetPinValue(LEDConfig->PortID, LEDConfig->PinID, ~LEDConfig->ActiveMode); 
                
        } else {

            // the config is invalid
            Local_enumValidationStatus = INVALID;
        }
    } else {

        // the config is null
        Local_enumValidationStatus = INVALID;
    }

    // return the status
    return Local_enumValidationStatus;
}

ErrorCode LED_enumToggle  (const LED_t* LEDConfig) {

    ErrorCode Local_enumValidationStatus = VALID;

    if (LEDConfig != NULL) {
        if ((LEDConfig->PortID <= DIO_PORTD)    && 
            (LEDConfig->PinID <= DIO_PIN7)      &&
            (LEDConfig->ActiveMode <= ACTIVE_HIGH)) {

                DIO_TogglePinValue(LEDConfig->PortID, LEDConfig->PinID); 
                
        } else {

            // the config is invalid
            Local_enumValidationStatus = INVALID;
        }
    } else {

        // the config is null
        Local_enumValidationStatus = INVALID;
    }

    // return the status
    return Local_enumValidationStatus;
}

