/********************************************************************************************
 * arch/arm/src/kinetis/hardware/kinetis_k28pinmux.h
 *
 *   Copyright (C) 2018 Gregory Nutt. All rights reserved.
 *   Authors: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ********************************************************************************************/

#ifndef __ARCH_ARM_SRC_KINETIS_HARDWARE_KINETIS_K28PINMUX_H
#define __ARCH_ARM_SRC_KINETIS_HARDWARE_KINETIS_K28PINMUX_H

/********************************************************************************************
 * Included Files
 ********************************************************************************************/

#include <nuttx/config.h>

#include "chip.h"

#ifdef KINETIS_K28

/********************************************************************************************
 * Pre-processor Definitions
 ********************************************************************************************/

/* In most cases, there are alternative configurations for various pins. Those alternative
 * pins are labeled with a suffix like _1, _2, etc. in order to distinguish them.  Logic in
 * the board.h file must select the correct pin configuration for the board by defining a pin
 * configuration (with no suffix) that maps to the correct alternative.
 *
 * WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!!
 * Additional effort is required to select specific GPIO options such as frequency,
 * open-drain/push-pull, and pull-up/down!  Just the basics are defined for most
 * pins in the initial version of this file.
 */

/* ADC */

#define PIN_ADC0_SE10                   (PIN_ANALOG | PIN_PORTA | PIN7)
#define PIN_ADC0_SE11                   (PIN_ANALOG | PIN_PORTA | PIN8)
#define PIN_ADC0_SE12                   (PIN_ANALOG | PIN_PORTB | PIN2)
#define PIN_ADC0_SE13                   (PIN_ANALOG | PIN_PORTB | PIN3)
#define PIN_ADC0_SE14                   (PIN_ANALOG | PIN_PORTC | PIN0)
#define PIN_ADC0_SE15                   (PIN_ANALOG | PIN_PORTC | PIN1)
#define PIN_ADC0_SE4A                   (PIN_ANALOG | PIN_PORTE | PIN16)
#define PIN_ADC0_SE4B                   (PIN_ANALOG | PIN_PORTC | PIN2)
#define PIN_ADC0_SE5A                   (PIN_ANALOG | PIN_PORTE | PIN17)
#define PIN_ADC0_SE5B                   (PIN_ANALOG | PIN_PORTD | PIN1)
#define PIN_ADC0_SE6A                   (PIN_ANALOG | PIN_PORTE | PIN18)
#define PIN_ADC0_SE6B                   (PIN_ANALOG | PIN_PORTD | PIN5)
#define PIN_ADC0_SE7A                   (PIN_ANALOG | PIN_PORTE | PIN19)
#define PIN_ADC0_SE7B                   (PIN_ANALOG | PIN_PORTD | PIN6)
#define PIN_ADC0_SE8                    (PIN_ANALOG | PIN_PORTB | PIN0)
#define PIN_ADC0_SE9                    (PIN_ANALOG | PIN_PORTB | PIN1)

/* Output clock */

#define PIN_CLKOUT_1                    (PIN_ALT5 | PIN_PORTA | PIN6)
#define PIN_CLKOUT_2                    (PIN_ALT5 | PIN_PORTC | PIN3)

/* Comparators */

#define PIN_CMP0_IN0                    (PIN_ALT0 | PIN_PORTC | PIN6)
#define PIN_CMP0_IN1                    (PIN_ALT0 | PIN_PORTC | PIN7)
#define PIN_CMP0_IN2                    (PIN_ALT0 | PIN_PORTC | PIN8)
#define PIN_CMP0_IN3                    (PIN_ALT0 | PIN_PORTC | PIN9)
#define PIN_CMP0_OUT_1                  (PIN_ALT6 | PIN_PORTB | PIN20)
#define PIN_CMP0_OUT_2                  (PIN_ALT6 | PIN_PORTC | PIN5)

#define PIN_CMP1_IN0                    (PIN_ALT0 | PIN_PORTC | PIN2)
#define PIN_CMP1_IN1                    (PIN_ALT0 | PIN_PORTC | PIN3)
#define PIN_CMP1_OUT_1                  (PIN_ALT6 | PIN_PORTB | PIN21)
#define PIN_CMP1_OUT_2                  (PIN_ALT6 | PIN_PORTC | PIN4)

/* Carrier Modulator Transmittor (CMT) */

#define PIN_CMT_IRO                     (PIN_ALT2 | PIN_PORTD | PIN7)

/* External Watchdog Monitor (EWM) */

#define PIN_EWM_IN_1                    (PIN_ALT6 | PIN_PORTA | PIN21)
#define PIN_EWM_IN_2                    (PIN_ALT6 | PIN_PORTB | PIN16)
#define PIN_EWM_IN_3                    (PIN_ALT6 | PIN_PORTD | PIN4)
#define PIN_EWM_OUT_1                   (PIN_ALT6 | PIN_PORTA | PIN20)
#define PIN_EWM_OUT_2                   (PIN_ALT6 | PIN_PORTB | PIN17)
#define PIN_EWM_OUT_3                   (PIN_ALT6 | PIN_PORTD | PIN5)

/* External Crystal */

#define PIN_EXTAL0                      (PIN_ALT0 | PIN_PORTA | PIN18)
#define PIN_XTAL0                       (PIN_ALT0 | PIN_PORTA | PIN19)

/* FlexBus */

