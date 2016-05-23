#ifndef _DISPLAY_H_
#define _DISPLAY_H_
    
/***************************************************************************
* Include font files
***************************************************************************/
#include "NOKIA5110_fonts.h"

#include "cytypes.h"
#include "cyfitter.h"
    
/* PSoC Component only */
#define SET_RST_PIN     0x01 /* RST pin is on the first bit of the Control Register */
#define CLEAR_RST_PIN   0x00
#define SET_DC_PIN      0x02 /* DC pin is in the second bit of the Control Register */
#define CLEAR_DC_PIN    0x00
    
#define CLEAR_RST_CLEAR_DC  (CLEAR_RST_PIN | CLEAR_DC_PIN)
#define SET_RST_CLEAR_DC    (SET_RST_PIN | CLEAR_DC_PIN)
#define SET_RST_SET_DC      (SET_RST_PIN | SET_DC_PIN)
#define CLEAR_RST_SET_DC    (CLEAR_RST_PIN | SET_DC_PIN)

/***************************************************************************
* Compiler directive that allow using backgroung under painting
* To disable this feature comment it
***************************************************************************/
#define DRAW_OVER_BACKGROUND

/***************************************************************************
* Background variable
***************************************************************************/
#ifdef DRAW_OVER_BACKGROUND
    const char *Background;
    typedef enum{
        Small_Front = 0,
        Middle_Front = 1
    } front_type;

    typedef enum{
        DRAW_OR = 0,
        DRAW_XOR = 1,
        DRAW_CLEAR = 2
    } draw_type;

    typedef enum{
    	Invert_Yes,
    	Invert_No
    } Invert_t;

#endif // DRAW_OVER_BACKGROUND

/***************************************************************************
* Public function prototypes
***************************************************************************/
void NOKIA5110_Clear (void);
void NOKIA5110_Contrast (char contrast);
void NOKIA5110_Goto (char x, char y);
void NOKIA5110_Image (char x, char y, char xsize, char ysize, const char * dataPtr);
void NOKIA5110_SendData (char data);
void NOKIA5110_SendCommand (char command);

#ifdef DRAW_OVER_BACKGROUND
void NOKIA5110_Init (const char * dataPtr);
void NOKIA5110_SetBackground (const char * dataPtr);
void NOKIA5110_Chr (char ch, draw_type dt, front_type ft);
void NOKIA5110_Str (char *dataPtr, draw_type dt, front_type ft);
void NOKIA5110_BigStr(char *dataPtr, draw_type dtype);
void NOKIA5110_VBargraph (char x, char ystart, char yend, char yposition, draw_type dt);
void NOKIA5110_HBargraph (char y, char xstart, char xend, char xposition, draw_type dt);
void NOKIA5110_Line (char xb, char yb, char xe, char ye, draw_type dt);
#else  // DRAW_OVER_BACKGROUND
void NOKIA5110_Init (void);
void NOKIA5110_Chr (char ch, front_type ft);
void NOKIA5110_Str (char *dataPtr, front_type ft);
void NOKIA5110_VBargraph (char x, char ystart, char yend, char yposition);
void NOKIA5110_HBargraph (char y, char xstart, char xend, char xposition);
void NOKIA5110_Line (char xb, char yb, char xe, char ye);

#endif // DRAW_OVER_BACKGROUND

#endif // _DISPLAY_H_