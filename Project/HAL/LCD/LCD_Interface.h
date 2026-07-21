#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

/* Enums */
typedef enum {
    COMMAND = 0,
    DATA = 1, 

} RSPIN_VALUE;

typedef enum {
    WRITE = 0,
    READ = 1, 
    
} RWPIN_VALUE;

typedef enum {
    ENABLE_LOW = 0,
    ENABLE_HIGH = 1, 
    
} ENPIN_VALUE;

/* ---------- Prototypes ---------- */

/* Initialize the LCD */
void LCD_voidInit(void);;

/* Sends a command to LCD */
void LCD_voidSendInstructions(u8 Copy_u8Instruction);;

/* Writes a Character "data" to the LCD */
void LCD_voidWriteCharacter(u8 Copy_u8Data);

/* Writes a String of Characters "data" to the LCD */
void LCD_voidWriteString(u8* ptr_u8String);

/* Moves the cursor to a position of x: COL_NUM, y: ROW_NUM ---> (Row, Col)
    Rows    -> (0 >  1)
    Columns -> (0 > 15)
*/
ErrorCode LCD_enumMoveCursor(
    u8 Copy_u8Row,
    u8 Copy_u8Column
);

/* Clears all the Characters "data" from the LCD */
void LCD_voidClearDisplay(void);

/* Writes a  ~Special~  Character to the LCD
    A Character that has no hard coded value / custom Character */
void LCD_voidWriteSpecialCharacter(
    u8* ptr_u8Pattern,
    u8 Copy_u8PatternNumber,
    u8 Copy_u8Row,
    u8 Copy_u8Column
);


#endif