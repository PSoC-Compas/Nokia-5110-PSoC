/*******************************************************************************
* File Name: NOKIA5110_SPI.h
* Version 2.50
*
* Description:
*  Contains the function prototypes, constants and register definition
*  of the SPI Master Component.
*
* Note:
*  None
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_SPIM_NOKIA5110_SPI_H)
#define CY_SPIM_NOKIA5110_SPI_H

#include "cytypes.h"
#include "cyfitter.h"
#include "CyLib.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component SPI_Master_v2_50 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */


/***************************************
*   Conditional Compilation Parameters
***************************************/

#define NOKIA5110_SPI_INTERNAL_CLOCK             (0u)

#if(0u != NOKIA5110_SPI_INTERNAL_CLOCK)
    #include "NOKIA5110_SPI_IntClock.h"
#endif /* (0u != NOKIA5110_SPI_INTERNAL_CLOCK) */

#define NOKIA5110_SPI_MODE                       (1u)
#define NOKIA5110_SPI_DATA_WIDTH                 (8u)
#define NOKIA5110_SPI_MODE_USE_ZERO              (1u)
#define NOKIA5110_SPI_BIDIRECTIONAL_MODE         (0u)

/* Internal interrupt handling */
#define NOKIA5110_SPI_TX_BUFFER_SIZE             (4u)
#define NOKIA5110_SPI_RX_BUFFER_SIZE             (4u)
#define NOKIA5110_SPI_INTERNAL_TX_INT_ENABLED    (0u)
#define NOKIA5110_SPI_INTERNAL_RX_INT_ENABLED    (0u)

#define NOKIA5110_SPI_SINGLE_REG_SIZE            (8u)
#define NOKIA5110_SPI_USE_SECOND_DATAPATH        (NOKIA5110_SPI_DATA_WIDTH > NOKIA5110_SPI_SINGLE_REG_SIZE)

#define NOKIA5110_SPI_FIFO_SIZE                  (4u)
#define NOKIA5110_SPI_TX_SOFTWARE_BUF_ENABLED    ((0u != NOKIA5110_SPI_INTERNAL_TX_INT_ENABLED) && \
                                                     (NOKIA5110_SPI_TX_BUFFER_SIZE > NOKIA5110_SPI_FIFO_SIZE))

#define NOKIA5110_SPI_RX_SOFTWARE_BUF_ENABLED    ((0u != NOKIA5110_SPI_INTERNAL_RX_INT_ENABLED) && \
                                                     (NOKIA5110_SPI_RX_BUFFER_SIZE > NOKIA5110_SPI_FIFO_SIZE))


/***************************************
*        Data Struct Definition
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 enableState;
    uint8 cntrPeriod;
} NOKIA5110_SPI_BACKUP_STRUCT;


/***************************************
*        Function Prototypes
***************************************/

void  NOKIA5110_SPI_Init(void)                           ;
void  NOKIA5110_SPI_Enable(void)                         ;
void  NOKIA5110_SPI_Start(void)                          ;
void  NOKIA5110_SPI_Stop(void)                           ;

void  NOKIA5110_SPI_EnableTxInt(void)                    ;
void  NOKIA5110_SPI_EnableRxInt(void)                    ;
void  NOKIA5110_SPI_DisableTxInt(void)                   ;
void  NOKIA5110_SPI_DisableRxInt(void)                   ;

void  NOKIA5110_SPI_Sleep(void)                          ;
void  NOKIA5110_SPI_Wakeup(void)                         ;
void  NOKIA5110_SPI_SaveConfig(void)                     ;
void  NOKIA5110_SPI_RestoreConfig(void)                  ;

void  NOKIA5110_SPI_SetTxInterruptMode(uint8 intSrc)     ;
void  NOKIA5110_SPI_SetRxInterruptMode(uint8 intSrc)     ;
uint8 NOKIA5110_SPI_ReadTxStatus(void)                   ;
uint8 NOKIA5110_SPI_ReadRxStatus(void)                   ;
void  NOKIA5110_SPI_WriteTxData(uint8 txData)  \
                                                            ;
uint8 NOKIA5110_SPI_ReadRxData(void) \
                                                            ;
