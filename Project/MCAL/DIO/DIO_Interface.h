#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

// Define the DIO Ports interface options
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

// Define the DIO Pins interface options
#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7

// Define the DIO Pin mode interface options
#define DIO_PIN_INPUT  0
#define DIO_PIN_OUTPUT 1

// Define the DIO Port mode interface options
#define DIO_PORT_INPUT  0x00    // > 0b00000000
#define DIO_PORT_OUTPUT 0xff    // > 0b11111111

// Define the DIO Pin Values interface options
#define DIO_PIN_LOW  0
#define DIO_PIN_HIGH 1

// Define the DIO Port values interface options
#define DIO_PORT_LOW  0x00    // > 0b00000000
#define DIO_PORT_HIGH 0xff    // > 0b11111111

// Prototypes
/* -------------------------------- Pin Functions ----------------------------------- */
ErrorCode DIO_SetPinMode(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Mode);
ErrorCode DIO_SetPinValue(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value);
ErrorCode DIO_TogglePinValue(u8 Copy_u8PortID, u8 Copy_u8PinID);
ErrorCode DIO_GetPinValue(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 *ptr_u8InputData);

/* -------------------------------- Port Functions ----------------------------------- */
ErrorCode DIO_SetPortMode(u8 Copy_u8PortID, u8 Copy_u8Mode);
ErrorCode DIO_SetPortValue(u8 Copy_u8PortID, u8 Copy_u8Value);
ErrorCode DIO_TogglePortValue(u8 Copy_u8PortID);
ErrorCode DIO_GetPortValue(u8 Copy_u8PortID, u8 *ptr_u8InputData);


#endif // DIO_INTERFACE_H