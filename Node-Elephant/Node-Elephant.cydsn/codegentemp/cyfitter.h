#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice.h>
#include <cydevice_trm.h>

/* CAN_CanIP */
#define CAN_CanIP__CSR_BUF_SR CYREG_CAN0_CSR_BUF_SR
#define CAN_CanIP__CSR_CFG CYREG_CAN0_CSR_CFG
#define CAN_CanIP__CSR_CMD CYREG_CAN0_CSR_CMD
#define CAN_CanIP__CSR_ERR_SR CYREG_CAN0_CSR_ERR_SR
#define CAN_CanIP__CSR_INT_EN CYREG_CAN0_CSR_INT_EN
#define CAN_CanIP__CSR_INT_SR CYREG_CAN0_CSR_INT_SR
#define CAN_CanIP__PM_ACT_CFG CYREG_PM_ACT_CFG6
#define CAN_CanIP__PM_ACT_MSK 0x01u
#define CAN_CanIP__PM_STBY_CFG CYREG_PM_STBY_CFG6
#define CAN_CanIP__PM_STBY_MSK 0x01u
#define CAN_CanIP__RX0_ACR CYREG_CAN0_RX0_ACR
#define CAN_CanIP__RX0_ACRD CYREG_CAN0_RX0_ACRD
#define CAN_CanIP__RX0_AMR CYREG_CAN0_RX0_AMR
#define CAN_CanIP__RX0_AMRD CYREG_CAN0_RX0_AMRD
#define CAN_CanIP__RX0_CMD CYREG_CAN0_RX0_CMD
#define CAN_CanIP__RX0_DH CYREG_CAN0_RX0_DH
#define CAN_CanIP__RX0_DL CYREG_CAN0_RX0_DL
#define CAN_CanIP__RX0_ID CYREG_CAN0_RX0_ID
#define CAN_CanIP__RX1_ACR CYREG_CAN0_RX1_ACR
#define CAN_CanIP__RX1_ACRD CYREG_CAN0_RX1_ACRD
#define CAN_CanIP__RX1_AMR CYREG_CAN0_RX1_AMR
#define CAN_CanIP__RX1_AMRD CYREG_CAN0_RX1_AMRD
#define CAN_CanIP__RX1_CMD CYREG_CAN0_RX1_CMD
#define CAN_CanIP__RX1_DH CYREG_CAN0_RX1_DH
#define CAN_CanIP__RX1_DL CYREG_CAN0_RX1_DL
#define CAN_CanIP__RX1_ID CYREG_CAN0_RX1_ID
#define CAN_CanIP__RX10_ACR CYREG_CAN0_RX10_ACR
#define CAN_CanIP__RX10_ACRD CYREG_CAN0_RX10_ACRD
#define CAN_CanIP__RX10_AMR CYREG_CAN0_RX10_AMR
#define CAN_CanIP__RX10_AMRD CYREG_CAN0_RX10_AMRD
#define CAN_CanIP__RX10_CMD CYREG_CAN0_RX10_CMD
#define CAN_CanIP__RX10_DH CYREG_CAN0_RX10_DH
#define CAN_CanIP__RX10_DL CYREG_CAN0_RX10_DL
#define CAN_CanIP__RX10_ID CYREG_CAN0_RX10_ID
#define CAN_CanIP__RX11_ACR CYREG_CAN0_RX11_ACR
#define CAN_CanIP__RX11_ACRD CYREG_CAN0_RX11_ACRD
#define CAN_CanIP__RX11_AMR CYREG_CAN0_RX11_AMR
#define CAN_CanIP__RX11_AMRD CYREG_CAN0_RX11_AMRD
#define CAN_CanIP__RX11_CMD CYREG_CAN0_RX11_CMD
#define CAN_CanIP__RX11_DH CYREG_CAN0_RX11_DH
#define CAN_CanIP__RX11_DL CYREG_CAN0_RX11_DL
#define CAN_CanIP__RX11_ID CYREG_CAN0_RX11_ID
#define CAN_CanIP__RX12_ACR CYREG_CAN0_RX12_ACR
#define CAN_CanIP__RX12_ACRD CYREG_CAN0_RX12_ACRD
#define CAN_CanIP__RX12_AMR CYREG_CAN0_RX12_AMR
#define CAN_CanIP__RX12_AMRD CYREG_CAN0_RX12_AMRD
#define CAN_CanIP__RX12_CMD CYREG_CAN0_RX12_CMD
#define CAN_CanIP__RX12_DH CYREG_CAN0_RX12_DH
#define CAN_CanIP__RX12_DL CYREG_CAN0_RX12_DL
#define CAN_CanIP__RX12_ID CYREG_CAN0_RX12_ID
#define CAN_CanIP__RX13_ACR CYREG_CAN0_RX13_ACR
#define CAN_CanIP__RX13_ACRD CYREG_CAN0_RX13_ACRD
#define CAN_CanIP__RX13_AMR CYREG_CAN0_RX13_AMR
#define CAN_CanIP__RX13_AMRD CYREG_CAN0_RX13_AMRD
#define CAN_CanIP__RX13_CMD CYREG_CAN0_RX13_CMD
#define CAN_CanIP__RX13_DH CYREG_CAN0_RX13_DH
#define CAN_CanIP__RX13_DL CYREG_CAN0_RX13_DL
#define CAN_CanIP__RX13_ID CYREG_CAN0_RX13_ID
#define CAN_CanIP__RX14_ACR CYREG_CAN0_RX14_ACR
#define CAN_CanIP__RX14_ACRD CYREG_CAN0_RX14_ACRD
#define CAN_CanIP__RX14_AMR CYREG_CAN0_RX14_AMR
#define CAN_CanIP__RX14_AMRD CYREG_CAN0_RX14_AMRD
#define CAN_CanIP__RX14_CMD CYREG_CAN0_RX14_CMD
#define CAN_CanIP__RX14_DH CYREG_CAN0_RX14_DH
#define CAN_CanIP__RX14_DL CYREG_CAN0_RX14_DL
#define CAN_CanIP__RX14_ID CYREG_CAN0_RX14_ID
#define CAN_CanIP__RX15_ACR CYREG_CAN0_RX15_ACR
#define CAN_CanIP__RX15_ACRD CYREG_CAN0_RX15_ACRD
#define CAN_CanIP__RX15_AMR CYREG_CAN0_RX15_AMR
#define CAN_CanIP__RX15_AMRD CYREG_CAN0_RX15_AMRD
#define CAN_CanIP__RX15_CMD CYREG_CAN0_RX15_CMD
#define CAN_CanIP__RX15_DH CYREG_CAN0_RX15_DH
#define CAN_CanIP__RX15_DL CYREG_CAN0_RX15_DL
#define CAN_CanIP__RX15_ID CYREG_CAN0_RX15_ID
#define CAN_CanIP__RX2_ACR CYREG_CAN0_RX2_ACR
#define CAN_CanIP__RX2_ACRD CYREG_CAN0_RX2_ACRD
#define CAN_CanIP__RX2_AMR CYREG_CAN0_RX2_AMR
#define CAN_CanIP__RX2_AMRD CYREG_CAN0_RX2_AMRD
#define CAN_CanIP__RX2_CMD CYREG_CAN0_RX2_CMD
#define CAN_CanIP__RX2_DH CYREG_CAN0_RX2_DH
#define CAN_CanIP__RX2_DL CYREG_CAN0_RX2_DL
#define CAN_CanIP__RX2_ID CYREG_CAN0_RX2_ID
#define CAN_CanIP__RX3_ACR CYREG_CAN0_RX3_ACR
#define CAN_CanIP__RX3_ACRD CYREG_CAN0_RX3_ACRD
#define CAN_CanIP__RX3_AMR CYREG_CAN0_RX3_AMR
#define CAN_CanIP__RX3_AMRD CYREG_CAN0_RX3_AMRD
#define CAN_CanIP__RX3_CMD CYREG_CAN0_RX3_CMD
#define CAN_CanIP__RX3_DH CYREG_CAN0_RX3_DH
#define CAN_CanIP__RX3_DL CYREG_CAN0_RX3_DL
#define CAN_CanIP__RX3_ID CYREG_CAN0_RX3_ID
#define CAN_CanIP__RX4_ACR CYREG_CAN0_RX4_ACR
#define CAN_CanIP__RX4_ACRD CYREG_CAN0_RX4_ACRD
#define CAN_CanIP__RX4_AMR CYREG_CAN0_RX4_AMR
#define CAN_CanIP__RX4_AMRD CYREG_CAN0_RX4_AMRD
#define CAN_CanIP__RX4_CMD CYREG_CAN0_RX4_CMD
#define CAN_CanIP__RX4_DH CYREG_CAN0_RX4_DH
#define CAN_CanIP__RX4_DL CYREG_CAN0_RX4_DL
#define CAN_CanIP__RX4_ID CYREG_CAN0_RX4_ID
#define CAN_CanIP__RX5_ACR CYREG_CAN0_RX5_ACR
#define CAN_CanIP__RX5_ACRD CYREG_CAN0_RX5_ACRD
#define CAN_CanIP__RX5_AMR CYREG_CAN0_RX5_AMR
#define CAN_CanIP__RX5_AMRD CYREG_CAN0_RX5_AMRD
#define CAN_CanIP__RX5_CMD CYREG_CAN0_RX5_CMD
#define CAN_CanIP__RX5_DH CYREG_CAN0_RX5_DH
#define CAN_CanIP__RX5_DL CYREG_CAN0_RX5_DL
#define CAN_CanIP__RX5_ID CYREG_CAN0_RX5_ID
#define CAN_CanIP__RX6_ACR CYREG_CAN0_RX6_ACR
#define CAN_CanIP__RX6_ACRD CYREG_CAN0_RX6_ACRD
#define CAN_CanIP__RX6_AMR CYREG_CAN0_RX6_AMR
#define CAN_CanIP__RX6_AMRD CYREG_CAN0_RX6_AMRD
#define CAN_CanIP__RX6_CMD CYREG_CAN0_RX6_CMD
#define CAN_CanIP__RX6_DH CYREG_CAN0_RX6_DH
#define CAN_CanIP__RX6_DL CYREG_CAN0_RX6_DL
#define CAN_CanIP__RX6_ID CYREG_CAN0_RX6_ID
#define CAN_CanIP__RX7_ACR CYREG_CAN0_RX7_ACR
#define CAN_CanIP__RX7_ACRD CYREG_CAN0_RX7_ACRD
#define CAN_CanIP__RX7_AMR CYREG_CAN0_RX7_AMR
#define CAN_CanIP__RX7_AMRD CYREG_CAN0_RX7_AMRD
#define CAN_CanIP__RX7_CMD CYREG_CAN0_RX7_CMD
#define CAN_CanIP__RX7_DH CYREG_CAN0_RX7_DH
#define CAN_CanIP__RX7_DL CYREG_CAN0_RX7_DL
#define CAN_CanIP__RX7_ID CYREG_CAN0_RX7_ID
#define CAN_CanIP__RX8_ACR CYREG_CAN0_RX8_ACR
#define CAN_CanIP__RX8_ACRD CYREG_CAN0_RX8_ACRD
#define CAN_CanIP__RX8_AMR CYREG_CAN0_RX8_AMR
#define CAN_CanIP__RX8_AMRD CYREG_CAN0_RX8_AMRD
#define CAN_CanIP__RX8_CMD CYREG_CAN0_RX8_CMD
#define CAN_CanIP__RX8_DH CYREG_CAN0_RX8_DH
#define CAN_CanIP__RX8_DL CYREG_CAN0_RX8_DL
#define CAN_CanIP__RX8_ID CYREG_CAN0_RX8_ID
#define CAN_CanIP__RX9_ACR CYREG_CAN0_RX9_ACR
#define CAN_CanIP__RX9_ACRD CYREG_CAN0_RX9_ACRD
#define CAN_CanIP__RX9_AMR CYREG_CAN0_RX9_AMR
#define CAN_CanIP__RX9_AMRD CYREG_CAN0_RX9_AMRD
#define CAN_CanIP__RX9_CMD CYREG_CAN0_RX9_CMD
#define CAN_CanIP__RX9_DH CYREG_CAN0_RX9_DH
#define CAN_CanIP__RX9_DL CYREG_CAN0_RX9_DL
#define CAN_CanIP__RX9_ID CYREG_CAN0_RX9_ID
#define CAN_CanIP__TX0_CMD CYREG_CAN0_TX0_CMD
#define CAN_CanIP__TX0_DH CYREG_CAN0_TX0_DH
#define CAN_CanIP__TX0_DL CYREG_CAN0_TX0_DL
#define CAN_CanIP__TX0_ID CYREG_CAN0_TX0_ID
#define CAN_CanIP__TX1_CMD CYREG_CAN0_TX1_CMD
#define CAN_CanIP__TX1_DH CYREG_CAN0_TX1_DH
#define CAN_CanIP__TX1_DL CYREG_CAN0_TX1_DL
#define CAN_CanIP__TX1_ID CYREG_CAN0_TX1_ID
#define CAN_CanIP__TX2_CMD CYREG_CAN0_TX2_CMD
#define CAN_CanIP__TX2_DH CYREG_CAN0_TX2_DH
#define CAN_CanIP__TX2_DL CYREG_CAN0_TX2_DL
#define CAN_CanIP__TX2_ID CYREG_CAN0_TX2_ID
#define CAN_CanIP__TX3_CMD CYREG_CAN0_TX3_CMD
#define CAN_CanIP__TX3_DH CYREG_CAN0_TX3_DH
#define CAN_CanIP__TX3_DL CYREG_CAN0_TX3_DL
#define CAN_CanIP__TX3_ID CYREG_CAN0_TX3_ID
#define CAN_CanIP__TX4_CMD CYREG_CAN0_TX4_CMD
#define CAN_CanIP__TX4_DH CYREG_CAN0_TX4_DH
#define CAN_CanIP__TX4_DL CYREG_CAN0_TX4_DL
#define CAN_CanIP__TX4_ID CYREG_CAN0_TX4_ID
#define CAN_CanIP__TX5_CMD CYREG_CAN0_TX5_CMD
#define CAN_CanIP__TX5_DH CYREG_CAN0_TX5_DH
#define CAN_CanIP__TX5_DL CYREG_CAN0_TX5_DL
#define CAN_CanIP__TX5_ID CYREG_CAN0_TX5_ID
#define CAN_CanIP__TX6_CMD CYREG_CAN0_TX6_CMD
#define CAN_CanIP__TX6_DH CYREG_CAN0_TX6_DH
#define CAN_CanIP__TX6_DL CYREG_CAN0_TX6_DL
#define CAN_CanIP__TX6_ID CYREG_CAN0_TX6_ID
#define CAN_CanIP__TX7_CMD CYREG_CAN0_TX7_CMD
#define CAN_CanIP__TX7_DH CYREG_CAN0_TX7_DH
#define CAN_CanIP__TX7_DL CYREG_CAN0_TX7_DL
#define CAN_CanIP__TX7_ID CYREG_CAN0_TX7_ID

