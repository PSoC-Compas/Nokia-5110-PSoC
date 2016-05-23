#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* CE */
#define CE__0__INTTYPE CYREG_PICU12_INTTYPE1
#define CE__0__MASK 0x02u
#define CE__0__PC CYREG_PRT12_PC1
#define CE__0__PORT 12u
#define CE__0__SHIFT 1u
#define CE__AG CYREG_PRT12_AG
#define CE__BIE CYREG_PRT12_BIE
#define CE__BIT_MASK CYREG_PRT12_BIT_MASK
#define CE__BYP CYREG_PRT12_BYP
#define CE__DM0 CYREG_PRT12_DM0
#define CE__DM1 CYREG_PRT12_DM1
#define CE__DM2 CYREG_PRT12_DM2
#define CE__DR CYREG_PRT12_DR
#define CE__INP_DIS CYREG_PRT12_INP_DIS
#define CE__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define CE__MASK 0x02u
#define CE__PORT 12u
#define CE__PRT CYREG_PRT12_PRT
#define CE__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define CE__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define CE__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define CE__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define CE__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define CE__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define CE__PS CYREG_PRT12_PS
#define CE__SHIFT 1u
#define CE__SIO_CFG CYREG_PRT12_SIO_CFG
#define CE__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define CE__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define CE__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define CE__SLW CYREG_PRT12_SLW

/* DC */
#define DC__0__INTTYPE CYREG_PICU15_INTTYPE2
#define DC__0__MASK 0x04u
#define DC__0__PC CYREG_IO_PC_PRT15_PC2
#define DC__0__PORT 15u
#define DC__0__SHIFT 2u
#define DC__AG CYREG_PRT15_AG
#define DC__AMUX CYREG_PRT15_AMUX
#define DC__BIE CYREG_PRT15_BIE
#define DC__BIT_MASK CYREG_PRT15_BIT_MASK
#define DC__BYP CYREG_PRT15_BYP
#define DC__CTL CYREG_PRT15_CTL
#define DC__DM0 CYREG_PRT15_DM0
#define DC__DM1 CYREG_PRT15_DM1
#define DC__DM2 CYREG_PRT15_DM2
#define DC__DR CYREG_PRT15_DR
#define DC__INP_DIS CYREG_PRT15_INP_DIS
#define DC__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define DC__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define DC__LCD_EN CYREG_PRT15_LCD_EN
#define DC__MASK 0x04u
#define DC__PORT 15u
#define DC__PRT CYREG_PRT15_PRT
#define DC__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define DC__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define DC__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define DC__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define DC__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define DC__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define DC__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define DC__PS CYREG_PRT15_PS
#define DC__SHIFT 2u
#define DC__SLW CYREG_PRT15_SLW

/* DN */
#define DN__0__INTTYPE CYREG_PICU15_INTTYPE1
#define DN__0__MASK 0x02u
#define DN__0__PC CYREG_IO_PC_PRT15_PC1
#define DN__0__PORT 15u
#define DN__0__SHIFT 1u
#define DN__AG CYREG_PRT15_AG
#define DN__AMUX CYREG_PRT15_AMUX
#define DN__BIE CYREG_PRT15_BIE
#define DN__BIT_MASK CYREG_PRT15_BIT_MASK
#define DN__BYP CYREG_PRT15_BYP
#define DN__CTL CYREG_PRT15_CTL
#define DN__DM0 CYREG_PRT15_DM0
#define DN__DM1 CYREG_PRT15_DM1
#define DN__DM2 CYREG_PRT15_DM2
#define DN__DR CYREG_PRT15_DR
#define DN__INP_DIS CYREG_PRT15_INP_DIS
#define DN__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define DN__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define DN__LCD_EN CYREG_PRT15_LCD_EN
#define DN__MASK 0x02u
#define DN__PORT 15u
#define DN__PRT CYREG_PRT15_PRT
#define DN__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define DN__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define DN__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define DN__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define DN__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define DN__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define DN__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define DN__PS CYREG_PRT15_PS
#define DN__SHIFT 1u
#define DN__SLW CYREG_PRT15_SLW

