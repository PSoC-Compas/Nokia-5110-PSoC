#include <project.h>
#include "NOKIA5110_display.h"

int Background_cursor, py, px;

/***************************************************************************
// Private function prototypes
****************************************************************************/

/***************************************************************************
* Name : NOKIA5110_Init
* Description : Performs SPI & NOKIA5110_ controller initialization.
* Argument(s) : None if you don't use DRAW_OVER_BACKGROUND
*               background -> Pointer to background in another case
* Return value : None.
***************************************************************************/
#ifdef DRAW_OVER_BACKGROUND
void NOKIA5110_Init (const char * background)
#else  //DRAW_OVER_BACKGROUND
void NOKIA5110_Init ( void )
#endif //DRAW_OVER_BACKGROUND
{
    int i;
/* wait before clear reset */
    
/* RST_Write(1); */
    NOKIA5110_Control_Write(SET_RST_CLEAR_DC);

/* PRT0DR = NOKIA5110__RST_PIN; */
/* Enable SPI */
    NOKIA5110_SPI_Start();
    NOKIA5110_SendCommand(0x21); // NOKIA5110_ Extended Commands.
    NOKIA5110_SendCommand(0xC0); // Set NOKIA5110_ Vop (Contrast).
    NOKIA5110_SendCommand(0x06); // Set Temp coefficent.
    NOKIA5110_SendCommand(0x13); // NOKIA5110_ bias mode 1:48.
    NOKIA5110_SendCommand(0x20); // NOKIA5110_ Standard Commands, Horizontal addressing mode.
    NOKIA5110_SendCommand(0x0C); // NOKIA5110_ in normal mode.
/* Clear display */
    NOKIA5110_SendCommand(0x40);
    NOKIA5110_SendCommand(0x80);

#ifdef DRAW_OVER_BACKGROUND //DRAW_OVER_BACKGROUND
    if (background == NULL){
        int16 n;
        NOKIA5110_Goto(0,0);
        for (n=0; n<504; n++) {
            background = 0x00;
            NOKIA5110_SendData(0x00);
        }//84 pixel x 6 lineas=504 
    }else{
        Background = background;
        for(i=0; i<504; i++) NOKIA5110_SendData(Background[i]);
        Background_cursor = 0;
    }
#else //DRAW_OVER_BACKGROUND
    for(i=0; i<504; i++) NOKIA5110_SendData(0x00);
#endif 

}

/***************************************************************************
* Name : SetBackground
* Description : SetPointer to dispaly background.
* Argument(s) : dataPtr -> Pointer on aray that contains background.
* Return value : None.
* Note : Availble only with DRAW_OVER_BACKGROUND directive
***************************************************************************/
#ifdef DRAW_OVER_BACKGROUND
void NOKIA5110_SetBackground ( const char *dataPtr ){
    Background = dataPtr;
}
#endif //DRAW_OVER_BACKGROUND

/***************************************************************************
* Name : NOKIA5110_Contrast
* Description : Set display contrast.
* Argument(s) : contrast -> Contrast value from 0x00 to 0x7F.
* Return value : None.
* Notes : No change visible at ambient temperature.
***************************************************************************/
void NOKIA5110_Contrast ( char contrast ){
    if (contrast > 0x7f) {
        contrast = 0x7f;
    }
    /* NOKIA5110_ Extended Commands */
    NOKIA5110_SendCommand(0x20|0x01);
    /* Set NOKIA5110_ Vop (Contrast) */
    NOKIA5110_SendCommand(0x80|contrast);
    /* NOKIA5110_ Standard Commands, horizontal addressing mode. */
    NOKIA5110_SendCommand(0x20);
}

/***************************************************************************
* Name : NOKIA5110_Clear
* Description : Clears the display.
* Argument(s) : None.
* Return value : None.
***************************************************************************/
void NOKIA5110_Clear ( void ){
    int i;
    #ifdef DRAW_OVER_BACKGROUND
        NOKIA5110_SendCommand(0x40);
        NOKIA5110_SendCommand(0x80);
        for(i=0; i<504; i++) NOKIA5110_SendData(Background[i]);
    #else  //DRAW_OVER_BACKGROUND
        for(i=0; i<504; i++) NOKIA5110_SendData(0x00);
    #endif //DRAW_OVER_BACKGROUND
    NOKIA5110_SendCommand(0x40);
    NOKIA5110_SendCommand(0x80);
}