/* CAN_isr */
#define CAN_isr__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define CAN_isr__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define CAN_isr__INTC_MASK 0x10000u
#define CAN_isr__INTC_NUMBER 16u
#define CAN_isr__INTC_PRIOR_NUM 7u
#define CAN_isr__INTC_PRIOR_REG CYREG_NVIC_PRI_16
#define CAN_isr__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define CAN_isr__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* LCD_LCDPort */
#define LCD_LCDPort__0__MASK 0x01u
#define LCD_LCDPort__0__PC CYREG_PRT2_PC0
#define LCD_LCDPort__0__PORT 2u
#define LCD_LCDPort__0__SHIFT 0
#define LCD_LCDPort__1__MASK 0x02u
#define LCD_LCDPort__1__PC CYREG_PRT2_PC1
#define LCD_LCDPort__1__PORT 2u
#define LCD_LCDPort__1__SHIFT 1
#define LCD_LCDPort__2__MASK 0x04u
#define LCD_LCDPort__2__PC CYREG_PRT2_PC2
#define LCD_LCDPort__2__PORT 2u
#define LCD_LCDPort__2__SHIFT 2
#define LCD_LCDPort__3__MASK 0x08u
#define LCD_LCDPort__3__PC CYREG_PRT2_PC3
#define LCD_LCDPort__3__PORT 2u
#define LCD_LCDPort__3__SHIFT 3
#define LCD_LCDPort__4__MASK 0x10u
#define LCD_LCDPort__4__PC CYREG_PRT2_PC4
#define LCD_LCDPort__4__PORT 2u
#define LCD_LCDPort__4__SHIFT 4
#define LCD_LCDPort__5__MASK 0x20u
#define LCD_LCDPort__5__PC CYREG_PRT2_PC5
#define LCD_LCDPort__5__PORT 2u
#define LCD_LCDPort__5__SHIFT 5
#define LCD_LCDPort__6__MASK 0x40u
#define LCD_LCDPort__6__PC CYREG_PRT2_PC6
#define LCD_LCDPort__6__PORT 2u
#define LCD_LCDPort__6__SHIFT 6
#define LCD_LCDPort__AG CYREG_PRT2_AG
#define LCD_LCDPort__AMUX CYREG_PRT2_AMUX
#define LCD_LCDPort__BIE CYREG_PRT2_BIE
#define LCD_LCDPort__BIT_MASK CYREG_PRT2_BIT_MASK
#define LCD_LCDPort__BYP CYREG_PRT2_BYP
#define LCD_LCDPort__CTL CYREG_PRT2_CTL
#define LCD_LCDPort__DM0 CYREG_PRT2_DM0
#define LCD_LCDPort__DM1 CYREG_PRT2_DM1
#define LCD_LCDPort__DM2 CYREG_PRT2_DM2
#define LCD_LCDPort__DR CYREG_PRT2_DR
#define LCD_LCDPort__INP_DIS CYREG_PRT2_INP_DIS
#define LCD_LCDPort__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LCD_LCDPort__LCD_EN CYREG_PRT2_LCD_EN
#define LCD_LCDPort__MASK 0x7Fu
#define LCD_LCDPort__PORT 2u
#define LCD_LCDPort__PRT CYREG_PRT2_PRT
#define LCD_LCDPort__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LCD_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LCD_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LCD_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LCD_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LCD_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LCD_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LCD_LCDPort__PS CYREG_PRT2_PS
#define LCD_LCDPort__SHIFT 0
#define LCD_LCDPort__SLW CYREG_PRT2_SLW

