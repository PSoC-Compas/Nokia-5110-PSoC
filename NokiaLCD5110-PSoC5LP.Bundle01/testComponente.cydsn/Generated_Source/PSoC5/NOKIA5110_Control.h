/*******************************************************************************
* File Name: NOKIA5110_Control.h  
* Version 1.80
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CONTROL_REG_NOKIA5110_Control_H) /* CY_CONTROL_REG_NOKIA5110_Control_H */
#define CY_CONTROL_REG_NOKIA5110_Control_H

#include "cytypes.h"

    
/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 controlState;

} NOKIA5110_Control_BACKUP_STRUCT;


/***************************************
*         Function Prototypes 
***************************************/

void    NOKIA5110_Control_Write(uint8 control) ;
uint8   NOKIA5110_Control_Read(void) ;

void NOKIA5110_Control_SaveConfig(void) ;
void NOKIA5110_Control_RestoreConfig(void) ;
void NOKIA5110_Control_Sleep(void) ; 
void NOKIA5110_Control_Wakeup(void) ;


/***************************************
*            Registers        
***************************************/

/* Control Register */
#define NOKIA5110_Control_Control        (* (reg8 *) NOKIA5110_Control_Sync_ctrl_reg__CONTROL_REG )
#define NOKIA5110_Control_Control_PTR    (  (reg8 *) NOKIA5110_Control_Sync_ctrl_reg__CONTROL_REG )

#endif /* End CY_CONTROL_REG_NOKIA5110_Control_H */


/* [] END OF FILE */
