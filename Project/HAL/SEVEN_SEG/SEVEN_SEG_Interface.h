#ifndef SEVEN_SEG_INTERFACE_H
#define SEVEN_SEG_INTERFACE_H

/* Configuration table */
typedef struct {
    u8 PortID;
    u8 Type;

} SevenSeg_t;

/* Macros */
#define ACTIVE_LOW 0
#define ACTIVE_HIGH 1

#define ZERO    0b00111111
#define ONE     0b00000110
#define TWO     0b01011011
#define THREE   0b01001111
#define FOUR    0b01100110
#define FIVE    0b01101101
#define SIX     0b01111101
#define SEVEN   0b00000111
#define EIGHT   0b01111111
#define NINE    0b01101111

#define CLEAR 0b00000000

/* Enums */
typedef enum {
    COMMON_CATHODE = 0,
    COMMON_ANODE = 1,
} SevenSegtype_t;

/* Prototypes */
ErrorCode SevenSeg_enumInit(const SevenSeg_t* SevenSeg_Config);
ErrorCode SevenSeg_enumDisplayDigit(const SevenSeg_t* SevenSeg_Config, u8 Copy_u8Digit);
ErrorCode SevenSeg_enumClear(const SevenSeg_t* SevenSeg_Config);

#endif