/* LED */
#define LED__0__MASK 0x08u
#define LED__0__PC CYREG_PRT6_PC3
#define LED__0__PORT 6u
#define LED__0__SHIFT 3
#define LED__AG CYREG_PRT6_AG
#define LED__AMUX CYREG_PRT6_AMUX
#define LED__BIE CYREG_PRT6_BIE
#define LED__BIT_MASK CYREG_PRT6_BIT_MASK
#define LED__BYP CYREG_PRT6_BYP
#define LED__CTL CYREG_PRT6_CTL
#define LED__DM0 CYREG_PRT6_DM0
#define LED__DM1 CYREG_PRT6_DM1
#define LED__DM2 CYREG_PRT6_DM2
#define LED__DR CYREG_PRT6_DR
#define LED__INP_DIS CYREG_PRT6_INP_DIS
#define LED__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define LED__LCD_EN CYREG_PRT6_LCD_EN
#define LED__MASK 0x08u
#define LED__PORT 6u
#define LED__PRT CYREG_PRT6_PRT
#define LED__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define LED__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define LED__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define LED__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define LED__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define LED__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define LED__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define LED__PS CYREG_PRT6_PS
#define LED__SHIFT 3
#define LED__SLW CYREG_PRT6_SLW

/* isr */
#define isr__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr__INTC_MASK 0x02u
#define isr__INTC_NUMBER 1u
#define isr__INTC_PRIOR_NUM 7u
#define isr__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define isr__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Rx_1 */
#define Rx_1__0__MASK 0x01u
#define Rx_1__0__PC CYREG_PRT0_PC0
#define Rx_1__0__PORT 0u
#define Rx_1__0__SHIFT 0
#define Rx_1__AG CYREG_PRT0_AG
#define Rx_1__AMUX CYREG_PRT0_AMUX
#define Rx_1__BIE CYREG_PRT0_BIE
#define Rx_1__BIT_MASK CYREG_PRT0_BIT_MASK
#define Rx_1__BYP CYREG_PRT0_BYP
#define Rx_1__CTL CYREG_PRT0_CTL
#define Rx_1__DM0 CYREG_PRT0_DM0
#define Rx_1__DM1 CYREG_PRT0_DM1
#define Rx_1__DM2 CYREG_PRT0_DM2
#define Rx_1__DR CYREG_PRT0_DR
#define Rx_1__INP_DIS CYREG_PRT0_INP_DIS
#define Rx_1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Rx_1__LCD_EN CYREG_PRT0_LCD_EN
#define Rx_1__MASK 0x01u
#define Rx_1__PORT 0u
#define Rx_1__PRT CYREG_PRT0_PRT
#define Rx_1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Rx_1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Rx_1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Rx_1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Rx_1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Rx_1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Rx_1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Rx_1__PS CYREG_PRT0_PS
#define Rx_1__SHIFT 0
#define Rx_1__SLW CYREG_PRT0_SLW