uint8 NOKIA5110_SPI_GetRxBufferSize(void)                ;
uint8 NOKIA5110_SPI_GetTxBufferSize(void)                ;
void  NOKIA5110_SPI_ClearRxBuffer(void)                  ;
void  NOKIA5110_SPI_ClearTxBuffer(void)                  ;
void  NOKIA5110_SPI_ClearFIFO(void)                              ;
void  NOKIA5110_SPI_PutArray(const uint8 buffer[], uint8 byteCount) \
                                                            ;

#if(0u != NOKIA5110_SPI_BIDIRECTIONAL_MODE)
    void  NOKIA5110_SPI_TxEnable(void)                   ;
    void  NOKIA5110_SPI_TxDisable(void)                  ;
#endif /* (0u != NOKIA5110_SPI_BIDIRECTIONAL_MODE) */

CY_ISR_PROTO(NOKIA5110_SPI_TX_ISR);
CY_ISR_PROTO(NOKIA5110_SPI_RX_ISR);


/***************************************
*   Variable with external linkage
***************************************/

extern uint8 NOKIA5110_SPI_initVar;


/***************************************
*           API Constants
***************************************/

#define NOKIA5110_SPI_TX_ISR_NUMBER     ((uint8) (NOKIA5110_SPI_TxInternalInterrupt__INTC_NUMBER))
#define NOKIA5110_SPI_RX_ISR_NUMBER     ((uint8) (NOKIA5110_SPI_RxInternalInterrupt__INTC_NUMBER))

#define NOKIA5110_SPI_TX_ISR_PRIORITY   ((uint8) (NOKIA5110_SPI_TxInternalInterrupt__INTC_PRIOR_NUM))
#define NOKIA5110_SPI_RX_ISR_PRIORITY   ((uint8) (NOKIA5110_SPI_RxInternalInterrupt__INTC_PRIOR_NUM))


/***************************************
*    Initial Parameter Constants
***************************************/

#define NOKIA5110_SPI_INT_ON_SPI_DONE    ((uint8) (0u   << NOKIA5110_SPI_STS_SPI_DONE_SHIFT))
#define NOKIA5110_SPI_INT_ON_TX_EMPTY    ((uint8) (0u   << NOKIA5110_SPI_STS_TX_FIFO_EMPTY_SHIFT))
#define NOKIA5110_SPI_INT_ON_TX_NOT_FULL ((uint8) (0u << \
                                                                           NOKIA5110_SPI_STS_TX_FIFO_NOT_FULL_SHIFT))
#define NOKIA5110_SPI_INT_ON_BYTE_COMP   ((uint8) (0u  << NOKIA5110_SPI_STS_BYTE_COMPLETE_SHIFT))
#define NOKIA5110_SPI_INT_ON_SPI_IDLE    ((uint8) (0u   << NOKIA5110_SPI_STS_SPI_IDLE_SHIFT))

/* Disable TX_NOT_FULL if software buffer is used */
#define NOKIA5110_SPI_INT_ON_TX_NOT_FULL_DEF ((NOKIA5110_SPI_TX_SOFTWARE_BUF_ENABLED) ? \
                                                                        (0u) : (NOKIA5110_SPI_INT_ON_TX_NOT_FULL))

/* TX interrupt mask */
#define NOKIA5110_SPI_TX_INIT_INTERRUPTS_MASK    (NOKIA5110_SPI_INT_ON_SPI_DONE  | \
                                                     NOKIA5110_SPI_INT_ON_TX_EMPTY  | \
                                                     NOKIA5110_SPI_INT_ON_TX_NOT_FULL_DEF | \
                                                     NOKIA5110_SPI_INT_ON_BYTE_COMP | \
                                                     NOKIA5110_SPI_INT_ON_SPI_IDLE)

#define NOKIA5110_SPI_INT_ON_RX_FULL         ((uint8) (0u << \
                                                                          NOKIA5110_SPI_STS_RX_FIFO_FULL_SHIFT))
#define NOKIA5110_SPI_INT_ON_RX_NOT_EMPTY    ((uint8) (0u << \
                                                                          NOKIA5110_SPI_STS_RX_FIFO_NOT_EMPTY_SHIFT))
#define NOKIA5110_SPI_INT_ON_RX_OVER         ((uint8) (0u << \
                                                                          NOKIA5110_SPI_STS_RX_FIFO_OVERRUN_SHIFT))

/* RX interrupt mask */
#define NOKIA5110_SPI_RX_INIT_INTERRUPTS_MASK    (NOKIA5110_SPI_INT_ON_RX_FULL      | \
                                                     NOKIA5110_SPI_INT_ON_RX_NOT_EMPTY | \
                                                     NOKIA5110_SPI_INT_ON_RX_OVER)