#define PIN_FB_A0                       (PIN_ALT5 | PIN_PORTC | PIN29)
#define PIN_FB_A2                       (PIN_ALT5 | PIN_PORTC | PIN27)
#define PIN_FB_A3                       (PIN_ALT5 | PIN_PORTC | PIN26)
#define PIN_FB_A4                       (PIN_ALT5 | PIN_PORTC | PIN25)
#define PIN_FB_A5                       (PIN_ALT5 | PIN_PORTC | PIN24)
#define PIN_FB_A6                       (PIN_ALT5 | PIN_PORTB | PIN15)
#define PIN_FB_A7                       (PIN_ALT5 | PIN_PORTB | PIN14)
#define PIN_FB_A8                       (PIN_ALT5 | PIN_PORTB | PIN13)
#define PIN_FB_A9                       (PIN_ALT5 | PIN_PORTB | PIN12)
#define PIN_FB_A1                       (PIN_ALT5 | PIN_PORTC | PIN28)
#define PIN_FB_A10                      (PIN_ALT5 | PIN_PORTA | PIN31)
#define PIN_FB_A11                      (PIN_ALT5 | PIN_PORTA | PIN30)
#define PIN_FB_A12                      (PIN_ALT5 | PIN_PORTA | PIN27)
#define PIN_FB_A13                      (PIN_ALT5 | PIN_PORTA | PIN26)
#define PIN_FB_A14                      (PIN_ALT5 | PIN_PORTA | PIN25)
#define PIN_FB_A15                      (PIN_ALT5 | PIN_PORTA | PIN24)
#define PIN_FB_A16                      (PIN_ALT6 | PIN_PORTD | PIN8)
#define PIN_FB_A17                      (PIN_ALT6 | PIN_PORTD | PIN9)
#define PIN_FB_A18                      (PIN_ALT6 | PIN_PORTD | PIN10)
#define PIN_FB_A19                      (PIN_ALT6 | PIN_PORTD | PIN11)
#define PIN_FB_A20                      (PIN_ALT6 | PIN_PORTD | PIN12)
#define PIN_FB_A21                      (PIN_ALT6 | PIN_PORTD | PIN13)
#define PIN_FB_A22                      (PIN_ALT6 | PIN_PORTD | PIN14)
#define PIN_FB_A23                      (PIN_ALT6 | PIN_PORTD | PIN15)
#define PIN_FB_A24                      (PIN_ALT6 | PIN_PORTA | PIN29)
#define PIN_FB_A25                      (PIN_ALT6 | PIN_PORTA | PIN28)
#define PIN_FB_A26                      (PIN_ALT6 | PIN_PORTA | PIN27)
#define PIN_FB_A27                      (PIN_ALT6 | PIN_PORTA | PIN26)
#define PIN_FB_A28                      (PIN_ALT6 | PIN_PORTA | PIN25)
#define PIN_FB_A29                      (PIN_ALT6 | PIN_PORTA | PIN24)
#define PIN_FB_AD0                      (PIN_ALT5 | PIN_PORTD | PIN6)
#define PIN_FB_AD1                      (PIN_ALT5 | PIN_PORTD | PIN5)
#define PIN_FB_AD2                      (PIN_ALT5 | PIN_PORTD | PIN4)
#define PIN_FB_AD4                      (PIN_ALT5 | PIN_PORTD | PIN2)
#define PIN_FB_AD5                      (PIN_ALT5 | PIN_PORTC | PIN10)
#define PIN_FB_AD6                      (PIN_ALT5 | PIN_PORTC | PIN9)
#define PIN_FB_AD7                      (PIN_ALT5 | PIN_PORTC | PIN8)
#define PIN_FB_AD8                      (PIN_ALT5 | PIN_PORTC | PIN7)
#define PIN_FB_AD9                      (PIN_ALT5 | PIN_PORTC | PIN6)
#define PIN_FB_AD10                     (PIN_ALT5 | PIN_PORTC | PIN5)
#define PIN_FB_AD11                     (PIN_ALT5 | PIN_PORTC | PIN4)
#define PIN_FB_AD12                     (PIN_ALT5 | PIN_PORTC | PIN2)
#define PIN_FB_AD13                     (PIN_ALT5 | PIN_PORTC | PIN1)
#define PIN_FB_AD14                     (PIN_ALT5 | PIN_PORTC | PIN0)
#define PIN_FB_AD15                     (PIN_ALT5 | PIN_PORTB | PIN18)
#define PIN_FB_AD16                     (PIN_ALT5 | PIN_PORTB | PIN17)
#define PIN_FB_AD17                     (PIN_ALT5 | PIN_PORTB | PIN16)
#define PIN_FB_AD18                     (PIN_ALT5 | PIN_PORTB | PIN11)
#define PIN_FB_AD19                     (PIN_ALT5 | PIN_PORTB | PIN10)
#define PIN_FB_AD20                     (PIN_ALT5 | PIN_PORTB | PIN9)
#define PIN_FB_AD21                     (PIN_ALT5 | PIN_PORTB | PIN8)
#define PIN_FB_AD22                     (PIN_ALT5 | PIN_PORTB | PIN7)
#define PIN_FB_AD23                     (PIN_ALT5 | PIN_PORTB | PIN6)
#define PIN_FB_AD24                     (PIN_ALT5 | PIN_PORTC | PIN15)
#define PIN_FB_AD25                     (PIN_ALT5 | PIN_PORTC | PIN14)
#define PIN_FB_AD26                     (PIN_ALT5 | PIN_PORTC | PIN13)
#define PIN_FB_AD27                     (PIN_ALT5 | PIN_PORTC | PIN12)
#define PIN_FB_AD28                     (PIN_ALT5 | PIN_PORTB | PIN23)
#define PIN_FB_AD29                     (PIN_ALT5 | PIN_PORTB | PIN22)
#define PIN_FB_AD3                      (PIN_ALT5 | PIN_PORTD | PIN3)
#define PIN_FB_AD30                     (PIN_ALT5 | PIN_PORTB | PIN21)
#define PIN_FB_AD31                     (PIN_ALT5 | PIN_PORTB | PIN20)
#define PIN_FB_ALE                      (PIN_ALT5 | PIN_PORTD | PIN0)
#define PIN_FB_BE7_0_BLS31_24           (PIN_ALT5 | PIN_PORTC | PIN19)
#define PIN_FB_BE15_8_BLS23_16          (PIN_ALT5 | PIN_PORTC | PIN18)
#define PIN_FB_BE23_16_BLS15_8          (PIN_ALT5 | PIN_PORTC | PIN16)
#define PIN_FB_BE31_24_BLS7_0           (PIN_ALT5 | PIN_PORTC | PIN17)
#define PIN_FB_CS0                      (PIN_ALT5 | PIN_PORTD | PIN1)
#define PIN_FB_CS1                      (PIN_ALT5 | PIN_PORTD | PIN0)
#define PIN_FB_CS2                      (PIN_ALT5 | PIN_PORTC | PIN18)
#define PIN_FB_CS3                      (PIN_ALT5 | PIN_PORTC | PIN19)
#define PIN_FB_CS4                      (PIN_ALT5 | PIN_PORTC | PIN17)
#define PIN_FB_CS5                      (PIN_ALT5 | PIN_PORTC | PIN16)
#define PIN_FB_OE                       (PIN_ALT5 | PIN_PORTB | PIN19)
#define PIN_FB_RW                       (PIN_ALT5 | PIN_PORTC | PIN11)
#define PIN_FB_TA                       (PIN_ALT6 | PIN_PORTC | PIN19)
#define PIN_FB_TBST                     (PIN_ALT5 | PIN_PORTC | PIN18)
#define PIN_FB_TS                       (PIN_ALT5 | PIN_PORTD | PIN0)
#define PIN_FB_TSIZ0                    (PIN_ALT5 | PIN_PORTC | PIN17)
#define PIN_FB_TSIZ1                    (PIN_ALT5 | PIN_PORTC | PIN16)

/* FlexTimer Module (FTM) */

#define PIN_FTM_CLKIN0_1                (PIN_ALT4 | PIN_PORTA | PIN18)
#define PIN_FTM_CLKIN0_2                (PIN_ALT4 | PIN_PORTB | PIN16)
#define PIN_FTM_CLKIN0_3                (PIN_ALT4 | PIN_PORTC | PIN12)
#define PIN_FTM_CLKIN0_4                (PIN_ALT4 | PIN_PORTE | PIN16)
#define PIN_FTM_CLKIN1_2                (PIN_ALT4 | PIN_PORTA | PIN19)
#define PIN_FTM_CLKIN1_3                (PIN_ALT4 | PIN_PORTA | PIN20)
#define PIN_FTM_CLKIN1_4                (PIN_ALT4 | PIN_PORTB | PIN17)
#define PIN_FTM_CLKIN1_5                (PIN_ALT4 | PIN_PORTC | PIN13)
#define PIN_FTM_CLKIN1_6                (PIN_ALT4 | PIN_PORTE | PIN17)

#define PIN_FTM0_CH0_1                  (PIN_ALT3 | PIN_PORTA | PIN3)
#define PIN_FTM0_CH0_2                  (PIN_ALT4 | PIN_PORTC | PIN1)
#define PIN_FTM0_CH1_1                  (PIN_ALT3 | PIN_PORTA | PIN4)
#define PIN_FTM0_CH1_2                  (PIN_ALT4 | PIN_PORTC | PIN2)
#define PIN_FTM0_CH2_1                  (PIN_ALT3 | PIN_PORTA | PIN5)
#define PIN_FTM0_CH2_2                  (PIN_ALT4 | PIN_PORTC | PIN3)
#define PIN_FTM0_CH2_3                  (PIN_ALT7 | PIN_PORTC | PIN5)
#define PIN_FTM0_CH3_1                  (PIN_ALT3 | PIN_PORTA | PIN6)
#define PIN_FTM0_CH3_2                  (PIN_ALT4 | PIN_PORTC | PIN4)
#define PIN_FTM0_CH4_1                  (PIN_ALT3 | PIN_PORTA | PIN7)
#define PIN_FTM0_CH4_2                  (PIN_ALT4 | PIN_PORTB | PIN12)
#define PIN_FTM0_CH4_3                  (PIN_ALT4 | PIN_PORTD | PIN4)
#define PIN_FTM0_CH5_1                  (PIN_ALT3 | PIN_PORTA | PIN0)
#define PIN_FTM0_CH5_2                  (PIN_ALT4 | PIN_PORTB | PIN13)
#define PIN_FTM0_CH5_3                  (PIN_ALT4 | PIN_PORTD | PIN5)
#define PIN_FTM0_CH6_1                  (PIN_ALT3 | PIN_PORTA | PIN1)
#define PIN_FTM0_CH6_2                  (PIN_ALT4 | PIN_PORTD | PIN6)
#define PIN_FTM0_CH7_1                  (PIN_ALT3 | PIN_PORTA | PIN2)
#define PIN_FTM0_CH7_2                  (PIN_ALT4 | PIN_PORTD | PIN7)
#define PIN_FTM0_FLT0_1                 (PIN_ALT6 | PIN_PORTB | PIN3)
#define PIN_FTM0_FLT0_2                 (PIN_ALT6 | PIN_PORTD | PIN6)
#define PIN_FTM0_FLT1_1                 (PIN_ALT6 | PIN_PORTB | PIN10)
#define PIN_FTM0_FLT1_2                 (PIN_ALT6 | PIN_PORTD | PIN7)
#define PIN_FTM0_FLT2_1                 (PIN_ALT3 | PIN_PORTA | PIN18)
#define PIN_FTM0_FLT2_2                 (PIN_ALT6 | PIN_PORTB | PIN11)
#define PIN_FTM0_FLT3_1                 (PIN_ALT6 | PIN_PORTB | PIN2)
#define PIN_FTM0_FLT3_2                 (PIN_ALT6 | PIN_PORTE | PIN16)

#define PIN_FTM1_CH0_1                  (PIN_ALT3 | PIN_PORTA | PIN12)
#define PIN_FTM1_CH0_2                  (PIN_ALT3 | PIN_PORTA | PIN8)
#define PIN_FTM1_CH0_3                  (PIN_ALT3 | PIN_PORTB | PIN0)
#define PIN_FTM1_CH0_4                  (PIN_ALT3 | PIN_PORTB | PIN12)
#define PIN_FTM1_CH1_1                  (PIN_ALT3 | PIN_PORTA | PIN13)
#define PIN_FTM1_CH1_2                  (PIN_ALT3 | PIN_PORTA | PIN9)
#define PIN_FTM1_CH1_3                  (PIN_ALT3 | PIN_PORTB | PIN1)
#define PIN_FTM1_CH1_4                  (PIN_ALT3 | PIN_PORTB | PIN13)
#define PIN_FTM1_FLT0_1                 (PIN_ALT3 | PIN_PORTA | PIN19)
#define PIN_FTM1_FLT0_2                 (PIN_ALT6 | PIN_PORTB | PIN4)
#define PIN_FTM1_QD_PHA_1               (PIN_ALT6 | PIN_PORTA | PIN8)
#define PIN_FTM1_QD_PHA_2               (PIN_ALT6 | PIN_PORTB | PIN0)
#define PIN_FTM1_QD_PHA_3               (PIN_ALT6 | PIN_PORTB | PIN12)
#define PIN_FTM1_QD_PHA_4               (PIN_ALT7 | PIN_PORTA | PIN12)
#define PIN_FTM1_QD_PHB_1               (PIN_ALT6 | PIN_PORTA | PIN9)
#define PIN_FTM1_QD_PHB_2               (PIN_ALT6 | PIN_PORTB | PIN1)
#define PIN_FTM1_QD_PHB_3               (PIN_ALT6 | PIN_PORTB | PIN13)
#define PIN_FTM1_QD_PHB_4               (PIN_ALT7 | PIN_PORTA | PIN13)

