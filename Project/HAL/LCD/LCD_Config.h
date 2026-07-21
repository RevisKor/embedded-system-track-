#ifndef LCD_CONFIG_H
#define LCD_CONFIG_H

/* ---------- Configurations ---------- */

/* Data Port */
#define LCD_u8_DATA_PORT DIO_PORTD

/* Control Port */
#define LCD_u8_CTRL_PORT DIO_PORTC

/* Control Pins */
#define LCD_u8_RSPIN DIO_PIN0       // (Command : 0 / Data : 1)
#define LCD_u8_RWPIN DIO_PIN1       // (Write   : 0 / Read : 1)
#define LCD_u8_ENPIN DIO_PIN2       // (Enable: 0 - 1)  

#endif