/* Tx_1 */
#define Tx_1__0__MASK 0x02u
#define Tx_1__0__PC CYREG_PRT0_PC1
#define Tx_1__0__PORT 0u
#define Tx_1__0__SHIFT 1
#define Tx_1__AG CYREG_PRT0_AG
#define Tx_1__AMUX CYREG_PRT0_AMUX
#define Tx_1__BIE CYREG_PRT0_BIE
#define Tx_1__BIT_MASK CYREG_PRT0_BIT_MASK
#define Tx_1__BYP CYREG_PRT0_BYP
#define Tx_1__CTL CYREG_PRT0_CTL
#define Tx_1__DM0 CYREG_PRT0_DM0
#define Tx_1__DM1 CYREG_PRT0_DM1
#define Tx_1__DM2 CYREG_PRT0_DM2
#define Tx_1__DR CYREG_PRT0_DR
#define Tx_1__INP_DIS CYREG_PRT0_INP_DIS
#define Tx_1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Tx_1__LCD_EN CYREG_PRT0_LCD_EN
#define Tx_1__MASK 0x02u
#define Tx_1__PORT 0u
#define Tx_1__PRT CYREG_PRT0_PRT
#define Tx_1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Tx_1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Tx_1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Tx_1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Tx_1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Tx_1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Tx_1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Tx_1__PS CYREG_PRT0_PS
#define Tx_1__SHIFT 1
#define Tx_1__SLW CYREG_PRT0_SLW