#define PIN_FTM2_CH0_1                  (PIN_ALT3 | PIN_PORTA | PIN10)
#define PIN_FTM2_CH0_2                  (PIN_ALT3 | PIN_PORTB | PIN18)
#define PIN_FTM2_CH1_1                  (PIN_ALT3 | PIN_PORTA | PIN11)
#define PIN_FTM2_CH1_2                  (PIN_ALT3 | PIN_PORTB | PIN19)
#define PIN_FTM2_FLT0_1                 (PIN_ALT6 | PIN_PORTB | PIN5)
#define PIN_FTM2_FLT0_2                 (PIN_ALT6 | PIN_PORTC | PIN9)
#define PIN_FTM2_QD_PHA_1               (PIN_ALT6 | PIN_PORTA | PIN10)
#define PIN_FTM2_QD_PHA_2               (PIN_ALT6 | PIN_PORTB | PIN18)
#define PIN_FTM2_QD_PHB_1               (PIN_ALT6 | PIN_PORTA | PIN11)
#define PIN_FTM2_QD_PHB_2               (PIN_ALT6 | PIN_PORTB | PIN19)

#define PIN_FTM3_CH0_1                  (PIN_ALT4 | PIN_PORTD | PIN0)
#define PIN_FTM3_CH0_2                  (PIN_ALT6 | PIN_PORTE | PIN5)
#define PIN_FTM3_CH1_1                  (PIN_ALT4 | PIN_PORTD | PIN1)
#define PIN_FTM3_CH1_2                  (PIN_ALT6 | PIN_PORTE | PIN6)
#define PIN_FTM3_CH2_1                  (PIN_ALT4 | PIN_PORTD | PIN2)
#define PIN_FTM3_CH2_2                  (PIN_ALT6 | PIN_PORTE | PIN7)
#define PIN_FTM3_CH3_1                  (PIN_ALT4 | PIN_PORTD | PIN3)
#define PIN_FTM3_CH3_2                  (PIN_ALT6 | PIN_PORTE | PIN8)
#define PIN_FTM3_CH4_1                  (PIN_ALT3 | PIN_PORTC | PIN8)
#define PIN_FTM3_CH4_2                  (PIN_ALT6 | PIN_PORTE | PIN9)
#define PIN_FTM3_CH5_1                  (PIN_ALT3 | PIN_PORTC | PIN9)
#define PIN_FTM3_CH5_2                  (PIN_ALT6 | PIN_PORTE | PIN10)
#define PIN_FTM3_CH6_1                  (PIN_ALT3 | PIN_PORTC | PIN10)
#define PIN_FTM3_CH6_2                  (PIN_ALT6 | PIN_PORTE | PIN11)
#define PIN_FTM3_CH7_1                  (PIN_ALT3 | PIN_PORTC | PIN11)
#define PIN_FTM3_CH7_2                  (PIN_ALT6 | PIN_PORTE | PIN12)
#define PIN_FTM3_FLT0_1                 (PIN_ALT3 | PIN_PORTD | PIN12)
#define PIN_FTM3_FLT0_2                 (PIN_ALT6 | PIN_PORTC | PIN12)

/* FlexIO */

#define PIN_FXIO0_D0_1                  (PIN_ALT6 | PIN_PORTE | PIN2)
#define PIN_FXIO0_D0_2                  (PIN_ALT7 | PIN_PORTB | PIN0)
#define PIN_FXIO0_D1_1                  (PIN_ALT6 | PIN_PORTE | PIN3)
#define PIN_FXIO0_D1_2                  (PIN_ALT7 | PIN_PORTB | PIN1)
#define PIN_FXIO0_D2_1                  (PIN_ALT7 | PIN_PORTB | PIN2)
#define PIN_FXIO0_D2_2                  (PIN_ALT7 | PIN_PORTE | PIN12)
#define PIN_FXIO0_D3_1                  (PIN_ALT7 | PIN_PORTB | PIN3)
#define PIN_FXIO0_D3_2                  (PIN_ALT7 | PIN_PORTE | PIN13)
#define PIN_FXIO0_D4_1                  (PIN_ALT7 | PIN_PORTB | PIN10)
#define PIN_FXIO0_D4_2                  (PIN_ALT7 | PIN_PORTE | PIN16)
#define PIN_FXIO0_D5_1                  (PIN_ALT7 | PIN_PORTB | PIN11)
#define PIN_FXIO0_D5_2                  (PIN_ALT7 | PIN_PORTE | PIN17)
#define PIN_FXIO0_D6_1                  (PIN_ALT5 | PIN_PORTA | PIN22)
#define PIN_FXIO0_D6_2                  (PIN_ALT7 | PIN_PORTB | PIN18)
#define PIN_FXIO0_D6_3                  (PIN_ALT7 | PIN_PORTE | PIN18)
#define PIN_FXIO0_D7_1                  (PIN_ALT5 | PIN_PORTA | PIN23)
#define PIN_FXIO0_D7_2                  (PIN_ALT7 | PIN_PORTB | PIN19)
#define PIN_FXIO0_D7_3                  (PIN_ALT7 | PIN_PORTE | PIN19)
#define PIN_FXIO0_D8_1                  (PIN_ALT5 | PIN_PORTA | PIN20)
#define PIN_FXIO0_D8_2                  (PIN_ALT7 | PIN_PORTB | PIN20)
#define PIN_FXIO0_D8_3                  (PIN_ALT7 | PIN_PORTE | PIN20)
#define PIN_FXIO0_D9_1                  (PIN_ALT5 | PIN_PORTA | PIN21)
#define PIN_FXIO0_D9_2                  (PIN_ALT7 | PIN_PORTB | PIN21)
#define PIN_FXIO0_D9_3                  (PIN_ALT7 | PIN_PORTE | PIN21)
#define PIN_FXIO0_D10_1                 (PIN_ALT5 | PIN_PORTA | PIN0)
#define PIN_FXIO0_D10_2                 (PIN_ALT7 | PIN_PORTB | PIN22)
#define PIN_FXIO0_D10_3                 (PIN_ALT7 | PIN_PORTE | PIN22)
#define PIN_FXIO0_D11_1                 (PIN_ALT5 | PIN_PORTA | PIN1)
#define PIN_FXIO0_D11_2                 (PIN_ALT7 | PIN_PORTB | PIN23)
#define PIN_FXIO0_D11_3                 (PIN_ALT7 | PIN_PORTE | PIN23)
#define PIN_FXIO0_D12_1                 (PIN_ALT2 | PIN_PORTE | PIN6)
#define PIN_FXIO0_D12_2                 (PIN_ALT5 | PIN_PORTA | PIN2)
#define PIN_FXIO0_D12_3                 (PIN_ALT7 | PIN_PORTC | PIN0)
#define PIN_FXIO0_D13_1                 (PIN_ALT2 | PIN_PORTE | PIN7)
#define PIN_FXIO0_D13_2                 (PIN_ALT5 | PIN_PORTA | PIN3)
#define PIN_FXIO0_D13_3                 (PIN_ALT7 | PIN_PORTC | PIN1)
#define PIN_FXIO0_D14_1                 (PIN_ALT3 | PIN_PORTE | PIN8)
#define PIN_FXIO0_D14_2                 (PIN_ALT5 | PIN_PORTA | PIN4)
#define PIN_FXIO0_D14_3                 (PIN_ALT7 | PIN_PORTC | PIN6)
#define PIN_FXIO0_D15_1                 (PIN_ALT3 | PIN_PORTE | PIN9)
#define PIN_FXIO0_D15_2                 (PIN_ALT5 | PIN_PORTA | PIN5)
#define PIN_FXIO0_D15_3                 (PIN_ALT7 | PIN_PORTC | PIN7)
#define PIN_FXIO0_D16_1                 (PIN_ALT3 | PIN_PORTE | PIN10)
#define PIN_FXIO0_D16_2                 (PIN_ALT5 | PIN_PORTA | PIN10)
#define PIN_FXIO0_D16_3                 (PIN_ALT7 | PIN_PORTC | PIN8)
#define PIN_FXIO0_D17_1                 (PIN_ALT3 | PIN_PORTE | PIN11)
#define PIN_FXIO0_D17_2                 (PIN_ALT5 | PIN_PORTA | PIN11)
#define PIN_FXIO0_D17_3                 (PIN_ALT7 | PIN_PORTC | PIN9)
#define PIN_FXIO0_D18_1                 (PIN_ALT5 | PIN_PORTA | PIN12)
#define PIN_FXIO0_D18_2                 (PIN_ALT7 | PIN_PORTC | PIN10)
#define PIN_FXIO0_D19_1                 (PIN_ALT5 | PIN_PORTA | PIN13)
#define PIN_FXIO0_D19_2                 (PIN_ALT7 | PIN_PORTC | PIN11)
#define PIN_FXIO0_D20_1                 (PIN_ALT5 | PIN_PORTA | PIN14)
#define PIN_FXIO0_D20_2                 (PIN_ALT7 | PIN_PORTC | PIN14)
#define PIN_FXIO0_D21_1                 (PIN_ALT5 | PIN_PORTA | PIN15)
#define PIN_FXIO0_D21_2                 (PIN_ALT7 | PIN_PORTC | PIN15)
#define PIN_FXIO0_D22_1                 (PIN_ALT5 | PIN_PORTA | PIN16)
#define PIN_FXIO0_D22_2                 (PIN_ALT7 | PIN_PORTD | PIN0)
#define PIN_FXIO0_D23_1                 (PIN_ALT5 | PIN_PORTA | PIN17)
#define PIN_FXIO0_D23_2                 (PIN_ALT7 | PIN_PORTD | PIN1)
#define PIN_FXIO0_D24                   (PIN_ALT7 | PIN_PORTD | PIN8)
#define PIN_FXIO0_D25                   (PIN_ALT7 | PIN_PORTD | PIN9)
#define PIN_FXIO0_D26                   (PIN_ALT7 | PIN_PORTD | PIN10)
#define PIN_FXIO0_D27                   (PIN_ALT7 | PIN_PORTD | PIN11)
#define PIN_FXIO0_D28                   (PIN_ALT7 | PIN_PORTD | PIN12)
#define PIN_FXIO0_D29                   (PIN_ALT7 | PIN_PORTD | PIN13)
#define PIN_FXIO0_D30                   (PIN_ALT7 | PIN_PORTD | PIN14)
#define PIN_FXIO0_D31                   (PIN_ALT7 | PIN_PORTD | PIN15)