/***************************************************************************
* Name : NOKIA5110_GotoXY
* Description : Sets cursor location to xy location corresponding to basic font size.
* Argument(s) : x, y -> Coordinate for new cursor position. x range 0..83, y - 0..5
* Return value : None.
***************************************************************************/
void NOKIA5110_Goto ( char x, char y ){
    px=x;
    py=y;
    NOKIA5110_SendCommand(0x40|(y & 0x07));
    NOKIA5110_SendCommand(0x80|(x & 0x7f));
    #ifdef DRAW_OVER_BACKGROUND
        Background_cursor = y*84 + x;
    #endif //DRAW_OVER_BACKGROUND
}

/***************************************************************************
* Name : NOKIA5110_Chr
* Description : Displays a character at current cursor location and increment cursor location.
* Argument(s) : ch -> Character to write.
*               dt (available only with DRAW_OVER_BACKGROUND directive) -> drawing type  
* Return value : None.
***************************************************************************/
#ifdef DRAW_OVER_BACKGROUND
void NOKIA5110_Chr ( char ch, draw_type dtype, front_type ft ){
    int i;
    
    switch(ft){
    case 0: // Small Front
        if (dtype == DRAW_OR)  
            for(i=0; i<3; i++, Background_cursor++) NOKIA5110_SendData(SmallFront[ch-32][i] | Background[Background_cursor]);
        else if (dtype == DRAW_XOR)    
            for(i=0; i<3; i++, Background_cursor++) NOKIA5110_SendData(SmallFront[ch-32][i] ^ Background[Background_cursor]);
        else // DRAW_CLEAR
            for(i=0; i<3; i++ ) NOKIA5110_SendData(Background[Background_cursor]);
            NOKIA5110_SendData(Background[Background_cursor]); // empty space after character 
    break;
            
    default: // Default Middle Front
        if (dtype == DRAW_OR)  
            for(i=0; i<5; i++, Background_cursor++) NOKIA5110_SendData(MiddleFont[ch-32][i] | Background[Background_cursor]);
        else if (dtype == DRAW_XOR)    
            for(i=0; i<5; i++, Background_cursor++) NOKIA5110_SendData(MiddleFont[ch-32][i] ^ Background[Background_cursor]);
        else // DRAW_CLEAR
            for(i=0; i<5; i++ ) NOKIA5110_SendData(Background[Background_cursor]);
            NOKIA5110_SendData(Background[Background_cursor]); // empty space after character
    break;
    }
}
#else //DRAW_OVER_BACKGROUND
void NOKIA5110_Chr ( char ch , front_type ft ){
    int i;
    switch(ft){
    case 0: // Small Front
        for(i=0; i<3; i++) NOKIA5110_SendData(SmallFront[ch-32][i]);// empty space after character 
        NOKIA5110_SendData(0x00);
    break;
        
    default: // Default Middle Front
    for(i=0; i<5; i++) NOKIA5110_SendData(MiddleFont[ch-32][i]);// empty space after character 
    NOKIA5110_SendData(0x00);
    break;
    }
}
#endif //DRAW_OVER_BACKGROUND