/* Timer_TimerUDB */
#define Timer_TimerUDB_rstSts_stsreg__0__MASK 0x01u
#define Timer_TimerUDB_rstSts_stsreg__0__POS 0
#define Timer_TimerUDB_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define Timer_TimerUDB_rstSts_stsreg__16BIT_STATUS_REG CYREG_B1_UDB07_08_ST
#define Timer_TimerUDB_rstSts_stsreg__2__MASK 0x04u
#define Timer_TimerUDB_rstSts_stsreg__2__POS 2
#define Timer_TimerUDB_rstSts_stsreg__3__MASK 0x08u
#define Timer_TimerUDB_rstSts_stsreg__3__POS 3
#define Timer_TimerUDB_rstSts_stsreg__MASK 0x0Du
#define Timer_TimerUDB_rstSts_stsreg__MASK_REG CYREG_B1_UDB07_MSK
#define Timer_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define Timer_TimerUDB_rstSts_stsreg__STATUS_REG CYREG_B1_UDB07_ST
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG CYREG_B1_UDB06_07_ACTL
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG CYREG_B1_UDB06_07_CTL
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG CYREG_B1_UDB06_07_CTL
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG CYREG_B1_UDB06_07_CTL
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG CYREG_B1_UDB06_07_CTL
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG CYREG_B1_UDB06_07_MSK
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG CYREG_B1_UDB06_07_MSK
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG CYREG_B1_UDB06_07_MSK
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG CYREG_B1_UDB06_07_MSK
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK 0x80u
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS 7
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG CYREG_B1_UDB06_ACTL
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG CYREG_B1_UDB06_CTL
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG CYREG_B1_UDB06_ST_CTL
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG CYREG_B1_UDB06_CTL
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG CYREG_B1_UDB06_ST_CTL
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK 0x80u
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_B1_UDB06_MSK_ACTL
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_B1_UDB06_MSK_ACTL
#define Timer_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG CYREG_B1_UDB06_MSK
#define Timer_TimerUDB_sT16_timerdp_u0__16BIT_A0_REG CYREG_B1_UDB06_07_A0
#define Timer_TimerUDB_sT16_timerdp_u0__16BIT_A1_REG CYREG_B1_UDB06_07_A1
#define Timer_TimerUDB_sT16_timerdp_u0__16BIT_D0_REG CYREG_B1_UDB06_07_D0
#define Timer_TimerUDB_sT16_timerdp_u0__16BIT_D1_REG CYREG_B1_UDB06_07_D1
#define Timer_TimerUDB_sT16_timerdp_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB06_07_ACTL
#define Timer_TimerUDB_sT16_timerdp_u0__16BIT_F0_REG CYREG_B1_UDB06_07_F0
#define Timer_TimerUDB_sT16_timerdp_u0__16BIT_F1_REG CYREG_B1_UDB06_07_F1
#define Timer_TimerUDB_sT16_timerdp_u0__A0_A1_REG CYREG_B1_UDB06_A0_A1
#define Timer_TimerUDB_sT16_timerdp_u0__A0_REG CYREG_B1_UDB06_A0
#define Timer_TimerUDB_sT16_timerdp_u0__A1_REG CYREG_B1_UDB06_A1
#define Timer_TimerUDB_sT16_timerdp_u0__D0_D1_REG CYREG_B1_UDB06_D0_D1
#define Timer_TimerUDB_sT16_timerdp_u0__D0_REG CYREG_B1_UDB06_D0
#define Timer_TimerUDB_sT16_timerdp_u0__D1_REG CYREG_B1_UDB06_D1
#define Timer_TimerUDB_sT16_timerdp_u0__DP_AUX_CTL_REG CYREG_B1_UDB06_ACTL
#define Timer_TimerUDB_sT16_timerdp_u0__F0_F1_REG CYREG_B1_UDB06_F0_F1
#define Timer_TimerUDB_sT16_timerdp_u0__F0_REG CYREG_B1_UDB06_F0
#define Timer_TimerUDB_sT16_timerdp_u0__F1_REG CYREG_B1_UDB06_F1
#define Timer_TimerUDB_sT16_timerdp_u0__MSK_DP_AUX_CTL_REG CYREG_B1_UDB06_MSK_ACTL
#define Timer_TimerUDB_sT16_timerdp_u0__PER_DP_AUX_CTL_REG CYREG_B1_UDB06_MSK_ACTL
#define Timer_TimerUDB_sT16_timerdp_u1__16BIT_A0_REG CYREG_B1_UDB07_08_A0
#define Timer_TimerUDB_sT16_timerdp_u1__16BIT_A1_REG CYREG_B1_UDB07_08_A1
#define Timer_TimerUDB_sT16_timerdp_u1__16BIT_D0_REG CYREG_B1_UDB07_08_D0
#define Timer_TimerUDB_sT16_timerdp_u1__16BIT_D1_REG CYREG_B1_UDB07_08_D1
#define Timer_TimerUDB_sT16_timerdp_u1__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define Timer_TimerUDB_sT16_timerdp_u1__16BIT_F0_REG CYREG_B1_UDB07_08_F0
#define Timer_TimerUDB_sT16_timerdp_u1__16BIT_F1_REG CYREG_B1_UDB07_08_F1
#define Timer_TimerUDB_sT16_timerdp_u1__A0_A1_REG CYREG_B1_UDB07_A0_A1
#define Timer_TimerUDB_sT16_timerdp_u1__A0_REG CYREG_B1_UDB07_A0
#define Timer_TimerUDB_sT16_timerdp_u1__A1_REG CYREG_B1_UDB07_A1
#define Timer_TimerUDB_sT16_timerdp_u1__D0_D1_REG CYREG_B1_UDB07_D0_D1
#define Timer_TimerUDB_sT16_timerdp_u1__D0_REG CYREG_B1_UDB07_D0
#define Timer_TimerUDB_sT16_timerdp_u1__D1_REG CYREG_B1_UDB07_D1
#define Timer_TimerUDB_sT16_timerdp_u1__DP_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define Timer_TimerUDB_sT16_timerdp_u1__F0_F1_REG CYREG_B1_UDB07_F0_F1
#define Timer_TimerUDB_sT16_timerdp_u1__F0_REG CYREG_B1_UDB07_F0
#define Timer_TimerUDB_sT16_timerdp_u1__F1_REG CYREG_B1_UDB07_F1

/* clock */
#define clock__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define clock__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define clock__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define clock__CFG2_SRC_SEL_MASK 0x07u
#define clock__INDEX 0x01u
#define clock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define clock__PM_ACT_MSK 0x02u
#define clock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define clock__PM_STBY_MSK 0x02u