/* I2C */

#define PIN_I2C0_SCL_1                  (PIN_ALT2_OPENDRAIN | PIN_PORTA | PIN20)
#define PIN_I2C0_SCL_2                  (PIN_ALT2_OPENDRAIN | PIN_PORTB | PIN0)
#define PIN_I2C0_SCL_3                  (PIN_ALT2_OPENDRAIN | PIN_PORTB | PIN2)
#define PIN_I2C0_SCL_4                  (PIN_ALT2_OPENDRAIN | PIN_PORTD | PIN8)
#define PIN_I2C0_SCL_5                  (PIN_ALT4_OPENDRAIN | PIN_PORTE | PIN19)
#define PIN_I2C0_SCL_6                  (PIN_ALT7_OPENDRAIN | PIN_PORTD | PIN2)
#define PIN_I2C0_SDA_1                  (PIN_ALT2_OPENDRAIN | PIN_PORTA | PIN21)
#define PIN_I2C0_SDA_2                  (PIN_ALT2_OPENDRAIN | PIN_PORTB | PIN1)
#define PIN_I2C0_SDA_3                  (PIN_ALT2_OPENDRAIN | PIN_PORTB | PIN3)
#define PIN_I2C0_SDA_4                  (PIN_ALT2_OPENDRAIN | PIN_PORTD | PIN9)
#define PIN_I2C0_SDA_5                  (PIN_ALT4_OPENDRAIN | PIN_PORTE | PIN18)
#define PIN_I2C0_SDA_6                  (PIN_ALT7_OPENDRAIN | PIN_PORTD | PIN3)

#define PIN_I2C1_SCL_1                  (PIN_ALT2_OPENDRAIN | PIN_PORTA | PIN8)
#define PIN_I2C1_SCL_2                  (PIN_ALT2_OPENDRAIN | PIN_PORTC | PIN10)
#define PIN_I2C1_SCL_3                  (PIN_ALT6_OPENDRAIN | PIN_PORTE | PIN1)
#define PIN_I2C1_SDA_1                  (PIN_ALT2_OPENDRAIN | PIN_PORTA | PIN9)
#define PIN_I2C1_SDA_2                  (PIN_ALT2_OPENDRAIN | PIN_PORTC | PIN11)
#define PIN_I2C1_SDA_3                  (PIN_ALT6_OPENDRAIN | PIN_PORTE | PIN0)
#define PIN_I2C2_SCL_1                  (PIN_ALT2_OPENDRAIN | PIN_PORTA | PIN11)
#define PIN_I2C2_SCL_2                  (PIN_ALT2_OPENDRAIN | PIN_PORTA | PIN6)
#define PIN_I2C2_SCL_3                  (PIN_ALT2_OPENDRAIN | PIN_PORTE | PIN23)
#define PIN_I2C2_SCL_4                  (PIN_ALT4_OPENDRAIN | PIN_PORTB | PIN10)
#define PIN_I2C2_SDA_1                  (PIN_ALT2_OPENDRAIN | PIN_PORTA | PIN10)
#define PIN_I2C2_SDA_2                  (PIN_ALT2_OPENDRAIN | PIN_PORTA | PIN7)
#define PIN_I2C2_SDA_3                  (PIN_ALT2_OPENDRAIN | PIN_PORTE | PIN22)
#define PIN_I2C2_SDA_4                  (PIN_ALT4_OPENDRAIN | PIN_PORTB | PIN11)

#define PIN_I2C3_SCL_1                  (PIN_ALT2_OPENDRAIN | PIN_PORTA | PIN31)
#define PIN_I2C3_SCL_2                  (PIN_ALT2_OPENDRAIN | PIN_PORTC | PIN29)
#define PIN_I2C3_SCL_3                  (PIN_ALT2_OPENDRAIN | PIN_PORTE | PIN11)
#define PIN_I2C3_SCL_4                  (PIN_ALT4_OPENDRAIN | PIN_PORTA | PIN2)
#define PIN_I2C3_SDA_1                  (PIN_ALT2_OPENDRAIN | PIN_PORTA | PIN30)
#define PIN_I2C3_SDA_2                  (PIN_ALT2_OPENDRAIN | PIN_PORTC | PIN28)
#define PIN_I2C3_SDA_3                  (PIN_ALT2_OPENDRAIN | PIN_PORTE | PIN10)
#define PIN_I2C3_SDA_4                  (PIN_ALT4_OPENDRAIN | PIN_PORTA | PIN1)

/* I2S */

#define PIN_I2S0_MCLK_1                 (PIN_ALT4 | PIN_PORTC | PIN8)
#define PIN_I2S0_MCLK_2                 (PIN_ALT4 | PIN_PORTE | PIN6)
#define PIN_I2S0_MCLK_3                 (PIN_ALT6 | PIN_PORTA | PIN17)
#define PIN_I2S0_MCLK_4                 (PIN_ALT6 | PIN_PORTC | PIN6)
#define PIN_I2S0_RX_BCLK_1              (PIN_ALT4 | PIN_PORTC | PIN6)
#define PIN_I2S0_RX_BCLK_2              (PIN_ALT4 | PIN_PORTC | PIN9)
#define PIN_I2S0_RX_BCLK_3              (PIN_ALT4 | PIN_PORTE | PIN9)
#define PIN_I2S0_RX_BCLK_4              (PIN_ALT6 | PIN_PORTA | PIN14)
#define PIN_I2S0_RX_FS_1                (PIN_ALT4 | PIN_PORTC | PIN10)
#define PIN_I2S0_RX_FS_2                (PIN_ALT4 | PIN_PORTC | PIN7)
#define PIN_I2S0_RX_FS_3                (PIN_ALT4 | PIN_PORTE | PIN8)
#define PIN_I2S0_RX_FS_4                (PIN_ALT6 | PIN_PORTA | PIN16)
#define PIN_I2S0_RXD0_1                 (PIN_ALT4 | PIN_PORTC | PIN5)
#define PIN_I2S0_RXD0_2                 (PIN_ALT4 | PIN_PORTE | PIN7)
#define PIN_I2S0_RXD0_3                 (PIN_ALT6 | PIN_PORTA | PIN15)
#define PIN_I2S0_RXD1_1                 (PIN_ALT2 | PIN_PORTE | PIN8)
#define PIN_I2S0_RXD1_2                 (PIN_ALT4 | PIN_PORTC | PIN11)
#define PIN_I2S0_RXD1_3                 (PIN_ALT7 | PIN_PORTA | PIN16)
#define PIN_I2S0_TX_BCLK_1              (PIN_ALT4 | PIN_PORTB | PIN18)
#define PIN_I2S0_TX_BCLK_2              (PIN_ALT4 | PIN_PORTE | PIN12)
#define PIN_I2S0_TX_BCLK_3              (PIN_ALT6 | PIN_PORTA | PIN5)
#define PIN_I2S0_TX_BCLK_4              (PIN_ALT6 | PIN_PORTC | PIN3)
#define PIN_I2S0_TX_FS_1                (PIN_ALT4 | PIN_PORTB | PIN19)
#define PIN_I2S0_TX_FS_2                (PIN_ALT4 | PIN_PORTE | PIN11)
#define PIN_I2S0_TX_FS_3                (PIN_ALT6 | PIN_PORTA | PIN13)
#define PIN_I2S0_TX_FS_4                (PIN_ALT6 | PIN_PORTC | PIN2)
#define PIN_I2S0_TXD0_1                 (PIN_ALT4 | PIN_PORTE | PIN10)
#define PIN_I2S0_TXD0_2                 (PIN_ALT6 | PIN_PORTA | PIN12)
#define PIN_I2S0_TXD0_3                 (PIN_ALT6 | PIN_PORTC | PIN1)
#define PIN_I2S0_TXD1_1                 (PIN_ALT2 | PIN_PORTE | PIN9)
#define PIN_I2S0_TXD1_2                 (PIN_ALT6 | PIN_PORTC | PIN0)
#define PIN_I2S0_TXD1_3                 (PIN_ALT7 | PIN_PORTA | PIN14)