/* Nubmer of bits to receive/transmit */
#define NOKIA5110_SPI_BITCTR_INIT            (((uint8) (NOKIA5110_SPI_DATA_WIDTH << 1u)) - 1u)


/***************************************
*             Registers
***************************************/
#if(CY_PSOC3 || CY_PSOC5)
    #define NOKIA5110_SPI_TXDATA_REG (* (reg8 *) \
                                                NOKIA5110_SPI_BSPIM_sR8_Dp_u0__F0_REG)
    #define NOKIA5110_SPI_TXDATA_PTR (  (reg8 *) \
                                                NOKIA5110_SPI_BSPIM_sR8_Dp_u0__F0_REG)
    #define NOKIA5110_SPI_RXDATA_REG (* (reg8 *) \
                                                NOKIA5110_SPI_BSPIM_sR8_Dp_u0__F1_REG)
    #define NOKIA5110_SPI_RXDATA_PTR (  (reg8 *) \
                                                NOKIA5110_SPI_BSPIM_sR8_Dp_u0__F1_REG)
#else   /* PSOC4 */
    #if(NOKIA5110_SPI_USE_SECOND_DATAPATH)
        #define NOKIA5110_SPI_TXDATA_REG (* (reg16 *) \
                                          NOKIA5110_SPI_BSPIM_sR8_Dp_u0__16BIT_F0_REG)
        #define NOKIA5110_SPI_TXDATA_PTR (  (reg16 *) \
                                          NOKIA5110_SPI_BSPIM_sR8_Dp_u0__16BIT_F0_REG)
        #define NOKIA5110_SPI_RXDATA_REG (* (reg16 *) \
                                          NOKIA5110_SPI_BSPIM_sR8_Dp_u0__16BIT_F1_REG)
        #define NOKIA5110_SPI_RXDATA_PTR (  (reg16 *) \
                                          NOKIA5110_SPI_BSPIM_sR8_Dp_u0__16BIT_F1_REG)
    #else
        #define NOKIA5110_SPI_TXDATA_REG (* (reg8 *) \
                                                NOKIA5110_SPI_BSPIM_sR8_Dp_u0__F0_REG)
        #define NOKIA5110_SPI_TXDATA_PTR (  (reg8 *) \
                                                NOKIA5110_SPI_BSPIM_sR8_Dp_u0__F0_REG)
        #define NOKIA5110_SPI_RXDATA_REG (* (reg8 *) \
                                                NOKIA5110_SPI_BSPIM_sR8_Dp_u0__F1_REG)
        #define NOKIA5110_SPI_RXDATA_PTR (  (reg8 *) \
                                                NOKIA5110_SPI_BSPIM_sR8_Dp_u0__F1_REG)
    #endif /* (NOKIA5110_SPI_USE_SECOND_DATAPATH) */
#endif     /* (CY_PSOC3 || CY_PSOC5) */

#define NOKIA5110_SPI_AUX_CONTROL_DP0_REG (* (reg8 *) \
                                        NOKIA5110_SPI_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG)
#define NOKIA5110_SPI_AUX_CONTROL_DP0_PTR (  (reg8 *) \
                                        NOKIA5110_SPI_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG)

#if(NOKIA5110_SPI_USE_SECOND_DATAPATH)
    #define NOKIA5110_SPI_AUX_CONTROL_DP1_REG  (* (reg8 *) \
                                        NOKIA5110_SPI_BSPIM_sR8_Dp_u1__DP_AUX_CTL_REG)
    #define NOKIA5110_SPI_AUX_CONTROL_DP1_PTR  (  (reg8 *) \
                                        NOKIA5110_SPI_BSPIM_sR8_Dp_u1__DP_AUX_CTL_REG)
#endif /* (NOKIA5110_SPI_USE_SECOND_DATAPATH) */

#define NOKIA5110_SPI_COUNTER_PERIOD_REG     (* (reg8 *) NOKIA5110_SPI_BSPIM_BitCounter__PERIOD_REG)
#define NOKIA5110_SPI_COUNTER_PERIOD_PTR     (  (reg8 *) NOKIA5110_SPI_BSPIM_BitCounter__PERIOD_REG)
#define NOKIA5110_SPI_COUNTER_CONTROL_REG    (* (reg8 *) NOKIA5110_SPI_BSPIM_BitCounter__CONTROL_AUX_CTL_REG)
#define NOKIA5110_SPI_COUNTER_CONTROL_PTR    (  (reg8 *) NOKIA5110_SPI_BSPIM_BitCounter__CONTROL_AUX_CTL_REG)

