/*******************************************************************************
* File Name: NOKIA5110_SPI_INT.c
* Version 2.50
*
* Description:
*  This file provides all Interrupt Service Routine (ISR) for the SPI Master
*  component.
*
* Note:
*  None.
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "NOKIA5110_SPI_PVT.h"
#include "cyapicallbacks.h"

/* User code required at start of ISR */
/* `#START NOKIA5110_SPI_ISR_START_DEF` */

/* `#END` */


/*******************************************************************************
* Function Name: NOKIA5110_SPI_TX_ISR
********************************************************************************
*
* Summary:
*  Interrupt Service Routine for TX portion of the SPI Master.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global variables:
*  NOKIA5110_SPI_txBufferWrite - used for the account of the bytes which
*  have been written down in the TX software buffer.
*  NOKIA5110_SPI_txBufferRead - used for the account of the bytes which
*  have been read from the TX software buffer, modified when exist data to
*  sending and FIFO Not Full.
*  NOKIA5110_SPI_txBuffer[NOKIA5110_SPI_TX_BUFFER_SIZE] - used to store
*  data to sending.
*  All described above Global variables are used when Software Buffer is used.
*
*******************************************************************************/
CY_ISR(NOKIA5110_SPI_TX_ISR)
{
    #if(NOKIA5110_SPI_TX_SOFTWARE_BUF_ENABLED)
        uint8 tmpStatus;
    #endif /* (NOKIA5110_SPI_TX_SOFTWARE_BUF_ENABLED) */

    #ifdef NOKIA5110_SPI_TX_ISR_ENTRY_CALLBACK
        NOKIA5110_SPI_TX_ISR_EntryCallback();
    #endif /* NOKIA5110_SPI_TX_ISR_ENTRY_CALLBACK */

    /* User code required at start of ISR */
    /* `#START NOKIA5110_SPI_TX_ISR_START` */

    /* `#END` */
    
    #if(NOKIA5110_SPI_TX_SOFTWARE_BUF_ENABLED)
        /* Check if TX data buffer is not empty and there is space in TX FIFO */
        while(NOKIA5110_SPI_txBufferRead != NOKIA5110_SPI_txBufferWrite)
        {
            tmpStatus = NOKIA5110_SPI_GET_STATUS_TX(NOKIA5110_SPI_swStatusTx);
            NOKIA5110_SPI_swStatusTx = tmpStatus;

            if(0u != (NOKIA5110_SPI_swStatusTx & NOKIA5110_SPI_STS_TX_FIFO_NOT_FULL))
            {
                if(0u == NOKIA5110_SPI_txBufferFull)
                {
                   NOKIA5110_SPI_txBufferRead++;

                    if(NOKIA5110_SPI_txBufferRead >= NOKIA5110_SPI_TX_BUFFER_SIZE)
                    {
                        NOKIA5110_SPI_txBufferRead = 0u;
                    }
                }
                else
                {
                    NOKIA5110_SPI_txBufferFull = 0u;
                }

                /* Put data element into the TX FIFO */
                CY_SET_REG8(NOKIA5110_SPI_TXDATA_PTR, 
                                             NOKIA5110_SPI_txBuffer[NOKIA5110_SPI_txBufferRead]);
            }
            else
            {
                break;
            }
        }

        if(NOKIA5110_SPI_txBufferRead == NOKIA5110_SPI_txBufferWrite)
        {
            /* TX Buffer is EMPTY: disable interrupt on TX NOT FULL */
            NOKIA5110_SPI_TX_STATUS_MASK_REG &= ((uint8) ~NOKIA5110_SPI_STS_TX_FIFO_NOT_FULL);
        }

    #endif /* (NOKIA5110_SPI_TX_SOFTWARE_BUF_ENABLED) */

    /* User code required at end of ISR (Optional) */
    /* `#START NOKIA5110_SPI_TX_ISR_END` */

    /* `#END` */
    
    #ifdef NOKIA5110_SPI_TX_ISR_EXIT_CALLBACK
        NOKIA5110_SPI_TX_ISR_ExitCallback();
    #endif /* NOKIA5110_SPI_TX_ISR_EXIT_CALLBACK */
}