/* RST */
#define RST__0__INTTYPE CYREG_PICU12_INTTYPE6
#define RST__0__MASK 0x40u
#define RST__0__PC CYREG_PRT12_PC6
#define RST__0__PORT 12u
#define RST__0__SHIFT 6u
#define RST__AG CYREG_PRT12_AG
#define RST__BIE CYREG_PRT12_BIE
#define RST__BIT_MASK CYREG_PRT12_BIT_MASK
#define RST__BYP CYREG_PRT12_BYP
#define RST__DM0 CYREG_PRT12_DM0
#define RST__DM1 CYREG_PRT12_DM1
#define RST__DM2 CYREG_PRT12_DM2
#define RST__DR CYREG_PRT12_DR
#define RST__INP_DIS CYREG_PRT12_INP_DIS
#define RST__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define RST__MASK 0x40u
#define RST__PORT 12u
#define RST__PRT CYREG_PRT12_PRT
#define RST__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define RST__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define RST__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define RST__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define RST__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define RST__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define RST__PS CYREG_PRT12_PS
#define RST__SHIFT 6u
#define RST__SIO_CFG CYREG_PRT12_SIO_CFG
#define RST__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define RST__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define RST__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define RST__SLW CYREG_PRT12_SLW

/* clk */
#define clk__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define clk__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define clk__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define clk__CFG2_SRC_SEL_MASK 0x07u
#define clk__INDEX 0x00u
#define clk__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define clk__PM_ACT_MSK 0x01u
#define clk__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define clk__PM_STBY_MSK 0x01u

/* SCLK */
#define SCLK__0__INTTYPE CYREG_PICU12_INTTYPE0
#define SCLK__0__MASK 0x01u
#define SCLK__0__PC CYREG_PRT12_PC0
#define SCLK__0__PORT 12u
#define SCLK__0__SHIFT 0u
#define SCLK__AG CYREG_PRT12_AG
#define SCLK__BIE CYREG_PRT12_BIE
#define SCLK__BIT_MASK CYREG_PRT12_BIT_MASK
#define SCLK__BYP CYREG_PRT12_BYP
#define SCLK__DM0 CYREG_PRT12_DM0
#define SCLK__DM1 CYREG_PRT12_DM1
#define SCLK__DM2 CYREG_PRT12_DM2
#define SCLK__DR CYREG_PRT12_DR
#define SCLK__INP_DIS CYREG_PRT12_INP_DIS
#define SCLK__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define SCLK__MASK 0x01u
#define SCLK__PORT 12u
#define SCLK__PRT CYREG_PRT12_PRT
#define SCLK__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define SCLK__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define SCLK__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define SCLK__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define SCLK__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define SCLK__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define SCLK__PS CYREG_PRT12_PS
#define SCLK__SHIFT 0u
#define SCLK__SIO_CFG CYREG_PRT12_SIO_CFG
#define SCLK__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define SCLK__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define SCLK__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define SCLK__SLW CYREG_PRT12_SLW

/* Pin_2 */
#define Pin_2__0__INTTYPE CYREG_PICU1_INTTYPE5
#define Pin_2__0__MASK 0x20u
#define Pin_2__0__PC CYREG_PRT1_PC5
#define Pin_2__0__PORT 1u
#define Pin_2__0__SHIFT 5u
#define Pin_2__AG CYREG_PRT1_AG
#define Pin_2__AMUX CYREG_PRT1_AMUX
#define Pin_2__BIE CYREG_PRT1_BIE
#define Pin_2__BIT_MASK CYREG_PRT1_BIT_MASK
#define Pin_2__BYP CYREG_PRT1_BYP
#define Pin_2__CTL CYREG_PRT1_CTL
#define Pin_2__DM0 CYREG_PRT1_DM0
#define Pin_2__DM1 CYREG_PRT1_DM1
#define Pin_2__DM2 CYREG_PRT1_DM2
#define Pin_2__DR CYREG_PRT1_DR
#define Pin_2__INP_DIS CYREG_PRT1_INP_DIS
#define Pin_2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define Pin_2__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define Pin_2__LCD_EN CYREG_PRT1_LCD_EN
#define Pin_2__MASK 0x20u
#define Pin_2__PORT 1u
#define Pin_2__PRT CYREG_PRT1_PRT
#define Pin_2__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define Pin_2__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define Pin_2__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define Pin_2__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define Pin_2__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define Pin_2__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define Pin_2__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define Pin_2__PS CYREG_PRT1_PS
#define Pin_2__SHIFT 5u
#define Pin_2__SLW CYREG_PRT1_SLW