/***************************************************************************
* Name : NOKIA5110_Str
* Description : Displays a character at current cursor location and increment cursor location
* according to font size.
* Argument(s) : dataPtr -> Pointer to null terminated ASCII string to display.
*               dt (available only with DRAW_OVER_BACKGROUND directive) -> drawing type  
* Return value : None.
***************************************************************************/
#ifdef DRAW_OVER_BACKGROUND
void NOKIA5110_Str ( char *dataPtr, draw_type dtype, front_type ft ){
    int i;
    while ( *dataPtr ){
        char ch = *dataPtr++; 
        switch(ft){
        case 0: // Small Front
            if (dtype == DRAW_OR)
                for(i=0; i<3; i++, Background_cursor++) NOKIA5110_SendData(SmallFront[ch-32][i] | Background[Background_cursor]);
            else if (dtype == DRAW_XOR)
                for(i=0; i<3; i++, Background_cursor++) NOKIA5110_SendData(SmallFront[ch-32][i] ^ Background[Background_cursor]);
            else
                for(i=0; i<3; i++, Background_cursor++) NOKIA5110_SendData(Background[Background_cursor]);// empty space after character 
                NOKIA5110_SendData(Background[Background_cursor++]);
        break;
        default: //Default front Middle
            if (dtype == DRAW_OR)
                for(i=0; i<5; i++, Background_cursor++) NOKIA5110_SendData(MiddleFont[ch-32][i] | Background[Background_cursor]);
            else if (dtype == DRAW_XOR)
                for(i=0; i<5; i++, Background_cursor++) NOKIA5110_SendData(MiddleFont[ch-32][i] ^ Background[Background_cursor]);
            else
                for(i=0; i<5; i++, Background_cursor++) NOKIA5110_SendData(Background[Background_cursor]);// empty space after character 
                NOKIA5110_SendData(Background[Background_cursor++]);
        break;
        }
    }
}
#else //DRAW_OVER_BACKGROUND
void NOKIA5110_Str ( char *dataPtr , front_type ft  ){
    int i;
    while ( *dataPtr ){
    
        char ch = *dataPtr++; 
        switch(ft){
        case 0: // Small Front
            char ch = *dataPtr++; 
            for(i=0; i<5; i++) NOKIA5110_SendData(FontLookup[ch-32][i]);
            // empty space after character 
            NOKIA5110_SendData(0x00);
        default: // Default Middle Front
            char ch = *dataPtr++; 
            for(i=0; i<5; i++) NOKIA5110_SendData(FontLookup[ch-32][i]);
            // empty space after character 
            NOKIA5110_SendData(0x00);
        break;
        }
    }
}
#endif //DRAW_OVER_BACKGROUND

/***************************************************************************
* Name : NOKIA5110_BigStr
* Description : Displays a character at current cursor location and increment cursor location
* according to font size.
* Argument(s) : dataPtr -> Pointer to null terminated ASCII string to display.
*               dt (available only with DRAW_OVER_BACKGROUND directive) -> drawing type  
* Return value : None.
***************************************************************************/
#ifdef DRAW_OVER_BACKGROUND
void NOKIA5110_BigStr(char *dataPtr, draw_type dtype){

    char *dataPtrVar;
    int i;
    char ch;
    //draw upper half of text
    dataPtrVar = dataPtr;
    NOKIA5110_SendCommand(0x40 | (py & 0x07));
    NOKIA5110_SendCommand(0x80 | (px & 0x7f));
    Background_cursor = py*84+px;
    while ( *dataPtrVar ){

        ch = *dataPtrVar++; 
        if (dtype == DRAW_OR)
            for(i=0; i<8; i++,Background_cursor++) NOKIA5110_SendData(BigFont[ch-32][i][0] | Background[Background_cursor]); 
        else if (dtype == DRAW_XOR)
            for(i=0; i<8; i++,Background_cursor++ ) NOKIA5110_SendData(BigFont[ch-32][i][0] ^ Background[Background_cursor]); 
        else 
            for(i=0; i<8; i++,Background_cursor++ ) NOKIA5110_SendData(Background[Background_cursor]); 
            NOKIA5110_SendData(Background[Background_cursor]);
    };
    //draw lover half of text
    dataPtrVar = dataPtr;
    NOKIA5110_SendCommand(0x40 | ((py+1)& 0x07));
    NOKIA5110_SendCommand(0x80 | ( px& 0x7f));
    Background_cursor = (py+1)*84+px;
    while ( *dataPtrVar ){
    
        char ch = *dataPtrVar++; 
        if (dtype == DRAW_OR)
            for(i=0; i<8; i++,Background_cursor++) NOKIA5110_SendData(BigFont[ch-32][i][1] | Background[Background_cursor]); 
        else if (dtype == DRAW_XOR)
            for(i=0; i<8; i++,Background_cursor++) NOKIA5110_SendData(BigFont[ch-32][i][1] ^ Background[Background_cursor]); 
        else
            for(i=0; i<8; i++,Background_cursor++) NOKIA5110_SendData(Background[Background_cursor]); 
            NOKIA5110_SendData(Background[Background_cursor]);
    }
}
#else //DRAW_OVER_BACKGROUND
void NOKIA5110_BigStr(char x, char y, char *dataPtr ){
    char *dataPtrVar;
    int i;
    char ch;
    //draw upper half of text
    dataPtrVar = dataPtr;
    NOKIA5110_SendCommand(0x40 | y);
    NOKIA5110_SendCommand(0x80 | x);
    while ( *dataPtrVar ){
        ch = *dataPtrVar++; 
        for(i=0; i<8; i++) NOKIA5110_SendData(BigFontLookup[ch-32][i][0]); 
        NOKIA5110_SendData(0x00);
    };
    //draw lover half of text
    dataPtrVar = dataPtr;
    NOKIA5110_SendCommand(0x40 | (y+1));
    NOKIA5110_SendCommand(0x80 | x);
    while ( *dataPtrVar ){        
        char ch = *dataPtrVar++; 
        for(i=0; i<8; i++) NOKIA5110_SendData(BigFontLookup[ch-32][i][1]); 
        NOKIA5110_SendData(0x00);
    }
}
#endif //DRAW_OVER_BACKGROUND