/* Button */
#define Button__0__MASK 0x02u
#define Button__0__PC CYREG_PRT6_PC1
#define Button__0__PORT 6u
#define Button__0__SHIFT 1
#define Button__AG CYREG_PRT6_AG
#define Button__AMUX CYREG_PRT6_AMUX
#define Button__BIE CYREG_PRT6_BIE
#define Button__BIT_MASK CYREG_PRT6_BIT_MASK
#define Button__BYP CYREG_PRT6_BYP
#define Button__CTL CYREG_PRT6_CTL
#define Button__DM0 CYREG_PRT6_DM0
#define Button__DM1 CYREG_PRT6_DM1
#define Button__DM2 CYREG_PRT6_DM2
#define Button__DR CYREG_PRT6_DR
#define Button__INP_DIS CYREG_PRT6_INP_DIS
#define Button__LCD_COM_SEG CYREG_PRT6_LCD_COM_SEG
#define Button__LCD_EN CYREG_PRT6_LCD_EN
#define Button__MASK 0x02u
#define Button__PORT 6u
#define Button__PRT CYREG_PRT6_PRT
#define Button__PRTDSI__CAPS_SEL CYREG_PRT6_CAPS_SEL
#define Button__PRTDSI__DBL_SYNC_IN CYREG_PRT6_DBL_SYNC_IN
#define Button__PRTDSI__OE_SEL0 CYREG_PRT6_OE_SEL0
#define Button__PRTDSI__OE_SEL1 CYREG_PRT6_OE_SEL1
#define Button__PRTDSI__OUT_SEL0 CYREG_PRT6_OUT_SEL0
#define Button__PRTDSI__OUT_SEL1 CYREG_PRT6_OUT_SEL1
#define Button__PRTDSI__SYNC_OUT CYREG_PRT6_SYNC_OUT
#define Button__PS CYREG_PRT6_PS
#define Button__SHIFT 1
#define Button__SLW CYREG_PRT6_SLW

/* ADC_SAR_bSAR_SEQ */
#define ADC_SAR_bSAR_SEQ_ChannelCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB05_06_CTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB05_06_CTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB05_06_CTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB05_06_CTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB05_06_MSK
#define ADC_SAR_bSAR_SEQ_ChannelCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB05_06_MSK
#define ADC_SAR_bSAR_SEQ_ChannelCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB05_06_MSK
#define ADC_SAR_bSAR_SEQ_ChannelCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB05_06_MSK
#define ADC_SAR_bSAR_SEQ_ChannelCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter__CONTROL_REG CYREG_B0_UDB05_CTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter__CONTROL_ST_REG CYREG_B0_UDB05_ST_CTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter__COUNT_REG CYREG_B0_UDB05_CTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter__COUNT_ST_REG CYREG_B0_UDB05_ST_CTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter__PERIOD_REG CYREG_B0_UDB05_MSK
#define ADC_SAR_bSAR_SEQ_ChannelCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB05_06_ST
#define ADC_SAR_bSAR_SEQ_ChannelCounter_ST__MASK_REG CYREG_B0_UDB05_MSK
#define ADC_SAR_bSAR_SEQ_ChannelCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter_ST__STATUS_CNT_REG CYREG_B0_UDB05_ST_CTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB05_ST_CTL
#define ADC_SAR_bSAR_SEQ_ChannelCounter_ST__STATUS_REG CYREG_B0_UDB05_ST
#define ADC_SAR_bSAR_SEQ_CtrlReg__0__MASK 0x01u
#define ADC_SAR_bSAR_SEQ_CtrlReg__0__POS 0
#define ADC_SAR_bSAR_SEQ_CtrlReg__1__MASK 0x02u
#define ADC_SAR_bSAR_SEQ_CtrlReg__1__POS 1
#define ADC_SAR_bSAR_SEQ_CtrlReg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define ADC_SAR_bSAR_SEQ_CtrlReg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB02_03_CTL
#define ADC_SAR_bSAR_SEQ_CtrlReg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB02_03_CTL
#define ADC_SAR_bSAR_SEQ_CtrlReg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB02_03_CTL
#define ADC_SAR_bSAR_SEQ_CtrlReg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB02_03_CTL
#define ADC_SAR_bSAR_SEQ_CtrlReg__16BIT_MASK_MASK_REG CYREG_B0_UDB02_03_MSK
#define ADC_SAR_bSAR_SEQ_CtrlReg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB02_03_MSK
#define ADC_SAR_bSAR_SEQ_CtrlReg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB02_03_MSK
#define ADC_SAR_bSAR_SEQ_CtrlReg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB02_03_MSK
#define ADC_SAR_bSAR_SEQ_CtrlReg__CONTROL_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define ADC_SAR_bSAR_SEQ_CtrlReg__CONTROL_REG CYREG_B0_UDB02_CTL
#define ADC_SAR_bSAR_SEQ_CtrlReg__CONTROL_ST_REG CYREG_B0_UDB02_ST_CTL
#define ADC_SAR_bSAR_SEQ_CtrlReg__COUNT_REG CYREG_B0_UDB02_CTL
#define ADC_SAR_bSAR_SEQ_CtrlReg__COUNT_ST_REG CYREG_B0_UDB02_ST_CTL
#define ADC_SAR_bSAR_SEQ_CtrlReg__MASK 0x03u
#define ADC_SAR_bSAR_SEQ_CtrlReg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define ADC_SAR_bSAR_SEQ_CtrlReg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define ADC_SAR_bSAR_SEQ_CtrlReg__PERIOD_REG CYREG_B0_UDB02_MSK
#define ADC_SAR_bSAR_SEQ_EOCSts__0__MASK 0x01u
#define ADC_SAR_bSAR_SEQ_EOCSts__0__POS 0
#define ADC_SAR_bSAR_SEQ_EOCSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB02_03_ACTL
#define ADC_SAR_bSAR_SEQ_EOCSts__16BIT_STATUS_REG CYREG_B0_UDB02_03_ST
#define ADC_SAR_bSAR_SEQ_EOCSts__MASK 0x01u
#define ADC_SAR_bSAR_SEQ_EOCSts__MASK_REG CYREG_B0_UDB02_MSK
#define ADC_SAR_bSAR_SEQ_EOCSts__MASK_ST_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define ADC_SAR_bSAR_SEQ_EOCSts__PER_ST_AUX_CTL_REG CYREG_B0_UDB02_MSK_ACTL
#define ADC_SAR_bSAR_SEQ_EOCSts__STATUS_AUX_CTL_REG CYREG_B0_UDB02_ACTL
#define ADC_SAR_bSAR_SEQ_EOCSts__STATUS_CNT_REG CYREG_B0_UDB02_ST_CTL
#define ADC_SAR_bSAR_SEQ_EOCSts__STATUS_CONTROL_REG CYREG_B0_UDB02_ST_CTL
#define ADC_SAR_bSAR_SEQ_EOCSts__STATUS_REG CYREG_B0_UDB02_ST