/* NOKIA5110_Control */
#define NOKIA5110_Control_Sync_ctrl_reg__0__MASK 0x01u
#define NOKIA5110_Control_Sync_ctrl_reg__0__POS 0
#define NOKIA5110_Control_Sync_ctrl_reg__1__MASK 0x02u
#define NOKIA5110_Control_Sync_ctrl_reg__1__POS 1
#define NOKIA5110_Control_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define NOKIA5110_Control_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB07_08_CTL
#define NOKIA5110_Control_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB07_08_CTL
#define NOKIA5110_Control_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB07_08_CTL
#define NOKIA5110_Control_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_B1_UDB07_08_CTL
#define NOKIA5110_Control_Sync_ctrl_reg__16BIT_MASK_MASK_REG CYREG_B1_UDB07_08_MSK
#define NOKIA5110_Control_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_B1_UDB07_08_MSK
#define NOKIA5110_Control_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_B1_UDB07_08_MSK
#define NOKIA5110_Control_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB07_08_MSK
#define NOKIA5110_Control_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define NOKIA5110_Control_Sync_ctrl_reg__CONTROL_REG CYREG_B1_UDB07_CTL
#define NOKIA5110_Control_Sync_ctrl_reg__CONTROL_ST_REG CYREG_B1_UDB07_ST_CTL
#define NOKIA5110_Control_Sync_ctrl_reg__COUNT_REG CYREG_B1_UDB07_CTL
#define NOKIA5110_Control_Sync_ctrl_reg__COUNT_ST_REG CYREG_B1_UDB07_ST_CTL
#define NOKIA5110_Control_Sync_ctrl_reg__MASK 0x03u
#define NOKIA5110_Control_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB07_MSK_ACTL
#define NOKIA5110_Control_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_B1_UDB07_MSK_ACTL
#define NOKIA5110_Control_Sync_ctrl_reg__PERIOD_REG CYREG_B1_UDB07_MSK