/***************************************************************************
* Name : NOKIA5110_Image
* Description : DrawBitmap.
* Argument(s) : x -> Start x coord
*               y -> Start y coord
*               xsize -> Image x size
*               ysize -> Image y size
*               dataPrt -> pointer to linear array that contains bitmap	
* Return value : None.
***************************************************************************/
void NOKIA5110_Image (char x, char y, char xsize, char ysize, const char * dataPtr){
    int i, j;
    for (j=0; j<ysize; j++){
    // set start address
        NOKIA5110_SendCommand(0x40 | (y+j));
        NOKIA5110_SendCommand(0x80 | x);
        for (i=0; i<xsize; i++) NOKIA5110_SendData(dataPtr[j*xsize+i]); 
    } 
    #ifdef DRAW_OVER_BACKGROUND
        Background_cursor = (y+ysize)*84+x+xsize;
    #else //DRAW_OVER_BACKGROUND
    #endif //DRAW_OVER_BACKGROUND
}

/***************************************************************************
// Name : NOKIA5110_VBargraph
// Description : Draw vertical Bargraph.
// Argument(s) : x -> bargraph's left coord
//               ystart -> Start y coord (by bank)
//               yend -> End y size (by bank, yend must be > ystart)
//               yposition -> bargraph position (by pixel, must  be <= (yend-ystart+1)*8)
//               dt (available only with DRAW_OVER_BACKGROUND directive) -> drawing type  
// Return value : None.
***************************************************************************/
#ifdef DRAW_OVER_BACKGROUND
void NOKIA5110_VBargraph (char x, char ystart, char yend, char yposition, draw_type dt){
    char i,j,ch;
    NOKIA5110_SendCommand(0x40 | yend);
    NOKIA5110_SendCommand(0x80 | x);
    Background_cursor = yend*84+x;
    if (dt == DRAW_OR) 
        NOKIA5110_SendData(0xFF);
    else if (dt == DRAW_XOR) 
        NOKIA5110_SendData(0xFF ^ Background[Background_cursor++]);
    else   
        NOKIA5110_SendData(Background[Background_cursor++]);
    for (i=0; i<6 ; i++, Background_cursor++){
        switch (yposition){
        case 0 : ch=0x80; break;
        case 1 : ch=0x80; break;
        case 2 : ch=0xC0; break;
        case 3 : ch=0xE0; break;
        case 4 : ch=0xF0; break;
        case 5 : ch=0xF8; break;
        case 6 : ch=0xFC; break;
        case 7 : ch=0xFE; break;
        default: ch=0xFF; break;
        };
    if (dt == DRAW_OR) 
        NOKIA5110_SendData(ch | Background[Background_cursor]);
    else if (dt == DRAW_XOR) 
        NOKIA5110_SendData(ch ^ Background[Background_cursor]);
    else   
        NOKIA5110_SendData(Background[Background_cursor]);
    }
    if (dt == DRAW_OR) 
        NOKIA5110_SendData(0xFF);
    else if (dt == DRAW_XOR) 
        NOKIA5110_SendData(0xFF ^ Background[Background_cursor++]);
    else   
        NOKIA5110_SendData(Background[Background_cursor++]);

    for (j=yend-1; j>ystart; j--){
        if (yposition > 8)
            yposition -=8;
        else
            yposition=0;  
            NOKIA5110_SendCommand(0x40 | j);
            NOKIA5110_SendCommand(0x80 | x);
            Background_cursor = j*84+x;

        if (dt == DRAW_OR) 
            NOKIA5110_SendData(0xFF);
        else if (dt == DRAW_XOR) 
            NOKIA5110_SendData(0xFF ^ Background[Background_cursor++]);
        else   
            NOKIA5110_SendData(Background[Background_cursor++]);
        for (i=0; i<6 ; i++, Background_cursor++){
            switch (yposition){
            case 0 : ch=0x00; break;
            case 1 : ch=0x80; break;
            case 2 : ch=0xC0; break;
            case 3 : ch=0xE0; break;
            case 4 : ch=0xF0; break;
            case 5 : ch=0xF8; break;
            case 6 : ch=0xFC; break;
            case 7 : ch=0xFE; break;
            default: ch=0xFF; break;
            };
        if (dt == DRAW_OR) 
            NOKIA5110_SendData(ch | Background[Background_cursor]);
        else if (dt == DRAW_XOR) 
            NOKIA5110_SendData(ch ^ Background[Background_cursor]);
        else   
            NOKIA5110_SendData(Background[Background_cursor]);
        };
        if (dt == DRAW_OR) 
            NOKIA5110_SendData(0xFF);
        else if (dt == DRAW_XOR) 
            NOKIA5110_SendData(0xFF ^ Background[Background_cursor++]);
        else   
            NOKIA5110_SendData(Background[Background_cursor++]);
    };
    if (yposition > 8)
        yposition -=8;
    else
        yposition=0;  
    NOKIA5110_SendCommand(0x40 | ystart);
    NOKIA5110_SendCommand(0x80 | x);
    Background_cursor = ystart*84+x;
    if (dt == DRAW_OR) 
        NOKIA5110_SendData(0xFF);
    else if (dt == DRAW_XOR) 
        NOKIA5110_SendData(0xFF ^ Background[Background_cursor++]);
    else   
        NOKIA5110_SendData(Background[Background_cursor++]);
    for (i=0; i<6 ; i++, Background_cursor++){
        switch (yposition){
        case 0 : ch=0x01; break;
        case 1 : ch=0x81; break;
        case 2 : ch=0xC1; break;
        case 3 : ch=0xE1; break;
        case 4 : ch=0xF1; break;
        case 5 : ch=0xF9; break;
        case 6 : ch=0xFD; break;
        case 7 : ch=0xFF; break;
        default: ch=0xFF; break;
        };
    if (dt == DRAW_OR) 
        NOKIA5110_SendData(ch | Background[Background_cursor]);
    else if (dt == DRAW_XOR) 
        NOKIA5110_SendData(ch ^ Background[Background_cursor]);
    else   
        NOKIA5110_SendData(Background[Background_cursor]);
    }
    if (dt == DRAW_OR) 
        NOKIA5110_SendData(0xFF);
    else if (dt == DRAW_XOR) 
        NOKIA5110_SendData(0xFF ^ Background[Background_cursor++]);
    else   
        NOKIA5110_SendData(Background[Background_cursor++]);
}