#define NOKIA5110_SPI_TX_STATUS_REG          (* (reg8 *) NOKIA5110_SPI_BSPIM_TxStsReg__STATUS_REG)
#define NOKIA5110_SPI_TX_STATUS_PTR          (  (reg8 *) NOKIA5110_SPI_BSPIM_TxStsReg__STATUS_REG)
#define NOKIA5110_SPI_RX_STATUS_REG          (* (reg8 *) NOKIA5110_SPI_BSPIM_RxStsReg__STATUS_REG)
#define NOKIA5110_SPI_RX_STATUS_PTR          (  (reg8 *) NOKIA5110_SPI_BSPIM_RxStsReg__STATUS_REG)

#define NOKIA5110_SPI_CONTROL_REG            (* (reg8 *) \
                                      NOKIA5110_SPI_BSPIM_BidirMode_CtrlReg__CONTROL_REG)
#define NOKIA5110_SPI_CONTROL_PTR            (  (reg8 *) \
                                      NOKIA5110_SPI_BSPIM_BidirMode_CtrlReg__CONTROL_REG)

#define NOKIA5110_SPI_TX_STATUS_MASK_REG     (* (reg8 *) NOKIA5110_SPI_BSPIM_TxStsReg__MASK_REG)
#define NOKIA5110_SPI_TX_STATUS_MASK_PTR     (  (reg8 *) NOKIA5110_SPI_BSPIM_TxStsReg__MASK_REG)
#define NOKIA5110_SPI_RX_STATUS_MASK_REG     (* (reg8 *) NOKIA5110_SPI_BSPIM_RxStsReg__MASK_REG)
#define NOKIA5110_SPI_RX_STATUS_MASK_PTR     (  (reg8 *) NOKIA5110_SPI_BSPIM_RxStsReg__MASK_REG)

#define NOKIA5110_SPI_TX_STATUS_ACTL_REG     (* (reg8 *) NOKIA5110_SPI_BSPIM_TxStsReg__STATUS_AUX_CTL_REG)
#define NOKIA5110_SPI_TX_STATUS_ACTL_PTR     (  (reg8 *) NOKIA5110_SPI_BSPIM_TxStsReg__STATUS_AUX_CTL_REG)
#define NOKIA5110_SPI_RX_STATUS_ACTL_REG     (* (reg8 *) NOKIA5110_SPI_BSPIM_RxStsReg__STATUS_AUX_CTL_REG)
#define NOKIA5110_SPI_RX_STATUS_ACTL_PTR     (  (reg8 *) NOKIA5110_SPI_BSPIM_RxStsReg__STATUS_AUX_CTL_REG)

#if(NOKIA5110_SPI_USE_SECOND_DATAPATH)
    #define NOKIA5110_SPI_AUX_CONTROLDP1     (NOKIA5110_SPI_AUX_CONTROL_DP1_REG)
#endif /* (NOKIA5110_SPI_USE_SECOND_DATAPATH) */


/***************************************
*       Register Constants
***************************************/

/* Status Register Definitions */
#define NOKIA5110_SPI_STS_SPI_DONE_SHIFT             (0x00u)
#define NOKIA5110_SPI_STS_TX_FIFO_EMPTY_SHIFT        (0x01u)
#define NOKIA5110_SPI_STS_TX_FIFO_NOT_FULL_SHIFT     (0x02u)
#define NOKIA5110_SPI_STS_BYTE_COMPLETE_SHIFT        (0x03u)
#define NOKIA5110_SPI_STS_SPI_IDLE_SHIFT             (0x04u)
#define NOKIA5110_SPI_STS_RX_FIFO_FULL_SHIFT         (0x04u)
#define NOKIA5110_SPI_STS_RX_FIFO_NOT_EMPTY_SHIFT    (0x05u)
#define NOKIA5110_SPI_STS_RX_FIFO_OVERRUN_SHIFT      (0x06u)

