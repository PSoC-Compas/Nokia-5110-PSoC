/*******************************************************************************
* File Name: DN.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_DN_H) /* Pins DN_H */
#define CY_PINS_DN_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "DN_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 DN__PORT == 15 && ((DN__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    DN_Write(uint8 value);
void    DN_SetDriveMode(uint8 mode);
uint8   DN_ReadDataReg(void);
uint8   DN_Read(void);
void    DN_SetInterruptMode(uint16 position, uint16 mode);
uint8   DN_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the DN_SetDriveMode() function.
     *  @{
     */
        #define DN_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define DN_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define DN_DM_RES_UP          PIN_DM_RES_UP
        #define DN_DM_RES_DWN         PIN_DM_RES_DWN
        #define DN_DM_OD_LO           PIN_DM_OD_LO
        #define DN_DM_OD_HI           PIN_DM_OD_HI
        #define DN_DM_STRONG          PIN_DM_STRONG
        #define DN_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define DN_MASK               DN__MASK
#define DN_SHIFT              DN__SHIFT
#define DN_WIDTH              1u

/* Interrupt constants */
#if defined(DN__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in DN_SetInterruptMode() function.
     *  @{
     */
        #define DN_INTR_NONE      (uint16)(0x0000u)
        #define DN_INTR_RISING    (uint16)(0x0001u)
        #define DN_INTR_FALLING   (uint16)(0x0002u)
        #define DN_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define DN_INTR_MASK      (0x01u) 
#endif /* (DN__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define DN_PS                     (* (reg8 *) DN__PS)
/* Data Register */
#define DN_DR                     (* (reg8 *) DN__DR)
/* Port Number */
#define DN_PRT_NUM                (* (reg8 *) DN__PRT) 
/* Connect to Analog Globals */                                                  
#define DN_AG                     (* (reg8 *) DN__AG)                       
/* Analog MUX bux enable */
#define DN_AMUX                   (* (reg8 *) DN__AMUX) 
/* Bidirectional Enable */                                                        
#define DN_BIE                    (* (reg8 *) DN__BIE)
/* Bit-mask for Aliased Register Access */
#define DN_BIT_MASK               (* (reg8 *) DN__BIT_MASK)
/* Bypass Enable */
#define DN_BYP                    (* (reg8 *) DN__BYP)
/* Port wide control signals */                                                   
#define DN_CTL                    (* (reg8 *) DN__CTL)
/* Drive Modes */
#define DN_DM0                    (* (reg8 *) DN__DM0) 
#define DN_DM1                    (* (reg8 *) DN__DM1)
#define DN_DM2                    (* (reg8 *) DN__DM2) 
/* Input Buffer Disable Override */
#define DN_INP_DIS                (* (reg8 *) DN__INP_DIS)
/* LCD Common or Segment Drive */
#define DN_LCD_COM_SEG            (* (reg8 *) DN__LCD_COM_SEG)
/* Enable Segment LCD */
#define DN_LCD_EN                 (* (reg8 *) DN__LCD_EN)
/* Slew Rate Control */
#define DN_SLW                    (* (reg8 *) DN__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define DN_PRTDSI__CAPS_SEL       (* (reg8 *) DN__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define DN_PRTDSI__DBL_SYNC_IN    (* (reg8 *) DN__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define DN_PRTDSI__OE_SEL0        (* (reg8 *) DN__PRTDSI__OE_SEL0) 
#define DN_PRTDSI__OE_SEL1        (* (reg8 *) DN__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define DN_PRTDSI__OUT_SEL0       (* (reg8 *) DN__PRTDSI__OUT_SEL0) 
#define DN_PRTDSI__OUT_SEL1       (* (reg8 *) DN__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define DN_PRTDSI__SYNC_OUT       (* (reg8 *) DN__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(DN__SIO_CFG)
    #define DN_SIO_HYST_EN        (* (reg8 *) DN__SIO_HYST_EN)
    #define DN_SIO_REG_HIFREQ     (* (reg8 *) DN__SIO_REG_HIFREQ)
    #define DN_SIO_CFG            (* (reg8 *) DN__SIO_CFG)
    #define DN_SIO_DIFF           (* (reg8 *) DN__SIO_DIFF)
#endif /* (DN__SIO_CFG) */

/* Interrupt Registers */
#if defined(DN__INTSTAT)
    #define DN_INTSTAT            (* (reg8 *) DN__INTSTAT)
    #define DN_SNAP               (* (reg8 *) DN__SNAP)
    
	#define DN_0_INTTYPE_REG 		(* (reg8 *) DN__0__INTTYPE)
#endif /* (DN__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_DN_H */


/* [] END OF FILE */