#else //DRAW_OVER_BACKGROUND
void NOKIA5110_VBargraph (char x, char ystart, char yend, char yposition){
    char i,j,ch;
    NOKIA5110_SendCommand(0x40 | yend);
    NOKIA5110_SendCommand(0x80 | x);
    NOKIA5110_SendData(0xFF);
    for (i=0; i<6 ; i++, Background_cursor++){
        switch (yposition){
        case 0 : ch=0x80; break;
        case 1 : ch=0x80; break;
        case 2 : ch=0xC0; break;
        case 3 : ch=0xE0; break;
        case 4 : ch=0xF0; break;
        case 5 : ch=0xF8; break;
        case 6 : ch=0xFC; break;
        case 7 : ch=0xFE; break;
        default: ch=0xFF; break;
        };
    NOKIA5110_SendData(ch);
    }
    NOKIA5110_SendData(0xFF);
    for (j=yend-1; j>ystart; j--){
        if (yposition > 8)
            yposition -=8;
        else
            yposition=0;  
    NOKIA5110_SendCommand(0x40 | j);
    NOKIA5110_SendCommand(0x80 | x);
    NOKIA5110_SendData(0xFF);
        for (i=0; i<6 ; i++, Background_cursor++){
            switch (yposition){
            case 0 : ch=0x00; break;
            case 1 : ch=0x80; break;
            case 2 : ch=0xC0; break;
            case 3 : ch=0xE0; break;
            case 4 : ch=0xF0; break;
            case 5 : ch=0xF8; break;
            case 6 : ch=0xFC; break;
            case 7 : ch=0xFE; break;
            default: ch=0xFF; break;
            };
        NOKIA5110_SendData(ch);
        };
        NOKIA5110_SendData(0xFF);
    };
    if (yposition > 8)
        yposition -=8;
    else
        yposition=0;  
    NOKIA5110_SendCommand(0x40 | ystart);
    NOKIA5110_SendCommand(0x80 | x);
    NOKIA5110_SendData(0xFF);
    for (i=0; i<6 ; i++, Background_cursor++){
        switch (yposition){
        case 0 : ch=0x01; break;
        case 1 : ch=0x81; break;
        case 2 : ch=0xC1; break;
        case 3 : ch=0xE1; break;
        case 4 : ch=0xF1; break;
        case 5 : ch=0xF9; break;
        case 6 : ch=0xFD; break;
        case 7 : ch=0xFF; break;
        default: ch=0xFF; break;
        };
    NOKIA5110_SendData(ch);
    }
    NOKIA5110_SendData(0xFF);
}
#endif //DRAW_OVER_BACKGROUND