#define PIN_I2S1_MCLK_1                 (PIN_ALT4 | PIN_PORTE | PIN13)
#define PIN_I2S1_MCLK_2                 (PIN_ALT7 | PIN_PORTA | PIN17)
#define PIN_I2S1_RX_BCLK_1              (PIN_ALT5 | PIN_PORTE | PIN23)
#define PIN_I2S1_RX_BCLK_2              (PIN_ALT7 | PIN_PORTA | PIN31)
#define PIN_I2S1_RX_FS_1                (PIN_ALT5 | PIN_PORTE | PIN22)
#define PIN_I2S1_RX_FS_2                (PIN_ALT7 | PIN_PORTA | PIN30)
#define PIN_I2S1_RXD0_1                 (PIN_ALT5 | PIN_PORTE | PIN21)
#define PIN_I2S1_RXD0_2                 (PIN_ALT7 | PIN_PORTA | PIN29)
#define PIN_I2S1_RXD1_1                 (PIN_ALT5 | PIN_PORTE | PIN20)
#define PIN_I2S1_RXD1_2                 (PIN_ALT7 | PIN_PORTA | PIN28)
#define PIN_I2S1_TX_BCLK_1              (PIN_ALT5 | PIN_PORTE | PIN16)
#define PIN_I2S1_TX_BCLK_2              (PIN_ALT7 | PIN_PORTA | PIN24)
#define PIN_I2S1_TX_FS_1                (PIN_ALT5 | PIN_PORTE | PIN17)
#define PIN_I2S1_TX_FS_2                (PIN_ALT7 | PIN_PORTA | PIN25)
#define PIN_I2S1_TXD0_1                 (PIN_ALT5 | PIN_PORTE | PIN18)
#define PIN_I2S1_TXD0_2                 (PIN_ALT7 | PIN_PORTA | PIN26)
#define PIN_I2S1_TXD1_1                 (PIN_ALT5 | PIN_PORTE | PIN19)
#define PIN_I2S1_TXD1_2                 (PIN_ALT7 | PIN_PORTA | PIN27)

/* JTAG/SWD */

#define PIN_JTAG_TCLK                   (PIN_ALT7 | PIN_PORTA | PIN0)
#define PIN_JTAG_TDI                    (PIN_ALT7 | PIN_PORTA | PIN1)
#define PIN_JTAG_TDO                    (PIN_ALT7 | PIN_PORTA | PIN2)
#define PIN_JTAG_TMS                    (PIN_ALT7 | PIN_PORTA | PIN3)
#define PIN_JTAG_TRST_b                 (PIN_ALT7 | PIN_PORTA | PIN5)

#define PIN_SWD_CLK                     (PIN_ALT7 | PIN_PORTA | PIN0)
#define PIN_SWD_DIO                     (PIN_ALT7 | PIN_PORTA | PIN3)

/* Low-leakage wakeup module (LLWU, actually GPIO configurations) */

#define PIN_LLWU_P0                     (PIN_ALT1 | PIN_PORTE | PIN1)
#define PIN_LLWU_P1                     (PIN_ALT1 | PIN_PORTE | PIN2)
#define PIN_LLWU_P2                     (PIN_ALT1 | PIN_PORTE | PIN4)
#define PIN_LLWU_P3                     (PIN_ALT1 | PIN_PORTA | PIN4)
#define PIN_LLWU_P4                     (PIN_ALT1 | PIN_PORTA | PIN13)
#define PIN_LLWU_P5                     (PIN_ALT1 | PIN_PORTB | PIN0)
#define PIN_LLWU_P6                     (PIN_ALT1 | PIN_PORTC | PIN1)
#define PIN_LLWU_P7                     (PIN_ALT1 | PIN_PORTC | PIN3)
#define PIN_LLWU_P8                     (PIN_ALT1 | PIN_PORTC | PIN4)
#define PIN_LLWU_P9                     (PIN_ALT1 | PIN_PORTC | PIN5)
#define PIN_LLWU_P10                    (PIN_ALT1 | PIN_PORTC | PIN6)
#define PIN_LLWU_P11                    (PIN_ALT1 | PIN_PORTC | PIN11)
#define PIN_LLWU_P12                    (PIN_ALT1 | PIN_PORTD | PIN0)
#define PIN_LLWU_P13                    (PIN_ALT1 | PIN_PORTD | PIN2)
#define PIN_LLWU_P14                    (PIN_ALT1 | PIN_PORTD | PIN4)
#define PIN_LLWU_P15                    (PIN_ALT1 | PIN_PORTD | PIN6)
#define PIN_LLWU_P16                    (PIN_ALT1 | PIN_PORTE | PIN6)
#define PIN_LLWU_P17                    (PIN_ALT1 | PIN_PORTE | PIN9)
#define PIN_LLWU_P18                    (PIN_ALT1 | PIN_PORTE | PIN10)
#define PIN_LLWU_P19                    (PIN_ALT1 | PIN_PORTE | PIN17)
#define PIN_LLWU_P20                    (PIN_ALT1 | PIN_PORTE | PIN18)
#define PIN_LLWU_P21                    (PIN_ALT1 | PIN_PORTA | PIN21)
#define PIN_LLWU_P22                    (PIN_ALT1 | PIN_PORTA | PIN10)
#define PIN_LLWU_P23                    (PIN_ALT1 | PIN_PORTA | PIN11)
#define PIN_LLWU_P24                    (PIN_ALT1 | PIN_PORTD | PIN8)
#define PIN_LLWU_P25                    (PIN_ALT1 | PIN_PORTD | PIN11)

/* Low-Power Timers (LPTMR) */

#define PIN_LPTMR0_ALT1                 (PIN_ALT6 | PIN_PORTA | PIN19)
#define PIN_LPTMR0_ALT2                 (PIN_ALT3 | PIN_PORTC | PIN5)
#define PIN_LPTMR0_ALT3                 (PIN_ALT6 | PIN_PORTE | PIN17)

#define PIN_LPTMR1_ALT1                 (PIN_ALT6 | PIN_PORTA | PIN19)
#define PIN_LPTMR1_ALT2                 (PIN_ALT3 | PIN_PORTC | PIN5)

/* Low-Power UARTS (LPUART) */

#define PIN_LPUART0_CTS_1               (PIN_ALT2 | PIN_PORTA | PIN0)
#define PIN_LPUART0_CTS_2               (PIN_ALT2 | PIN_PORTB | PIN13)
#define PIN_LPUART0_CTS_3               (PIN_ALT3 | PIN_PORTA | PIN16)
#define PIN_LPUART0_CTS_4               (PIN_ALT3 | PIN_PORTB | PIN3)
#define PIN_LPUART0_CTS_5               (PIN_ALT3 | PIN_PORTC | PIN26)
#define PIN_LPUART0_CTS_6               (PIN_ALT3 | PIN_PORTD | PIN5)
#define PIN_LPUART0_RTS_1               (PIN_ALT2 | PIN_PORTA | PIN3)
#define PIN_LPUART0_RTS_2               (PIN_ALT2 | PIN_PORTB | PIN12)
#define PIN_LPUART0_RTS_3               (PIN_ALT3 | PIN_PORTA | PIN17)
#define PIN_LPUART0_RTS_4               (PIN_ALT3 | PIN_PORTB | PIN2)
#define PIN_LPUART0_RTS_5               (PIN_ALT3 | PIN_PORTC | PIN27)
#define PIN_LPUART0_RTS_6               (PIN_ALT3 | PIN_PORTD | PIN4)
#define PIN_LPUART0_RX_1                (PIN_ALT2 | PIN_PORTA | PIN1)
#define PIN_LPUART0_RX_2                (PIN_ALT2 | PIN_PORTB | PIN14)
#define PIN_LPUART0_RX_3                (PIN_ALT3 | PIN_PORTA | PIN15)
#define PIN_LPUART0_RX_4                (PIN_ALT3 | PIN_PORTB | PIN16)
#define PIN_LPUART0_RX_5                (PIN_ALT3 | PIN_PORTC | PIN25)
#define PIN_LPUART0_RX_6                (PIN_ALT3 | PIN_PORTD | PIN6)
#define PIN_LPUART0_TX_1                (PIN_ALT2 | PIN_PORTA | PIN2)
#define PIN_LPUART0_TX_2                (PIN_ALT2 | PIN_PORTB | PIN15)
#define PIN_LPUART0_TX_3                (PIN_ALT3 | PIN_PORTA | PIN14)
#define PIN_LPUART0_TX_4                (PIN_ALT3 | PIN_PORTB | PIN17)
#define PIN_LPUART0_TX_5                (PIN_ALT3 | PIN_PORTC | PIN24)
#define PIN_LPUART0_TX_6                (PIN_ALT3 | PIN_PORTD | PIN7)

