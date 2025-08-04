/*
 * tim.h
 *
 *  Created on: Aug 4, 2025
 *      Author: osmannevfelunlu
 */

#ifndef TIM_H_
#define TIM_H_

#include "base.h"

#define TIM_CR1_OFFSET     (0x00)
#define TIM_CR2_OFFSET     (0x04)
#define TIM_SMCR_OFFSET    (0x08)
#define TIM_DIER_OFFSET    (0x0C)
#define TIM_SR_OFFSET      (0x10)
#define TIM_EGR_OFFSET     (0x14)
#define TIM_CCMR1_OFFSET   (0x18)
#define TIM_CCMR2_OFFSET   (0x1C)
#define TIM_CCER_OFFSET    (0x20)
#define TIM_CNT_OFFSET     (0x24)
#define TIM_PSC_OFFSET     (0x28)
#define TIM_ARR_OFFSET     (0x2C)
#define TIM_CCR1_OFFSET    (0x34)
#define TIM_CCR2_OFFSET    (0x38)
#define TIM_CCR3_OFFSET    (0x3C)
#define TIM_CCR4_OFFSET    (0x40)
#define TIM_DCR_OFFSET     (0x48)
#define TIM_DMAR_OFFSET    (0x4C)

#define TIM4_CR1           (*(volatile unsigned int *)(TIM4_PERIPH + TIM_CR1_OFFSET))
#define TIM4_CR2           (*(volatile unsigned int *)(TIM4_PERIPH + TIM_CR2_OFFSET))
#define TIM4_SMCR          (*(volatile unsigned int *)(TIM4_PERIPH + TIM_SMCR_OFFSET))
#define TIM4_DIER          (*(volatile unsigned int *)(TIM4_PERIPH + TIM_DIER_OFFSET))
#define TIM4_SR            (*(volatile unsigned int *)(TIM4_PERIPH + TIM_SR_OFFSET))
#define TIM4_EGR           (*(volatile unsigned int *)(TIM4_PERIPH + TIM_EGR_OFFSET))
#define TIM4_CCMR1         (*(volatile unsigned int *)(TIM4_PERIPH + TIM_CCMR1_OFFSET))
#define TIM4_CCMR2         (*(volatile unsigned int *)(TIM4_PERIPH + TIM_CCMR2_OFFSET))
#define TIM4_CCER          (*(volatile unsigned int *)(TIM4_PERIPH + TIM_CCER_OFFSET))
#define TIM4_CNT           (*(volatile unsigned int *)(TIM4_PERIPH + TIM_CNT_OFFSET))
#define TIM4_PSC           (*(volatile unsigned int *)(TIM4_PERIPH + TIM_PSC_OFFSET))
#define TIM4_ARR           (*(volatile unsigned int *)(TIM4_PERIPH + TIM_ARR_OFFSET))
#define TIM4_CCR1          (*(volatile unsigned int *)(TIM4_PERIPH + TIM_CCR1_OFFSET))
#define TIM4_CCR2          (*(volatile unsigned int *)(TIM4_PERIPH + TIM_CCR2_OFFSET))
#define TIM4_CCR3          (*(volatile unsigned int *)(TIM4_PERIPH + TIM_CCR3_OFFSET))
#define TIM4_CCR4          (*(volatile unsigned int *)(TIM4_PERIPH + TIM_CCR4_OFFSET))
#define TIM4_DCR           (*(volatile unsigned int *)(TIM4_PERIPH + TIM_DCR_OFFSET))
#define TIM4_DMAR          (*(volatile unsigned int *)(TIM4_PERIPH + TIM_DMAR_OFFSET))ß

#endif /* TIM_H_ */