/***************************************************************************
* Name : NOKIA5110_HBargraph
* Description : Draw vertical Bargraph.
* Argument(s) : y -> bargraph's top coord
*               xstart -> Start x coord 
*		         xend -> End x coord (xend must be > xstart)
*               xposition -> bargraph position (must  be xstart <= xposition <= xend)
*               dt (available only with DRAW_OVER_BACKGROUND directive) -> drawing type  
* Return value : None.
***************************************************************************/
#ifdef DRAW_OVER_BACKGROUND
void NOKIA5110_HBargraph (char y, char xstart, char xend, char xposition, draw_type dt){
    int i;
    NOKIA5110_SendCommand(0x40 | y);
    NOKIA5110_SendCommand(0x80 | xstart);
    Background_cursor = y*84+xstart;
    if (dt == DRAW_OR) 
        NOKIA5110_SendData(0x7E | Background[Background_cursor++]);
    else if (dt == DRAW_XOR) 
        NOKIA5110_SendData(0x7E ^ Background[Background_cursor++]);
    else   
        NOKIA5110_SendData(Background[Background_cursor++]);
    for (i=1; i<xposition; i++,Background_cursor++) 
        if (dt == DRAW_OR) 
            NOKIA5110_SendData(0x7E | Background[Background_cursor]);
        else if (dt == DRAW_XOR) 
            NOKIA5110_SendData(0x7E ^ Background[Background_cursor]);
        else   
            NOKIA5110_SendData(Background[Background_cursor]);
    for (i=xposition+1; i<xend-xstart; i++,Background_cursor++) 
        if (dt == DRAW_OR) 
            NOKIA5110_SendData(0x42 | Background[Background_cursor]);
        else if (dt == DRAW_XOR) 
            NOKIA5110_SendData(0x42 ^ Background[Background_cursor]);
        else   
            NOKIA5110_SendData(Background[Background_cursor]);
        if (dt == DRAW_OR) 
            NOKIA5110_SendData(0x7E | Background[Background_cursor++]);
        else if (dt == DRAW_XOR) 
            NOKIA5110_SendData(0x7E ^ Background[Background_cursor++]);
        else   
            NOKIA5110_SendData(Background[Background_cursor++]);
}
#else //DRAW_OVER_BACKGROUND
void NOKIA5110_HBargraph (char y, char xstart, char xend, char xposition){
    int i;
    NOKIA5110_SendCommand(0x40 | y);
    NOKIA5110_SendCommand(0x80 | xstart);
    NOKIA5110_SendData(0x7E);
    for (i=1; i<=xposition; i++){
        NOKIA5110_SendData(0x7E);
    }
    for (i=xposition+1; i<xend-xstart; i++){
        NOKIA5110_SendData(0x42);
    }
    NOKIA5110_SendData(0x7E);
}
#endif //DRAW_OVER_BACKGROUND


