#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H

#define ACTIVE_LOW 0
#define ACTIVE_HIGH 1

/* Configuration table */
typedef struct {
    u8 PortID;
    u8 PinID;
    u8 ActiveMode;

} LED_t;

// prototypes
ErrorCode LED_enumInit(const LED_t* LEDConfig);
ErrorCode LED_enumPowerOn(const LED_t* LEDConfig);
ErrorCode LED_enumPowerOff(const LED_t* LEDConfig);
ErrorCode LED_enumToggle(const LED_t* LEDConfig);

#endif