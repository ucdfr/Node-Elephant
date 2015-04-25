/*******************************************************************************
* File Name: Brake_1.h  
* Version 2.5
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Brake_1_H) /* Pins Brake_1_H */
#define CY_PINS_Brake_1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Brake_1_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_5 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Brake_1__PORT == 15 && ((Brake_1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    Brake_1_Write(uint8 value) ;
void    Brake_1_SetDriveMode(uint8 mode) ;
uint8   Brake_1_ReadDataReg(void) ;
uint8   Brake_1_Read(void) ;
uint8   Brake_1_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Brake_1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Brake_1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Brake_1_DM_RES_UP          PIN_DM_RES_UP
#define Brake_1_DM_RES_DWN         PIN_DM_RES_DWN
#define Brake_1_DM_OD_LO           PIN_DM_OD_LO
#define Brake_1_DM_OD_HI           PIN_DM_OD_HI
#define Brake_1_DM_STRONG          PIN_DM_STRONG
#define Brake_1_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Brake_1_MASK               Brake_1__MASK
#define Brake_1_SHIFT              Brake_1__SHIFT
#define Brake_1_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Brake_1_PS                     (* (reg8 *) Brake_1__PS)
/* Data Register */
#define Brake_1_DR                     (* (reg8 *) Brake_1__DR)
/* Port Number */
#define Brake_1_PRT_NUM                (* (reg8 *) Brake_1__PRT) 
/* Connect to Analog Globals */                                                  
#define Brake_1_AG                     (* (reg8 *) Brake_1__AG)                       
/* Analog MUX bux enable */
#define Brake_1_AMUX                   (* (reg8 *) Brake_1__AMUX) 
/* Bidirectional Enable */                                                        
#define Brake_1_BIE                    (* (reg8 *) Brake_1__BIE)
/* Bit-mask for Aliased Register Access */
#define Brake_1_BIT_MASK               (* (reg8 *) Brake_1__BIT_MASK)
/* Bypass Enable */
#define Brake_1_BYP                    (* (reg8 *) Brake_1__BYP)
/* Port wide control signals */                                                   
#define Brake_1_CTL                    (* (reg8 *) Brake_1__CTL)
/* Drive Modes */
#define Brake_1_DM0                    (* (reg8 *) Brake_1__DM0) 
#define Brake_1_DM1                    (* (reg8 *) Brake_1__DM1)
#define Brake_1_DM2                    (* (reg8 *) Brake_1__DM2) 
/* Input Buffer Disable Override */
#define Brake_1_INP_DIS                (* (reg8 *) Brake_1__INP_DIS)
/* LCD Common or Segment Drive */
#define Brake_1_LCD_COM_SEG            (* (reg8 *) Brake_1__LCD_COM_SEG)
/* Enable Segment LCD */
#define Brake_1_LCD_EN                 (* (reg8 *) Brake_1__LCD_EN)
/* Slew Rate Control */
#define Brake_1_SLW                    (* (reg8 *) Brake_1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Brake_1_PRTDSI__CAPS_SEL       (* (reg8 *) Brake_1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Brake_1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Brake_1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Brake_1_PRTDSI__OE_SEL0        (* (reg8 *) Brake_1__PRTDSI__OE_SEL0) 
#define Brake_1_PRTDSI__OE_SEL1        (* (reg8 *) Brake_1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Brake_1_PRTDSI__OUT_SEL0       (* (reg8 *) Brake_1__PRTDSI__OUT_SEL0) 
#define Brake_1_PRTDSI__OUT_SEL1       (* (reg8 *) Brake_1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Brake_1_PRTDSI__SYNC_OUT       (* (reg8 *) Brake_1__PRTDSI__SYNC_OUT) 


#if defined(Brake_1__INTSTAT)  /* Interrupt Registers */

    #define Brake_1_INTSTAT                (* (reg8 *) Brake_1__INTSTAT)
    #define Brake_1_SNAP                   (* (reg8 *) Brake_1__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Brake_1_H */


/* [] END OF FILE */
