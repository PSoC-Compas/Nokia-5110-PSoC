#include <project.h>

int main()
{
    int i =0;
    CyGlobalIntEnable; 
    
    NOKIA5110_Init(back1);
    NOKIA5110_Contrast(0x39);
    
    NOKIA5110_Goto(3,0);
    NOKIA5110_BigStr("Cypress",DRAW_OR);
    NOKIA5110_Goto(3,2);
    NOKIA5110_Str("PSoC5LP & NOKIA5110_ Nokia5110",DRAW_OR,Middle_Front);
    NOKIA5110_Goto(3,4);
    NOKIA5110_Str("Ejemplo0123456789",DRAW_OR,Small_Front);
    NOKIA5110_Goto(3,5);
    NOKIA5110_Str("EjemploConfig",DRAW_OR,Middle_Front);
    
    CyDelay(2000);
    
    NOKIA5110_SetBackground(back2);
    NOKIA5110_Clear();
    
    NOKIA5110_Goto(10,1);
    NOKIA5110_Str("OVER",DRAW_XOR,Middle_Front);
    NOKIA5110_Goto(10,2);
    NOKIA5110_Str("BACKGROUND",DRAW_XOR,Middle_Front);
    CyDelay(2000);
    
    NOKIA5110_SetBackground(back1);
    NOKIA5110_Clear();
    
    for(i=0;i<45;i++)
    {
        NOKIA5110_HBargraph(1,5,50,i,DRAW_OR);
        CyDelay(10);
    }
    CyDelay(2000);
    
    NOKIA5110_Clear();
    
    for(i=0;i<25;i++)
    {
        NOKIA5110_VBargraph(10,2,4,i,DRAW_OR);
        CyDelay(10);
    }
    CyDelay(2000);
    
    NOKIA5110_Clear();
    NOKIA5110_Image(11,1,62,4,logo);
    CyDelay(2000);
    
    NOKIA5110_Clear();
    NOKIA5110_Image(1,0,84,6,pagina);
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
