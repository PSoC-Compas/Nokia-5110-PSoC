/*******************************************************************************
* File Name: .h
* Version 2.50
*
* Description:
*  This private header file contains internal definitions for the SPIM
*  component. Do not use these definitions directly in your application.
*
* Note:
*
********************************************************************************
* Copyright 2012-2015, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_SPIM_PVT_NOKIA5110_SPI_H)
#define CY_SPIM_PVT_NOKIA5110_SPI_H

#include "NOKIA5110_SPI.h"


/**********************************
*   Functions with external linkage
**********************************/


/**********************************
*   Variables with external linkage
**********************************/

extern volatile uint8 NOKIA5110_SPI_swStatusTx;
extern volatile uint8 NOKIA5110_SPI_swStatusRx;

#if(NOKIA5110_SPI_TX_SOFTWARE_BUF_ENABLED)
    extern volatile uint8 NOKIA5110_SPI_txBuffer[NOKIA5110_SPI_TX_BUFFER_SIZE];
    extern volatile uint8 NOKIA5110_SPI_txBufferRead;
    extern volatile uint8 NOKIA5110_SPI_txBufferWrite;
    extern volatile uint8 NOKIA5110_SPI_txBufferFull;
#endif /* (NOKIA5110_SPI_TX_SOFTWARE_BUF_ENABLED) */

#if(NOKIA5110_SPI_RX_SOFTWARE_BUF_ENABLED)
    extern volatile uint8 NOKIA5110_SPI_rxBuffer[NOKIA5110_SPI_RX_BUFFER_SIZE];
    extern volatile uint8 NOKIA5110_SPI_rxBufferRead;
    extern volatile uint8 NOKIA5110_SPI_rxBufferWrite;
    extern volatile uint8 NOKIA5110_SPI_rxBufferFull;
#endif /* (NOKIA5110_SPI_RX_SOFTWARE_BUF_ENABLED) */

#endif /* CY_SPIM_PVT_NOKIA5110_SPI_H */


/* [] END OF FILE */