#define NOKIA5110_SPI_STS_SPI_DONE           ((uint8) (0x01u << NOKIA5110_SPI_STS_SPI_DONE_SHIFT))
#define NOKIA5110_SPI_STS_TX_FIFO_EMPTY      ((uint8) (0x01u << NOKIA5110_SPI_STS_TX_FIFO_EMPTY_SHIFT))
#define NOKIA5110_SPI_STS_TX_FIFO_NOT_FULL   ((uint8) (0x01u << NOKIA5110_SPI_STS_TX_FIFO_NOT_FULL_SHIFT))
#define NOKIA5110_SPI_STS_BYTE_COMPLETE      ((uint8) (0x01u << NOKIA5110_SPI_STS_BYTE_COMPLETE_SHIFT))
#define NOKIA5110_SPI_STS_SPI_IDLE           ((uint8) (0x01u << NOKIA5110_SPI_STS_SPI_IDLE_SHIFT))
#define NOKIA5110_SPI_STS_RX_FIFO_FULL       ((uint8) (0x01u << NOKIA5110_SPI_STS_RX_FIFO_FULL_SHIFT))
#define NOKIA5110_SPI_STS_RX_FIFO_NOT_EMPTY  ((uint8) (0x01u << NOKIA5110_SPI_STS_RX_FIFO_NOT_EMPTY_SHIFT))
#define NOKIA5110_SPI_STS_RX_FIFO_OVERRUN    ((uint8) (0x01u << NOKIA5110_SPI_STS_RX_FIFO_OVERRUN_SHIFT))

/* TX and RX masks for clear on read bits */
#define NOKIA5110_SPI_TX_STS_CLR_ON_RD_BYTES_MASK    (0x09u)
#define NOKIA5110_SPI_RX_STS_CLR_ON_RD_BYTES_MASK    (0x40u)

/* StatusI Register Interrupt Enable Control Bits */
/* As defined by the Register map for the AUX Control Register */
#define NOKIA5110_SPI_INT_ENABLE     (0x10u) /* Enable interrupt from statusi */
#define NOKIA5110_SPI_TX_FIFO_CLR    (0x01u) /* F0 - TX FIFO */
#define NOKIA5110_SPI_RX_FIFO_CLR    (0x02u) /* F1 - RX FIFO */
#define NOKIA5110_SPI_FIFO_CLR       (NOKIA5110_SPI_TX_FIFO_CLR | NOKIA5110_SPI_RX_FIFO_CLR)

/* Bit Counter (7-bit) Control Register Bit Definitions */
/* As defined by the Register map for the AUX Control Register */
#define NOKIA5110_SPI_CNTR_ENABLE    (0x20u) /* Enable CNT7 */

/* Bi-Directional mode control bit */
#define NOKIA5110_SPI_CTRL_TX_SIGNAL_EN  (0x01u)

/* Datapath Auxillary Control Register definitions */
#define NOKIA5110_SPI_AUX_CTRL_FIFO0_CLR         (0x01u)
#define NOKIA5110_SPI_AUX_CTRL_FIFO1_CLR         (0x02u)
#define NOKIA5110_SPI_AUX_CTRL_FIFO0_LVL         (0x04u)
#define NOKIA5110_SPI_AUX_CTRL_FIFO1_LVL         (0x08u)
#define NOKIA5110_SPI_STATUS_ACTL_INT_EN_MASK    (0x10u)

/* Component disabled */
#define NOKIA5110_SPI_DISABLED   (0u)


/***************************************
*       Macros
***************************************/

/* Returns true if componentn enabled */
#define NOKIA5110_SPI_IS_ENABLED (0u != (NOKIA5110_SPI_TX_STATUS_ACTL_REG & NOKIA5110_SPI_INT_ENABLE))

/* Retuns TX status register */
#define NOKIA5110_SPI_GET_STATUS_TX(swTxSts) ( (uint8)(NOKIA5110_SPI_TX_STATUS_REG | \
                                                          ((swTxSts) & NOKIA5110_SPI_TX_STS_CLR_ON_RD_BYTES_MASK)) )
/* Retuns RX status register */
#define NOKIA5110_SPI_GET_STATUS_RX(swRxSts) ( (uint8)(NOKIA5110_SPI_RX_STATUS_REG | \
                                                          ((swRxSts) & NOKIA5110_SPI_RX_STS_CLR_ON_RD_BYTES_MASK)) )


/***************************************
* The following code is DEPRECATED and 
* should not be used in new projects.
***************************************/