/* ADC_SAR_FinalBuf */
#define ADC_SAR_FinalBuf__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define ADC_SAR_FinalBuf__DRQ_NUMBER 0u
#define ADC_SAR_FinalBuf__NUMBEROF_TDS 0u
#define ADC_SAR_FinalBuf__PRIORITY 2u
#define ADC_SAR_FinalBuf__TERMIN_EN 0u
#define ADC_SAR_FinalBuf__TERMIN_SEL 0u
#define ADC_SAR_FinalBuf__TERMOUT0_EN 1u
#define ADC_SAR_FinalBuf__TERMOUT0_SEL 0u
#define ADC_SAR_FinalBuf__TERMOUT1_EN 0u
#define ADC_SAR_FinalBuf__TERMOUT1_SEL 0u

/* ADC_SAR_IntClock */
#define ADC_SAR_IntClock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define ADC_SAR_IntClock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define ADC_SAR_IntClock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define ADC_SAR_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define ADC_SAR_IntClock__INDEX 0x00u
#define ADC_SAR_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_SAR_IntClock__PM_ACT_MSK 0x01u
#define ADC_SAR_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_SAR_IntClock__PM_STBY_MSK 0x01u

/* ADC_SAR_IRQ */
#define ADC_SAR_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_SAR_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_SAR_IRQ__INTC_MASK 0x01u
#define ADC_SAR_IRQ__INTC_NUMBER 0u
#define ADC_SAR_IRQ__INTC_PRIOR_NUM 7u
#define ADC_SAR_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define ADC_SAR_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_SAR_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* ADC_SAR_SAR_ADC_SAR */
#define ADC_SAR_SAR_ADC_SAR__CLK CYREG_SAR1_CLK
#define ADC_SAR_SAR_ADC_SAR__CSR0 CYREG_SAR1_CSR0
#define ADC_SAR_SAR_ADC_SAR__CSR1 CYREG_SAR1_CSR1
#define ADC_SAR_SAR_ADC_SAR__CSR2 CYREG_SAR1_CSR2
#define ADC_SAR_SAR_ADC_SAR__CSR3 CYREG_SAR1_CSR3
#define ADC_SAR_SAR_ADC_SAR__CSR4 CYREG_SAR1_CSR4
#define ADC_SAR_SAR_ADC_SAR__CSR5 CYREG_SAR1_CSR5
#define ADC_SAR_SAR_ADC_SAR__CSR6 CYREG_SAR1_CSR6
#define ADC_SAR_SAR_ADC_SAR__PM_ACT_CFG CYREG_PM_ACT_CFG11
#define ADC_SAR_SAR_ADC_SAR__PM_ACT_MSK 0x02u
#define ADC_SAR_SAR_ADC_SAR__PM_STBY_CFG CYREG_PM_STBY_CFG11
#define ADC_SAR_SAR_ADC_SAR__PM_STBY_MSK 0x02u
#define ADC_SAR_SAR_ADC_SAR__SW0 CYREG_SAR1_SW0
#define ADC_SAR_SAR_ADC_SAR__SW2 CYREG_SAR1_SW2
#define ADC_SAR_SAR_ADC_SAR__SW3 CYREG_SAR1_SW3
#define ADC_SAR_SAR_ADC_SAR__SW4 CYREG_SAR1_SW4
#define ADC_SAR_SAR_ADC_SAR__SW6 CYREG_SAR1_SW6
#define ADC_SAR_SAR_ADC_SAR__TR0 CYREG_SAR1_TR0
#define ADC_SAR_SAR_ADC_SAR__WRK0 CYREG_SAR1_WRK0
#define ADC_SAR_SAR_ADC_SAR__WRK1 CYREG_SAR1_WRK1

/* ADC_SAR_TempBuf */
#define ADC_SAR_TempBuf__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define ADC_SAR_TempBuf__DRQ_NUMBER 1u
#define ADC_SAR_TempBuf__NUMBEROF_TDS 0u
#define ADC_SAR_TempBuf__PRIORITY 2u
#define ADC_SAR_TempBuf__TERMIN_EN 0u
#define ADC_SAR_TempBuf__TERMIN_SEL 0u
#define ADC_SAR_TempBuf__TERMOUT0_EN 1u
#define ADC_SAR_TempBuf__TERMOUT0_SEL 1u
#define ADC_SAR_TempBuf__TERMOUT1_EN 0u
#define ADC_SAR_TempBuf__TERMOUT1_SEL 0u

/* Brake_1 */
#define Brake_1__0__MASK 0x10u
#define Brake_1__0__PC CYREG_PRT3_PC4
#define Brake_1__0__PORT 3u
#define Brake_1__0__SHIFT 4
#define Brake_1__AG CYREG_PRT3_AG
#define Brake_1__AMUX CYREG_PRT3_AMUX
#define Brake_1__BIE CYREG_PRT3_BIE
#define Brake_1__BIT_MASK CYREG_PRT3_BIT_MASK
#define Brake_1__BYP CYREG_PRT3_BYP
#define Brake_1__CTL CYREG_PRT3_CTL
#define Brake_1__DM0 CYREG_PRT3_DM0
#define Brake_1__DM1 CYREG_PRT3_DM1
#define Brake_1__DM2 CYREG_PRT3_DM2
#define Brake_1__DR CYREG_PRT3_DR
#define Brake_1__INP_DIS CYREG_PRT3_INP_DIS
#define Brake_1__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Brake_1__LCD_EN CYREG_PRT3_LCD_EN
#define Brake_1__MASK 0x10u
#define Brake_1__PORT 3u
#define Brake_1__PRT CYREG_PRT3_PRT
#define Brake_1__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Brake_1__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Brake_1__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Brake_1__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Brake_1__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Brake_1__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Brake_1__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Brake_1__PS CYREG_PRT3_PS
#define Brake_1__SHIFT 4
#define Brake_1__SLW CYREG_PRT3_SLW