/* NOKIA5110_SPI_BSPIM */
#define NOKIA5110_SPI_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB04_05_ACTL
#define NOKIA5110_SPI_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB04_05_CTL
#define NOKIA5110_SPI_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB04_05_CTL
#define NOKIA5110_SPI_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB04_05_CTL
#define NOKIA5110_SPI_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG CYREG_B1_UDB04_05_CTL
#define NOKIA5110_SPI_BSPIM_BitCounter__16BIT_MASK_MASK_REG CYREG_B1_UDB04_05_MSK
#define NOKIA5110_SPI_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG CYREG_B1_UDB04_05_MSK
#define NOKIA5110_SPI_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG CYREG_B1_UDB04_05_MSK
#define NOKIA5110_SPI_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB04_05_MSK
#define NOKIA5110_SPI_BSPIM_BitCounter__CONTROL_AUX_CTL_REG CYREG_B1_UDB04_ACTL
#define NOKIA5110_SPI_BSPIM_BitCounter__CONTROL_REG CYREG_B1_UDB04_CTL
#define NOKIA5110_SPI_BSPIM_BitCounter__CONTROL_ST_REG CYREG_B1_UDB04_ST_CTL
#define NOKIA5110_SPI_BSPIM_BitCounter__COUNT_REG CYREG_B1_UDB04_CTL
#define NOKIA5110_SPI_BSPIM_BitCounter__COUNT_ST_REG CYREG_B1_UDB04_ST_CTL
#define NOKIA5110_SPI_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define NOKIA5110_SPI_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define NOKIA5110_SPI_BSPIM_BitCounter__PERIOD_REG CYREG_B1_UDB04_MSK
#define NOKIA5110_SPI_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB04_05_ACTL
#define NOKIA5110_SPI_BSPIM_BitCounter_ST__16BIT_STATUS_REG CYREG_B1_UDB04_05_ST
#define NOKIA5110_SPI_BSPIM_BitCounter_ST__MASK_REG CYREG_B1_UDB04_MSK
#define NOKIA5110_SPI_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define NOKIA5110_SPI_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define NOKIA5110_SPI_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG CYREG_B1_UDB04_ACTL
#define NOKIA5110_SPI_BSPIM_BitCounter_ST__STATUS_CNT_REG CYREG_B1_UDB04_ST_CTL
#define NOKIA5110_SPI_BSPIM_BitCounter_ST__STATUS_CONTROL_REG CYREG_B1_UDB04_ST_CTL
#define NOKIA5110_SPI_BSPIM_BitCounter_ST__STATUS_REG CYREG_B1_UDB04_ST
#define NOKIA5110_SPI_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define NOKIA5110_SPI_BSPIM_RxStsReg__16BIT_STATUS_REG CYREG_B1_UDB07_08_ST
#define NOKIA5110_SPI_BSPIM_RxStsReg__4__MASK 0x10u
#define NOKIA5110_SPI_BSPIM_RxStsReg__4__POS 4
#define NOKIA5110_SPI_BSPIM_RxStsReg__5__MASK 0x20u
#define NOKIA5110_SPI_BSPIM_RxStsReg__5__POS 5
#define NOKIA5110_SPI_BSPIM_RxStsReg__6__MASK 0x40u
#define NOKIA5110_SPI_BSPIM_RxStsReg__6__POS 6
#define NOKIA5110_SPI_BSPIM_RxStsReg__MASK 0x70u
#define NOKIA5110_SPI_BSPIM_RxStsReg__MASK_REG CYREG_B1_UDB07_MSK
#define NOKIA5110_SPI_BSPIM_RxStsReg__MASK_ST_AUX_CTL_REG CYREG_B1_UDB07_MSK_ACTL
#define NOKIA5110_SPI_BSPIM_RxStsReg__PER_ST_AUX_CTL_REG CYREG_B1_UDB07_MSK_ACTL
#define NOKIA5110_SPI_BSPIM_RxStsReg__STATUS_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define NOKIA5110_SPI_BSPIM_RxStsReg__STATUS_CNT_REG CYREG_B1_UDB07_ST_CTL
#define NOKIA5110_SPI_BSPIM_RxStsReg__STATUS_CONTROL_REG CYREG_B1_UDB07_ST_CTL
#define NOKIA5110_SPI_BSPIM_RxStsReg__STATUS_REG CYREG_B1_UDB07_ST
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__16BIT_A0_REG CYREG_B1_UDB04_05_A0
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__16BIT_A1_REG CYREG_B1_UDB04_05_A1
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__16BIT_D0_REG CYREG_B1_UDB04_05_D0
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__16BIT_D1_REG CYREG_B1_UDB04_05_D1
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB04_05_ACTL
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__16BIT_F0_REG CYREG_B1_UDB04_05_F0
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__16BIT_F1_REG CYREG_B1_UDB04_05_F1
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__A0_A1_REG CYREG_B1_UDB04_A0_A1
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__A0_REG CYREG_B1_UDB04_A0
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__A1_REG CYREG_B1_UDB04_A1
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__D0_D1_REG CYREG_B1_UDB04_D0_D1
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__D0_REG CYREG_B1_UDB04_D0
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__D1_REG CYREG_B1_UDB04_D1
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG CYREG_B1_UDB04_ACTL
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__F0_F1_REG CYREG_B1_UDB04_F0_F1
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__F0_REG CYREG_B1_UDB04_F0
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__F1_REG CYREG_B1_UDB04_F1
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__MSK_DP_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define NOKIA5110_SPI_BSPIM_sR8_Dp_u0__PER_DP_AUX_CTL_REG CYREG_B1_UDB04_MSK_ACTL
#define NOKIA5110_SPI_BSPIM_TxStsReg__0__MASK 0x01u
#define NOKIA5110_SPI_BSPIM_TxStsReg__0__POS 0
#define NOKIA5110_SPI_BSPIM_TxStsReg__1__MASK 0x02u
#define NOKIA5110_SPI_BSPIM_TxStsReg__1__POS 1
#define NOKIA5110_SPI_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB06_07_ACTL
#define NOKIA5110_SPI_BSPIM_TxStsReg__16BIT_STATUS_REG CYREG_B1_UDB06_07_ST
#define NOKIA5110_SPI_BSPIM_TxStsReg__2__MASK 0x04u
#define NOKIA5110_SPI_BSPIM_TxStsReg__2__POS 2
#define NOKIA5110_SPI_BSPIM_TxStsReg__3__MASK 0x08u
#define NOKIA5110_SPI_BSPIM_TxStsReg__3__POS 3
#define NOKIA5110_SPI_BSPIM_TxStsReg__4__MASK 0x10u
#define NOKIA5110_SPI_BSPIM_TxStsReg__4__POS 4
#define NOKIA5110_SPI_BSPIM_TxStsReg__MASK 0x1Fu
#define NOKIA5110_SPI_BSPIM_TxStsReg__MASK_REG CYREG_B1_UDB06_MSK
#define NOKIA5110_SPI_BSPIM_TxStsReg__STATUS_AUX_CTL_REG CYREG_B1_UDB06_ACTL
#define NOKIA5110_SPI_BSPIM_TxStsReg__STATUS_REG CYREG_B1_UDB06_ST

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "testComponente"
#define CY_VERSION "PSoC Creator  3.3 SP2.3"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 19u
#define CYDEV_CHIP_DIE_PSOC4A 11u
#define CYDEV_CHIP_DIE_PSOC5LP 18u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 11u
#define CYDEV_CHIP_MEMBER_4C 16u
#define CYDEV_CHIP_MEMBER_4D 7u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 12u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 10u
#define CYDEV_CHIP_MEMBER_4I 15u
#define CYDEV_CHIP_MEMBER_4J 8u
#define CYDEV_CHIP_MEMBER_4K 9u
#define CYDEV_CHIP_MEMBER_4L 14u
#define CYDEV_CHIP_MEMBER_4M 13u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 18u
#define CYDEV_CHIP_MEMBER_5B 17u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