#ifdef DRAW_OVER_BACKGROUND
void NOKIA5110_Line (char xb, char yb, char xe, char ye, draw_type dt)
#else //DRAW_OVER_BACKGROUND
void NOKIA5110_Line (char xb, char yb, char xe, char ye)
#endif //DRAW_OVER_BACKGROUND
{
    char posx, posy, drwdata;
    int stepx, stepy, dx, dy, fraction;
    dy = ye - yb;
    dx = xe - xb;
    if (dy < 0){
        dy = -dy;
        stepy = -1;
    }
    else stepy = 1; 
    if (dx < 0){
        dx = -dx;
        stepx = -1;
    }
    else stepx = 1;
  
    dx <<= 1;
    dy <<= 1;
    posx = xb;
    posy = yb >> 3;
    switch(yb & 0x07){
        case 0x00 : drwdata = 0x01; break;
        case 0x01 : drwdata = 0x02; break;
        case 0x02 : drwdata = 0x04; break;
        case 0x03 : drwdata = 0x08; break;
        case 0x04 : drwdata = 0x10; break;
        case 0x05 : drwdata = 0x20; break;
        case 0x06 : drwdata = 0x40; break;
        default : drwdata = 0x80;
    } 

    if (dx > dy){
    
    fraction = dy - (dx >> 1);
    while (xb != xe){
        if (fraction >= 0 ){ 
            yb += stepy;
            fraction -= dx;
        }
        xb += stepx;
        fraction += dy;

        if (posx != xb || posy != yb >> 3){
            NOKIA5110_SendCommand(0x40 | posy);
            NOKIA5110_SendCommand(0x80 | posx); 
#ifdef DRAW_OVER_BACKGROUND
            Background_cursor = posy*84+posx;
            if (dt == DRAW_OR) NOKIA5110_SendData(drwdata | Background[Background_cursor++]);
            else if (dt == DRAW_XOR) NOKIA5110_SendData(drwdata ^ Background[Background_cursor++]); 
            else NOKIA5110_SendData(Background[Background_cursor++]); 
#else //DRAW_OVER_BACKGROUND
            NOKIA5110_SendData(drwdata); 
#endif //DRAW_OVER_BACKGROUND
            posx = xb;
            posy = yb >> 3;
            switch(yb & 0x07){
                case 0x00 : drwdata = 0x01; break;
                case 0x01 : drwdata = 0x02; break;
                case 0x02 : drwdata = 0x04; break;
                case 0x03 : drwdata = 0x08; break;
                case 0x04 : drwdata = 0x10; break;
                case 0x05 : drwdata = 0x20; break;
                case 0x06 : drwdata = 0x40; break;
                default : drwdata = 0x80;
            }
        }else{
            switch(yb & 0x07){
                case 0x00 : drwdata |= 0x01; break;
                case 0x01 : drwdata |= 0x02; break;
                case 0x02 : drwdata |= 0x04; break;
                case 0x03 : drwdata |= 0x08; break;
                case 0x04 : drwdata |= 0x10; break;
                case 0x05 : drwdata |= 0x20; break;
                case 0x06 : drwdata |= 0x40; break;
                default : drwdata |= 0x80; break;
            }
        }
    }
}else{
    fraction = dx - (dy >> 1);
    while (yb != ye){
        if (fraction >=0 ){
            xb += stepx;
            fraction -= dy;
        }
        yb += stepy;
        fraction += dx;
        if (posx != xb || posy != yb >> 3){
            NOKIA5110_SendCommand(0x40 | posy);
            NOKIA5110_SendCommand(0x80 | posx); 
#ifdef DRAW_OVER_BACKGROUND
            Background_cursor = posy*84+posx;
            if (dt == DRAW_OR) NOKIA5110_SendData(drwdata | Background[Background_cursor++]);
            else if (dt == DRAW_XOR) NOKIA5110_SendData(drwdata ^ Background[Background_cursor++]); 
            else NOKIA5110_SendData(Background[Background_cursor++]); 
#else //DRAW_OVER_BACKGROUND
            NOKIA5110_SendData(drwdata); 
#endif //DRAW_OVER_BACKGROUND
            posx = xb;
            posy = yb >> 3;
            switch(yb & 0x07){
                case 0x00: drwdata = 0x01; break;
                case 0x01 : drwdata = 0x02; break;
                case 0x02 : drwdata = 0x04; break;
                case 0x03 : drwdata = 0x08; break;
                case 0x04 : drwdata = 0x10; break;
                case 0x05 : drwdata = 0x20; break;
                case 0x06 : drwdata = 0x40; break;
                default : drwdata = 0x80;
            }
        }else{
            switch(yb & 0x07){
                case 0x00: drwdata |= 0x01; break;
                case 0x01 : drwdata |= 0x02; break;
                case 0x02 : drwdata |= 0x04; break;
                case 0x03 : drwdata |= 0x08; break;
                case 0x04 : drwdata |= 0x10; break;
                case 0x05 : drwdata |= 0x20; break;
                case 0x06 : drwdata |= 0x40; break;
                default : drwdata |= 0x80;
            }
        }
    }
}
    NOKIA5110_SendCommand(0x40 | posy);
    NOKIA5110_SendCommand(0x80 | posx); 
#ifdef DRAW_OVER_BACKGROUND
    Background_cursor = posy*84+posx;
    if (dt == DRAW_OR) NOKIA5110_SendData(drwdata | Background[Background_cursor++]);
    else if (dt == DRAW_XOR) NOKIA5110_SendData(drwdata ^ Background[Background_cursor++]); 
    else NOKIA5110_SendData(Background[Background_cursor++]); 
#else //DRAW_OVER_BACKGROUND
    NOKIA5110_SendData(drwdata); 
#endif //DRAW_OVER_BACKGROUND
}