#define PIN_LPUART1_CTS_1               (PIN_ALT3 | PIN_PORTC | PIN2)
#define PIN_LPUART1_CTS_2               (PIN_ALT3 | PIN_PORTD | PIN11)
#define PIN_LPUART1_CTS_3               (PIN_ALT3 | PIN_PORTE | PIN2)
#define PIN_LPUART1_RTS_1               (PIN_ALT3 | PIN_PORTC | PIN1)
#define PIN_LPUART1_RTS_2               (PIN_ALT3 | PIN_PORTD | PIN10)
#define PIN_LPUART1_RTS_3               (PIN_ALT3 | PIN_PORTE | PIN3)
#define PIN_LPUART1_RX_1                (PIN_ALT3 | PIN_PORTC | PIN3)
#define PIN_LPUART1_RX_2                (PIN_ALT3 | PIN_PORTD | PIN8)
#define PIN_LPUART1_RX_3                (PIN_ALT3 | PIN_PORTE | PIN1)
#define PIN_LPUART1_TX_1                (PIN_ALT3 | PIN_PORTC | PIN4)
#define PIN_LPUART1_TX_2                (PIN_ALT3 | PIN_PORTD | PIN9)
#define PIN_LPUART1_TX_3                (PIN_ALT3 | PIN_PORTE | PIN0)

#define PIN_LPUART2_CTS_1               (PIN_ALT3 | PIN_PORTA | PIN26)
#define PIN_LPUART2_CTS_2               (PIN_ALT3 | PIN_PORTD | PIN1)
#define PIN_LPUART2_CTS_3               (PIN_ALT3 | PIN_PORTE | PIN18)
#define PIN_LPUART2_RTS_1               (PIN_ALT3 | PIN_PORTA | PIN27)
#define PIN_LPUART2_RTS_2               (PIN_ALT3 | PIN_PORTD | PIN0)
#define PIN_LPUART2_RTS_3               (PIN_ALT3 | PIN_PORTE | PIN19)
#define PIN_LPUART2_RX_1                (PIN_ALT3 | PIN_PORTA | PIN25)
#define PIN_LPUART2_RX_2                (PIN_ALT3 | PIN_PORTD | PIN2)
#define PIN_LPUART2_RX_3                (PIN_ALT3 | PIN_PORTE | PIN13)
#define PIN_LPUART2_RX_4                (PIN_ALT3 | PIN_PORTE | PIN17)
#define PIN_LPUART2_TX_1                (PIN_ALT3 | PIN_PORTA | PIN24)
#define PIN_LPUART2_TX_2                (PIN_ALT3 | PIN_PORTD | PIN3)
#define PIN_LPUART2_TX_3                (PIN_ALT3 | PIN_PORTE | PIN12)
#define PIN_LPUART2_TX_4                (PIN_ALT3 | PIN_PORTE | PIN16)

#define PIN_LPUART3_CTS_1               (PIN_ALT3 | PIN_PORTA | PIN30)
#define PIN_LPUART3_CTS_2               (PIN_ALT3 | PIN_PORTB | PIN9)
#define PIN_LPUART3_CTS_3               (PIN_ALT3 | PIN_PORTC | PIN19)
#define PIN_LPUART3_CTS_4               (PIN_ALT3 | PIN_PORTE | PIN6)
#define PIN_LPUART3_RTS_1               (PIN_ALT3 | PIN_PORTA | PIN31)
#define PIN_LPUART3_RTS_2               (PIN_ALT3 | PIN_PORTB | PIN8)
#define PIN_LPUART3_RTS_3               (PIN_ALT3 | PIN_PORTC | PIN18)
#define PIN_LPUART3_RTS_4               (PIN_ALT3 | PIN_PORTE | PIN7)
#define PIN_LPUART3_RX_1                (PIN_ALT3 | PIN_PORTA | PIN29)
#define PIN_LPUART3_RX_2                (PIN_ALT3 | PIN_PORTB | PIN10)
#define PIN_LPUART3_RX_3                (PIN_ALT3 | PIN_PORTC | PIN16)
#define PIN_LPUART3_RX_4                (PIN_ALT3 | PIN_PORTE | PIN5)
#define PIN_LPUART3_TX_1                (PIN_ALT3 | PIN_PORTA | PIN28)
#define PIN_LPUART3_TX_2                (PIN_ALT3 | PIN_PORTB | PIN11)
#define PIN_LPUART3_TX_3                (PIN_ALT3 | PIN_PORTC | PIN17)
#define PIN_LPUART3_TX_4                (PIN_ALT3 | PIN_PORTE | PIN4)

#define PIN_LPUART4_CTS_1               (PIN_ALT3 | PIN_PORTA | PIN22)
#define PIN_LPUART4_CTS_2               (PIN_ALT3 | PIN_PORTC | PIN13)
#define PIN_LPUART4_CTS_3               (PIN_ALT3 | PIN_PORTE | PIN22)
#define PIN_LPUART4_RTS_1               (PIN_ALT3 | PIN_PORTA | PIN23)
#define PIN_LPUART4_RTS_2               (PIN_ALT3 | PIN_PORTC | PIN12)
#define PIN_LPUART4_RTS_3               (PIN_ALT3 | PIN_PORTE | PIN23)
#define PIN_LPUART4_RX_1                (PIN_ALT3 | PIN_PORTA | PIN21)
#define PIN_LPUART4_RX_2                (PIN_ALT3 | PIN_PORTC | PIN14)
#define PIN_LPUART4_RX_3                (PIN_ALT3 | PIN_PORTE | PIN21)
#define PIN_LPUART4_TX_1                (PIN_ALT3 | PIN_PORTA | PIN20)
#define PIN_LPUART4_TX_2                (PIN_ALT3 | PIN_PORTC | PIN15)
#define PIN_LPUART4_TX_3                (PIN_ALT3 | PIN_PORTE | PIN20)

/* NMI */

#define PIN_NMI                         (PIN_ALT7 | PIN_PORTA | PIN4)

/* Programmable Delay Block (PDB) */

#define PIN_PDB0_EXTRG_1                (PIN_ALT3 | PIN_PORTC | PIN0)
#define PIN_PDB0_EXTRG_2                (PIN_ALT3 | PIN_PORTC | PIN6)

/* Quad-SPI (QSPI) */

#define PIN_QSPI0A_DATA0_1              (PIN_ALT5 | PIN_PORTE | PIN2)
#define PIN_QSPI0A_DATA0_2              (PIN_ALT7 | PIN_PORTC | PIN26)
#define PIN_QSPI0A_DATA1_1              (PIN_ALT5 | PIN_PORTE | PIN4)
#define PIN_QSPI0A_DATA1_2              (PIN_ALT7 | PIN_PORTC | PIN28)
#define PIN_QSPI0A_DATA2_1              (PIN_ALT5 | PIN_PORTE | PIN3)
#define PIN_QSPI0A_DATA2_2              (PIN_ALT7 | PIN_PORTC | PIN27)
#define PIN_QSPI0A_DATA3_1              (PIN_ALT5 | PIN_PORTE | PIN0)
#define PIN_QSPI0A_DATA3_2              (PIN_ALT7 | PIN_PORTC | PIN24)
#define PIN_QSPI0A_DQS                  (PIN_ALT7 | PIN_PORTE | PIN11)
#define PIN_QSPI0A_SCLK_1               (PIN_ALT5 | PIN_PORTE | PIN1)
#define PIN_QSPI0A_SCLK_2               (PIN_ALT7 | PIN_PORTC | PIN25)
#define PIN_QSPI0A_SS0_B_1              (PIN_ALT5 | PIN_PORTE | PIN5)
#define PIN_QSPI0A_SS0_B_2              (PIN_ALT7 | PIN_PORTC | PIN29)
#define PIN_QSPI0A_SS1_B_3              (PIN_ALT7 | PIN_PORTC | PIN19)
#define PIN_QSPI0A_SS1_B_4              (PIN_ALT7 | PIN_PORTE | PIN7)

#define PIN_QSPI0B_DATA0                (PIN_ALT5 | PIN_PORTE | PIN8)
#define PIN_QSPI0B_DATA1                (PIN_ALT5 | PIN_PORTE | PIN10)
#define PIN_QSPI0B_DATA2                (PIN_ALT5 | PIN_PORTE | PIN9)
#define PIN_QSPI0B_DATA3                (PIN_ALT5 | PIN_PORTE | PIN6)
#define PIN_QSPI0B_DQS                  (PIN_ALT5 | PIN_PORTE | PIN12)
#define PIN_QSPI0B_SCLK                 (PIN_ALT5 | PIN_PORTE | PIN7)
#define PIN_QSPI0B_SS0_B                (PIN_ALT5 | PIN_PORTE | PIN11)
#define PIN_QSPI0B_SS1_B                (PIN_ALT5 | PIN_PORTE | PIN13)

/* RTC clock outputs */

#define PIN_RTC_CLKOUT_1                (PIN_ALT6 | PIN_PORTA | PIN22)
#define PIN_RTC_CLKOUT_2                (PIN_ALT7 | PIN_PORTE | PIN0)

