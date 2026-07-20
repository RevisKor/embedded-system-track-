#ifndef BITMATH_H
#define BITMATH_H

// bit math opperations
#define SET_BIT(REG, BIT)    (REG |= (1 <<  BIT)) // set bit to ON

#define CLEAR_BIT(REG, BIT)   (REG &= ~(1 << BIT)) // set bit to OFF

#define TOGGLE_BIT(REG, BIT)  (REG ^= (1 <<  BIT)) // toggle bit ON --> OFF ... OFF --> ON

#define CHECK_BIT(REG, BIT)   ((REG >> BIT) & 1)   // check what the bit is ON | OFF


#endif // bitmath