/*******************************************************************************
* Function Name: NOKIA5110_SPI_RX_ISR
********************************************************************************
*
* Summary:
*  Interrupt Service Routine for RX portion of the SPI Master.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global variables:
*  NOKIA5110_SPI_rxBufferWrite - used for the account of the bytes which
*  have been written down in the RX software buffer modified when FIFO contains
*  new data.
*  NOKIA5110_SPI_rxBufferRead - used for the account of the bytes which
*  have been read from the RX software buffer, modified when overflow occurred.
*  NOKIA5110_SPI_rxBuffer[NOKIA5110_SPI_RX_BUFFER_SIZE] - used to store
*  received data, modified when FIFO contains new data.
*  All described above Global variables are used when Software Buffer is used.
*
*******************************************************************************/
CY_ISR(NOKIA5110_SPI_RX_ISR)
{
    #if(NOKIA5110_SPI_RX_SOFTWARE_BUF_ENABLED)
        uint8 tmpStatus;
        uint8 rxData;
    #endif /* (NOKIA5110_SPI_RX_SOFTWARE_BUF_ENABLED) */

    #ifdef NOKIA5110_SPI_RX_ISR_ENTRY_CALLBACK
        NOKIA5110_SPI_RX_ISR_EntryCallback();
    #endif /* NOKIA5110_SPI_RX_ISR_ENTRY_CALLBACK */

    /* User code required at start of ISR */
    /* `#START NOKIA5110_SPI_RX_ISR_START` */

    /* `#END` */
    
    #if(NOKIA5110_SPI_RX_SOFTWARE_BUF_ENABLED)

        tmpStatus = NOKIA5110_SPI_GET_STATUS_RX(NOKIA5110_SPI_swStatusRx);
        NOKIA5110_SPI_swStatusRx = tmpStatus;

        /* Check if RX data FIFO has some data to be moved into the RX Buffer */
        while(0u != (NOKIA5110_SPI_swStatusRx & NOKIA5110_SPI_STS_RX_FIFO_NOT_EMPTY))
        {
            rxData = CY_GET_REG8(NOKIA5110_SPI_RXDATA_PTR);

            /* Set next pointer. */
            NOKIA5110_SPI_rxBufferWrite++;
            if(NOKIA5110_SPI_rxBufferWrite >= NOKIA5110_SPI_RX_BUFFER_SIZE)
            {
                NOKIA5110_SPI_rxBufferWrite = 0u;
            }

            if(NOKIA5110_SPI_rxBufferWrite == NOKIA5110_SPI_rxBufferRead)
            {
                NOKIA5110_SPI_rxBufferRead++;
                if(NOKIA5110_SPI_rxBufferRead >= NOKIA5110_SPI_RX_BUFFER_SIZE)
                {
                    NOKIA5110_SPI_rxBufferRead = 0u;
                }

                NOKIA5110_SPI_rxBufferFull = 1u;
            }

            /* Move data from the FIFO to the Buffer */
            NOKIA5110_SPI_rxBuffer[NOKIA5110_SPI_rxBufferWrite] = rxData;

            tmpStatus = NOKIA5110_SPI_GET_STATUS_RX(NOKIA5110_SPI_swStatusRx);
            NOKIA5110_SPI_swStatusRx = tmpStatus;
        }

    #endif /* (NOKIA5110_SPI_RX_SOFTWARE_BUF_ENABLED) */

    /* User code required at end of ISR (Optional) */
    /* `#START NOKIA5110_SPI_RX_ISR_END` */

    /* `#END` */
    
    #ifdef NOKIA5110_SPI_RX_ISR_EXIT_CALLBACK
        NOKIA5110_SPI_RX_ISR_ExitCallback();
    #endif /* NOKIA5110_SPI_RX_ISR_EXIT_CALLBACK */
}

/* [] END OF FILE */