#define NOKIA5110_SPI_WriteByte   NOKIA5110_SPI_WriteTxData
#define NOKIA5110_SPI_ReadByte    NOKIA5110_SPI_ReadRxData
void  NOKIA5110_SPI_SetInterruptMode(uint8 intSrc)       ;
uint8 NOKIA5110_SPI_ReadStatus(void)                     ;
void  NOKIA5110_SPI_EnableInt(void)                      ;
void  NOKIA5110_SPI_DisableInt(void)                     ;

#define NOKIA5110_SPI_TXDATA                 (NOKIA5110_SPI_TXDATA_REG)
#define NOKIA5110_SPI_RXDATA                 (NOKIA5110_SPI_RXDATA_REG)
#define NOKIA5110_SPI_AUX_CONTROLDP0         (NOKIA5110_SPI_AUX_CONTROL_DP0_REG)
#define NOKIA5110_SPI_TXBUFFERREAD           (NOKIA5110_SPI_txBufferRead)
#define NOKIA5110_SPI_TXBUFFERWRITE          (NOKIA5110_SPI_txBufferWrite)
#define NOKIA5110_SPI_RXBUFFERREAD           (NOKIA5110_SPI_rxBufferRead)
#define NOKIA5110_SPI_RXBUFFERWRITE          (NOKIA5110_SPI_rxBufferWrite)

#define NOKIA5110_SPI_COUNTER_PERIOD         (NOKIA5110_SPI_COUNTER_PERIOD_REG)
#define NOKIA5110_SPI_COUNTER_CONTROL        (NOKIA5110_SPI_COUNTER_CONTROL_REG)
#define NOKIA5110_SPI_STATUS                 (NOKIA5110_SPI_TX_STATUS_REG)
#define NOKIA5110_SPI_CONTROL                (NOKIA5110_SPI_CONTROL_REG)
#define NOKIA5110_SPI_STATUS_MASK            (NOKIA5110_SPI_TX_STATUS_MASK_REG)
#define NOKIA5110_SPI_STATUS_ACTL            (NOKIA5110_SPI_TX_STATUS_ACTL_REG)

#define NOKIA5110_SPI_INIT_INTERRUPTS_MASK  (NOKIA5110_SPI_INT_ON_SPI_DONE     | \
                                                NOKIA5110_SPI_INT_ON_TX_EMPTY     | \
                                                NOKIA5110_SPI_INT_ON_TX_NOT_FULL_DEF  | \
                                                NOKIA5110_SPI_INT_ON_RX_FULL      | \
                                                NOKIA5110_SPI_INT_ON_RX_NOT_EMPTY | \
                                                NOKIA5110_SPI_INT_ON_RX_OVER      | \
                                                NOKIA5110_SPI_INT_ON_BYTE_COMP)
                                                
#define NOKIA5110_SPI_DataWidth                  (NOKIA5110_SPI_DATA_WIDTH)
#define NOKIA5110_SPI_InternalClockUsed          (NOKIA5110_SPI_INTERNAL_CLOCK)
#define NOKIA5110_SPI_InternalTxInterruptEnabled (NOKIA5110_SPI_INTERNAL_TX_INT_ENABLED)
#define NOKIA5110_SPI_InternalRxInterruptEnabled (NOKIA5110_SPI_INTERNAL_RX_INT_ENABLED)
#define NOKIA5110_SPI_ModeUseZero                (NOKIA5110_SPI_MODE_USE_ZERO)
#define NOKIA5110_SPI_BidirectionalMode          (NOKIA5110_SPI_BIDIRECTIONAL_MODE)
#define NOKIA5110_SPI_Mode                       (NOKIA5110_SPI_MODE)
#define NOKIA5110_SPI_DATAWIDHT                  (NOKIA5110_SPI_DATA_WIDTH)
#define NOKIA5110_SPI_InternalInterruptEnabled   (0u)

#define NOKIA5110_SPI_TXBUFFERSIZE   (NOKIA5110_SPI_TX_BUFFER_SIZE)
#define NOKIA5110_SPI_RXBUFFERSIZE   (NOKIA5110_SPI_RX_BUFFER_SIZE)

#define NOKIA5110_SPI_TXBUFFER       NOKIA5110_SPI_txBuffer
#define NOKIA5110_SPI_RXBUFFER       NOKIA5110_SPI_rxBuffer

#endif /* (CY_SPIM_NOKIA5110_SPI_H) */


/* [] END OF FILE */