/* Secured digital host controller (SDHC) */

#define PIN_SDHC0_CLKIN                 (PIN_ALT6 | PIN_PORTE | PIN13)
#define PIN_SDHC0_CMD_1                 (PIN_ALT4 | PIN_PORTA | PIN27)
#define PIN_SDHC0_CMD_2                 (PIN_ALT4 | PIN_PORTE | PIN3)
#define PIN_SDHC0_D0_1                  (PIN_ALT4 | PIN_PORTA | PIN25)
#define PIN_SDHC0_D0_2                  (PIN_ALT4 | PIN_PORTE | PIN1)
#define PIN_SDHC0_D1_1                  (PIN_ALT4 | PIN_PORTA | PIN24)
#define PIN_SDHC0_D1_2                  (PIN_ALT4 | PIN_PORTE | PIN0)
#define PIN_SDHC0_D2_1                  (PIN_ALT4 | PIN_PORTA | PIN29)
#define PIN_SDHC0_D2_2                  (PIN_ALT4 | PIN_PORTE | PIN5)
#define PIN_SDHC0_D3_1                  (PIN_ALT4 | PIN_PORTA | PIN28)
#define PIN_SDHC0_D3_2                  (PIN_ALT4 | PIN_PORTE | PIN4)
#define PIN_SDHC0_D4                    (PIN_ALT7 | PIN_PORTE | PIN6)
#define PIN_SDHC0_D5                    (PIN_ALT7 | PIN_PORTE | PIN8)
#define PIN_SDHC0_D6                    (PIN_ALT7 | PIN_PORTE | PIN9)
#define PIN_SDHC0_D7                    (PIN_ALT7 | PIN_PORTE | PIN10)
#define PIN_SDHC0_DCLK_1                (PIN_ALT4 | PIN_PORTA | PIN26)
#define PIN_SDHC0_DCLK_2                (PIN_ALT4 | PIN_PORTE | PIN2)

/* Synchronous DRAM Controller Module (SDRAM) */

#define PIN_SDRAM_A9                    (PIN_ALT5 | PIN_PORTD | PIN5)
#define PIN_SDRAM_A10                   (PIN_ALT5 | PIN_PORTD | PIN4)
#define PIN_SDRAM_A11                   (PIN_ALT5 | PIN_PORTD | PIN3)
#define PIN_SDRAM_A12                   (PIN_ALT5 | PIN_PORTD | PIN2)
#define PIN_SDRAM_A13                   (PIN_ALT5 | PIN_PORTC | PIN10)
#define PIN_SDRAM_A14                   (PIN_ALT5 | PIN_PORTC | PIN9)
#define PIN_SDRAM_A15                   (PIN_ALT5 | PIN_PORTC | PIN8)
#define PIN_SDRAM_A16                   (PIN_ALT5 | PIN_PORTC | PIN7)
#define PIN_SDRAM_A17                   (PIN_ALT5 | PIN_PORTC | PIN6)
#define PIN_SDRAM_A18                   (PIN_ALT5 | PIN_PORTC | PIN5)
#define PIN_SDRAM_A19                   (PIN_ALT5 | PIN_PORTC | PIN4)
#define PIN_SDRAM_A20                   (PIN_ALT5 | PIN_PORTC | PIN2)
#define PIN_SDRAM_A21                   (PIN_ALT5 | PIN_PORTC | PIN1)
#define PIN_SDRAM_A22                   (PIN_ALT5 | PIN_PORTC | PIN0)
#define PIN_SDRAM_A23                   (PIN_ALT5 | PIN_PORTB | PIN18)
#define PIN_SDRAM_CAS                   (PIN_ALT5 | PIN_PORTB | PIN0)
#define PIN_SDRAM_CKE_1                 (PIN_ALT2 | PIN_PORTB | PIN19)
#define PIN_SDRAM_CKE_2                 (PIN_ALT5 | PIN_PORTD | PIN7)
#define PIN_SDRAM_CS0                   (PIN_ALT5 | PIN_PORTB | PIN3)
#define PIN_SDRAM_CS1                   (PIN_ALT5 | PIN_PORTB | PIN4)
#define PIN_SDRAM_D0                    (PIN_ALT5 | PIN_PORTC | PIN29)
#define PIN_SDRAM_D1                    (PIN_ALT5 | PIN_PORTC | PIN28)
#define PIN_SDRAM_D2                    (PIN_ALT5 | PIN_PORTC | PIN27)
#define PIN_SDRAM_D3                    (PIN_ALT5 | PIN_PORTC | PIN26)
#define PIN_SDRAM_D4                    (PIN_ALT5 | PIN_PORTC | PIN25)
#define PIN_SDRAM_D5                    (PIN_ALT5 | PIN_PORTC | PIN24)
#define PIN_SDRAM_D6                    (PIN_ALT5 | PIN_PORTB | PIN15)
#define PIN_SDRAM_D7                    (PIN_ALT5 | PIN_PORTB | PIN14)
#define PIN_SDRAM_D8                    (PIN_ALT5 | PIN_PORTB | PIN13)
#define PIN_SDRAM_D9                    (PIN_ALT5 | PIN_PORTB | PIN12)
#define PIN_SDRAM_D10                   (PIN_ALT5 | PIN_PORTA | PIN31)
#define PIN_SDRAM_D11                   (PIN_ALT5 | PIN_PORTA | PIN30)
#define PIN_SDRAM_D12                   (PIN_ALT5 | PIN_PORTA | PIN27)
#define PIN_SDRAM_D13                   (PIN_ALT5 | PIN_PORTA | PIN26)
#define PIN_SDRAM_D14                   (PIN_ALT5 | PIN_PORTA | PIN25)
#define PIN_SDRAM_D15                   (PIN_ALT5 | PIN_PORTA | PIN24)
#define PIN_SDRAM_D16                   (PIN_ALT5 | PIN_PORTB | PIN17)
#define PIN_SDRAM_D17                   (PIN_ALT5 | PIN_PORTB | PIN16)
#define PIN_SDRAM_D18                   (PIN_ALT5 | PIN_PORTB | PIN11)
#define PIN_SDRAM_D19                   (PIN_ALT5 | PIN_PORTB | PIN10)
#define PIN_SDRAM_D20                   (PIN_ALT5 | PIN_PORTB | PIN9)
#define PIN_SDRAM_D21                   (PIN_ALT5 | PIN_PORTB | PIN8)
#define PIN_SDRAM_D22                   (PIN_ALT5 | PIN_PORTB | PIN7)
#define PIN_SDRAM_D23                   (PIN_ALT5 | PIN_PORTB | PIN6)
#define PIN_SDRAM_D24                   (PIN_ALT5 | PIN_PORTC | PIN15)
#define PIN_SDRAM_D25                   (PIN_ALT5 | PIN_PORTC | PIN14)
#define PIN_SDRAM_D26                   (PIN_ALT5 | PIN_PORTC | PIN13)
#define PIN_SDRAM_D27                   (PIN_ALT5 | PIN_PORTC | PIN12)
#define PIN_SDRAM_D28                   (PIN_ALT5 | PIN_PORTB | PIN23)
#define PIN_SDRAM_D29                   (PIN_ALT5 | PIN_PORTB | PIN22)
#define PIN_SDRAM_D30                   (PIN_ALT5 | PIN_PORTB | PIN21)
#define PIN_SDRAM_D31                   (PIN_ALT5 | PIN_PORTB | PIN20)
#define PIN_SDRAM_DQM0                  (PIN_ALT5 | PIN_PORTC | PIN19)
#define PIN_SDRAM_DQM1                  (PIN_ALT5 | PIN_PORTC | PIN18)
#define PIN_SDRAM_DQM2                  (PIN_ALT5 | PIN_PORTC | PIN16)
#define PIN_SDRAM_DQM3                  (PIN_ALT5 | PIN_PORTC | PIN17)
#define PIN_SDRAM_RAS                   (PIN_ALT5 | PIN_PORTB | PIN1)
#define PIN_SDRAM_WE                    (PIN_ALT5 | PIN_PORTB | PIN2)

/* SPI */