/* Brake_2 */
#define Brake_2__0__MASK 0x20u
#define Brake_2__0__PC CYREG_PRT3_PC5
#define Brake_2__0__PORT 3u
#define Brake_2__0__SHIFT 5
#define Brake_2__AG CYREG_PRT3_AG
#define Brake_2__AMUX CYREG_PRT3_AMUX
#define Brake_2__BIE CYREG_PRT3_BIE
#define Brake_2__BIT_MASK CYREG_PRT3_BIT_MASK
#define Brake_2__BYP CYREG_PRT3_BYP
#define Brake_2__CTL CYREG_PRT3_CTL
#define Brake_2__DM0 CYREG_PRT3_DM0
#define Brake_2__DM1 CYREG_PRT3_DM1
#define Brake_2__DM2 CYREG_PRT3_DM2
#define Brake_2__DR CYREG_PRT3_DR
#define Brake_2__INP_DIS CYREG_PRT3_INP_DIS
#define Brake_2__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Brake_2__LCD_EN CYREG_PRT3_LCD_EN
#define Brake_2__MASK 0x20u
#define Brake_2__PORT 3u
#define Brake_2__PRT CYREG_PRT3_PRT
#define Brake_2__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Brake_2__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Brake_2__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Brake_2__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Brake_2__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Brake_2__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Brake_2__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Brake_2__PS CYREG_PRT3_PS
#define Brake_2__SHIFT 5
#define Brake_2__SLW CYREG_PRT3_SLW

/* Steering */
#define Steering__0__MASK 0x40u
#define Steering__0__PC CYREG_PRT3_PC6
#define Steering__0__PORT 3u
#define Steering__0__SHIFT 6
#define Steering__AG CYREG_PRT3_AG
#define Steering__AMUX CYREG_PRT3_AMUX
#define Steering__BIE CYREG_PRT3_BIE
#define Steering__BIT_MASK CYREG_PRT3_BIT_MASK
#define Steering__BYP CYREG_PRT3_BYP
#define Steering__CTL CYREG_PRT3_CTL
#define Steering__DM0 CYREG_PRT3_DM0
#define Steering__DM1 CYREG_PRT3_DM1
#define Steering__DM2 CYREG_PRT3_DM2
#define Steering__DR CYREG_PRT3_DR
#define Steering__INP_DIS CYREG_PRT3_INP_DIS
#define Steering__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Steering__LCD_EN CYREG_PRT3_LCD_EN
#define Steering__MASK 0x40u
#define Steering__PORT 3u
#define Steering__PRT CYREG_PRT3_PRT
#define Steering__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Steering__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Steering__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Steering__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Steering__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Steering__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Steering__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Steering__PS CYREG_PRT3_PS
#define Steering__SHIFT 6
#define Steering__SLW CYREG_PRT3_SLW

/* Throttle_1 */
#define Throttle_1__0__MASK 0x04u
#define Throttle_1__0__PC CYREG_PRT3_PC2
#define Throttle_1__0__PORT 3u
#define Throttle_1__0__SHIFT 2
#define Throttle_1__AG CYREG_PRT3_AG
#define Throttle_1__AMUX CYREG_PRT3_AMUX
#define Throttle_1__BIE CYREG_PRT3_BIE
#define Throttle_1__BIT_MASK CYREG_PRT3_BIT_MASK
#define Throttle_1__BYP CYREG_PRT3_BYP
#define Throttle_1__CTL CYREG_PRT3_CTL
#define Throttle_1__DM0 CYREG_PRT3_DM0
#define Throttle_1__DM1 CYREG_PRT3_DM1
#define Throttle_1__DM2 CYREG_PRT3_DM2
#define Throttle_1__DR CYREG_PRT3_DR
#define Throttle_1__INP_DIS CYREG_PRT3_INP_DIS
#define Throttle_1__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Throttle_1__LCD_EN CYREG_PRT3_LCD_EN
#define Throttle_1__MASK 0x04u
#define Throttle_1__PORT 3u
#define Throttle_1__PRT CYREG_PRT3_PRT
#define Throttle_1__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Throttle_1__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Throttle_1__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Throttle_1__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Throttle_1__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Throttle_1__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Throttle_1__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Throttle_1__PS CYREG_PRT3_PS
#define Throttle_1__SHIFT 2
#define Throttle_1__SLW CYREG_PRT3_SLW

/* Throttle_2 */
#define Throttle_2__0__MASK 0x08u
#define Throttle_2__0__PC CYREG_PRT3_PC3
#define Throttle_2__0__PORT 3u
#define Throttle_2__0__SHIFT 3
#define Throttle_2__AG CYREG_PRT3_AG
#define Throttle_2__AMUX CYREG_PRT3_AMUX
#define Throttle_2__BIE CYREG_PRT3_BIE
#define Throttle_2__BIT_MASK CYREG_PRT3_BIT_MASK
#define Throttle_2__BYP CYREG_PRT3_BYP
#define Throttle_2__CTL CYREG_PRT3_CTL
#define Throttle_2__DM0 CYREG_PRT3_DM0
#define Throttle_2__DM1 CYREG_PRT3_DM1
#define Throttle_2__DM2 CYREG_PRT3_DM2
#define Throttle_2__DR CYREG_PRT3_DR
#define Throttle_2__INP_DIS CYREG_PRT3_INP_DIS
#define Throttle_2__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Throttle_2__LCD_EN CYREG_PRT3_LCD_EN
#define Throttle_2__MASK 0x08u
#define Throttle_2__PORT 3u
#define Throttle_2__PRT CYREG_PRT3_PRT
#define Throttle_2__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Throttle_2__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Throttle_2__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Throttle_2__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Throttle_2__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Throttle_2__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Throttle_2__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Throttle_2__PS CYREG_PRT3_PS
#define Throttle_2__SHIFT 3
#define Throttle_2__SLW CYREG_PRT3_SLW

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 4u
#define CYDEV_CHIP_DIE_PSOC4A 2u
#define CYDEV_CHIP_DIE_PSOC5LP 5u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 2u
#define CYDEV_CHIP_MEMBER_4D 3u
#define CYDEV_CHIP_MEMBER_5A 4u
#define CYDEV_CHIP_MEMBER_5B 5u
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
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_ES0 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
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
#define CYDEV_HEAP_SIZE 0x1000
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000003u
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x4000
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
#define CYDEV_VIO0 5
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5
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
#define DMA_CHANNELS_USED__MASK0 0x00000003u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