/*--------------------------------------------------------------------------------------------------
// Name : NOKIA5110_SendData
// Description : Sends data to display controller.
// Argument(s) : data -> Data to be sent
// Return value : None.
//--------------------------------------------------------------------------------------------------*/
void NOKIA5110_SendData ( char data ){
    //DC_Write(1);
    NOKIA5110_Control_Write(SET_RST_SET_DC);
    while ( ! (NOKIA5110_SPI_ReadTxStatus() & NOKIA5110_SPI_STS_SPI_IDLE) );
    // Send data to display controller.
    NOKIA5110_SPI_WriteTxData(data);

    // Wait until SPI cycle complete.
    while ( ! (NOKIA5110_SPI_ReadTxStatus() & NOKIA5110_SPI_STS_SPI_IDLE) );
}

/*--------------------------------------------------------------------------------------------------
// Name : NOKIA5110_SendCommand
// Description : Sends command to display controller.
// Argument(s) : command -> Command to be sent
// Return value : None.
//--------------------------------------------------------------------------------------------------*/
void NOKIA5110_SendCommand ( char command )
{
    // DC_Write(0);
    NOKIA5110_Control_Write(SET_RST_CLEAR_DC);
    //  PRT0DR &= ~NOKIA5110__DC_PIN;
    while ( ! (NOKIA5110_SPI_ReadTxStatus() & NOKIA5110_SPI_STS_SPI_IDLE) );
    // Send command to display controller.
    NOKIA5110_SPI_WriteTxData(command);
    // Wait until SPI cycle complete.
    while ( ! (NOKIA5110_SPI_ReadTxStatus() & NOKIA5110_SPI_STS_SPI_IDLE) );

}

/* END OF FILE */