#define PIN_SPI0_PCS0_1                 (PIN_ALT2 | PIN_PORTA | PIN14)
#define PIN_SPI0_PCS0_2                 (PIN_ALT2 | PIN_PORTC | PIN4)
#define PIN_SPI0_PCS0_3                 (PIN_ALT2 | PIN_PORTD | PIN0)
#define PIN_SPI0_PCS0_4                 (PIN_ALT2 | PIN_PORTE | PIN16)
#define PIN_SPI0_PCS1_1                 (PIN_ALT2 | PIN_PORTC | PIN3)
#define PIN_SPI0_PCS1_2                 (PIN_ALT2 | PIN_PORTD | PIN4)
#define PIN_SPI0_PCS2_1                 (PIN_ALT2 | PIN_PORTC | PIN2)
#define PIN_SPI0_PCS2_2                 (PIN_ALT2 | PIN_PORTD | PIN5)
#define PIN_SPI0_PCS3_1                 (PIN_ALT2 | PIN_PORTC | PIN1)
#define PIN_SPI0_PCS3_2                 (PIN_ALT2 | PIN_PORTD | PIN6)
#define PIN_SPI0_PCS4                   (PIN_ALT2 | PIN_PORTC | PIN0)
#define PIN_SPI0_PCS5                   (PIN_ALT3 | PIN_PORTB | PIN23)
#define PIN_SPI0_SCK_1                  (PIN_ALT2 | PIN_PORTA | PIN15)
#define PIN_SPI0_SCK_2                  (PIN_ALT2 | PIN_PORTC | PIN5)
#define PIN_SPI0_SCK_3                  (PIN_ALT2 | PIN_PORTD | PIN1)
#define PIN_SPI0_SCK_4                  (PIN_ALT2 | PIN_PORTE | PIN17)
#define PIN_SPI0_SIN_1                  (PIN_ALT2 | PIN_PORTA | PIN17)
#define PIN_SPI0_SIN_2                  (PIN_ALT2 | PIN_PORTC | PIN7)
#define PIN_SPI0_SIN_3                  (PIN_ALT2 | PIN_PORTD | PIN3)
#define PIN_SPI0_SIN_4                  (PIN_ALT2 | PIN_PORTE | PIN19)
#define PIN_SPI0_SOUT_1                 (PIN_ALT2 | PIN_PORTA | PIN16)
#define PIN_SPI0_SOUT_2                 (PIN_ALT2 | PIN_PORTC | PIN6)
#define PIN_SPI0_SOUT_3                 (PIN_ALT2 | PIN_PORTD | PIN2)
#define PIN_SPI0_SOUT_4                 (PIN_ALT2 | PIN_PORTE | PIN18)

#define PIN_SPI1_PCS0_1                 (PIN_ALT2 | PIN_PORTB | PIN10)
#define PIN_SPI1_PCS0_2                 (PIN_ALT2 | PIN_PORTE | PIN5)
#define PIN_SPI1_PCS0_3                 (PIN_ALT7 | PIN_PORTD | PIN4)
#define PIN_SPI1_PCS1_1                 (PIN_ALT2 | PIN_PORTB | PIN9)
#define PIN_SPI1_PCS1_2                 (PIN_ALT2 | PIN_PORTE | PIN0)
#define PIN_SPI1_PCS2                   (PIN_ALT2 | PIN_PORTE | PIN3)
#define PIN_SPI1_SCK_1                  (PIN_ALT2 | PIN_PORTB | PIN11)
#define PIN_SPI1_SCK_2                  (PIN_ALT2 | PIN_PORTE | PIN1)
#define PIN_SPI1_SCK_3                  (PIN_ALT7 | PIN_PORTD | PIN5)
#define PIN_SPI1_SCK_4                  (PIN_ALT7 | PIN_PORTE | PIN2)
#define PIN_SPI1_SIN_1                  (PIN_ALT2 | PIN_PORTB | PIN17)
#define PIN_SPI1_SIN_2                  (PIN_ALT2 | PIN_PORTE | PIN4)
#define PIN_SPI1_SIN_3                  (PIN_ALT7 | PIN_PORTD | PIN7)
#define PIN_SPI1_SIN_4                  (PIN_ALT7 | PIN_PORTE | PIN1)
#define PIN_SPI1_SOUT_1                 (PIN_ALT2 | PIN_PORTB | PIN16)
#define PIN_SPI1_SOUT_2                 (PIN_ALT2 | PIN_PORTE | PIN2)
#define PIN_SPI1_SOUT_3                 (PIN_ALT7 | PIN_PORTD | PIN6)
#define PIN_SPI1_SOUT_4                 (PIN_ALT7 | PIN_PORTE | PIN3)

#define PIN_SPI2_PCS0_1                 (PIN_ALT2 | PIN_PORTB | PIN20)
#define PIN_SPI2_PCS0_2                 (PIN_ALT2 | PIN_PORTD | PIN11)
#define PIN_SPI2_PCS1                   (PIN_ALT2 | PIN_PORTD | PIN15)
#define PIN_SPI2_SCK_1                  (PIN_ALT2 | PIN_PORTB | PIN21)
#define PIN_SPI2_SCK_2                  (PIN_ALT2 | PIN_PORTD | PIN12)
#define PIN_SPI2_SIN_1                  (PIN_ALT2 | PIN_PORTB | PIN23)
#define PIN_SPI2_SIN_2                  (PIN_ALT2 | PIN_PORTD | PIN14)
#define PIN_SPI2_SOUT_1                 (PIN_ALT2 | PIN_PORTB | PIN22)
#define PIN_SPI2_SOUT_2                 (PIN_ALT2 | PIN_PORTD | PIN13)
#define PIN_SPI3_PCS0                   (PIN_ALT4 | PIN_PORTE | PIN20)
#define PIN_SPI3_SCK                    (PIN_ALT4 | PIN_PORTE | PIN21)
#define PIN_SPI3_SIN                    (PIN_ALT4 | PIN_PORTE | PIN23)
#define PIN_SPI3_SOUT                   (PIN_ALT4 | PIN_PORTE | PIN22)

#define PIN_TPM_CLKIN0_1                (PIN_ALT7 | PIN_PORTA | PIN18)
#define PIN_TPM_CLKIN0_2                (PIN_ALT7 | PIN_PORTB | PIN16)
#define PIN_TPM_CLKIN0_3                (PIN_ALT7 | PIN_PORTC | PIN12)
#define PIN_TPM_CLKIN1_1                (PIN_ALT7 | PIN_PORTA | PIN19)
#define PIN_TPM_CLKIN1_2                (PIN_ALT7 | PIN_PORTA | PIN20)
#define PIN_TPM_CLKIN1_3                (PIN_ALT7 | PIN_PORTB | PIN17)
#define PIN_TPM_CLKIN1_4                (PIN_ALT7 | PIN_PORTC | PIN13)

/* Timer/PWM Module (TPM) */

#define PIN_TPM1_CH0_1                  (PIN_ALT6 | PIN_PORTA | PIN8)
#define PIN_TPM1_CH0_2                  (PIN_ALT6 | PIN_PORTB | PIN0)
#define PIN_TPM1_CH0_3                  (PIN_ALT6 | PIN_PORTB | PIN12)
#define PIN_TPM1_CH0_4                  (PIN_ALT7 | PIN_PORTA | PIN12)
#define PIN_TPM1_CH1_1                  (PIN_ALT6 | PIN_PORTA | PIN9)
#define PIN_TPM1_CH1_2                  (PIN_ALT6 | PIN_PORTB | PIN1)
#define PIN_TPM1_CH1_3                  (PIN_ALT6 | PIN_PORTB | PIN13)
#define PIN_TPM1_CH1_4                  (PIN_ALT7 | PIN_PORTA | PIN13)

#define PIN_TPM2_CH0_1                  (PIN_ALT6 | PIN_PORTA | PIN10)
#define PIN_TPM2_CH0_2                  (PIN_ALT6 | PIN_PORTB | PIN18)
#define PIN_TPM2_CH1_1                  (PIN_ALT6 | PIN_PORTA | PIN11)
#define PIN_TPM2_CH1_2                  (PIN_ALT6 | PIN_PORTB | PIN19)

/* Trace */

#define PIN_TRACE_CLKOUT_1              (PIN_ALT4 | PIN_PORTA | PIN12)
#define PIN_TRACE_CLKOUT_2              (PIN_ALT7 | PIN_PORTA | PIN6)
#define PIN_TRACE_D0_1                  (PIN_ALT4 | PIN_PORTA | PIN16)
#define PIN_TRACE_D0_2                  (PIN_ALT7 | PIN_PORTA | PIN10)
#define PIN_TRACE_D1_1                  (PIN_ALT4 | PIN_PORTA | PIN15)
#define PIN_TRACE_D1_2                  (PIN_ALT7 | PIN_PORTA | PIN9)
#define PIN_TRACE_D2_1                  (PIN_ALT4 | PIN_PORTA | PIN14)
#define PIN_TRACE_D2_2                  (PIN_ALT7 | PIN_PORTA | PIN8)
#define PIN_TRACE_D3_1                  (PIN_ALT4 | PIN_PORTA | PIN13)
#define PIN_TRACE_D3_2                  (PIN_ALT7 | PIN_PORTA | PIN7)
#define PIN_TRACE_SWO                   (PIN_ALT7 | PIN_PORTA | PIN2)

/* USB */

#define PIN_USB0_CLKIN_1                (PIN_ALT2 | PIN_PORTA | PIN5)
#define PIN_USB0_CLKIN_2                (PIN_ALT7 | PIN_PORTA | PIN22)
#define PIN_USB0_SOF_OUT_1              (PIN_ALT3 | PIN_PORTC | PIN7)
#define PIN_USB0_SOF_OUT_2              (PIN_ALT4 | PIN_PORTC | PIN0)
#define PIN_USB0_SOF_OUT_3              (PIN_ALT7 | PIN_PORTE | PIN5)

#define PIN_USB1_ID                     (PIN_ALT7 | PIN_PORTA | PIN11)

/********************************************************************************************
 * Public Types
 ********************************************************************************************/

/********************************************************************************************
 * Public Data
 ********************************************************************************************/

/********************************************************************************************
 * Public Functions
 ********************************************************************************************/

#endif /* KINETIS_K28 */
#endif /* __ARCH_ARM_SRC_KINETIS_HARDWARE_KINETIS_K28PINMUX_H */
