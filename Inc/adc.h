/*
 * adc.h
 *
 *  Created on: Jul 29, 2025
 *      Author: osmannevfelunlu
 */

#ifndef ADC_H_
#define ADC_H_

#include "base.h"

#define ADC_SR_OFFSET      (0x00)
#define ADC_CR1_OFFSET     (0x04)
#define ADC_CR2_OFFSET     (0x08)
#define ADC_SMPR1_OFFSET   (0x0C)
#define ADC_SMPR2_OFFSET   (0x10)
#define ADC_JOFR1_OFFSET   (0x14)
#define ADC_JOFR2_OFFSET   (0x18)
#define ADC_JOFR3_OFFSET   (0x1C)
#define ADC_JOFR4_OFFSET   (0x20)
#define ADC_HTR_OFFSET     (0x24)
#define ADC_LTR_OFFSET     (0x28)
#define ADC_SQR1_OFFSET    (0x2C)
#define ADC_SQR2_OFFSET    (0x30)
#define ADC_SQR3_OFFSET    (0x34)
#define ADC_JSQR_OFFSET    (0x38)
#define ADC_JDR1_OFFSET    (0x3C)
#define ADC_JDR2_OFFSET    (0x40)
#define ADC_JDR3_OFFSET    (0x44)
#define ADC_JDR4_OFFSET    (0x48)
#define ADC_DR_OFFSET      (0x4C)

#define ADC1_SR            (*(volatile unsigned int *)(ADC1_PERIPH + ADC_SR_OFFSET))
#define ADC1_CR1           (*(volatile unsigned int *)(ADC1_PERIPH + ADC_CR1_OFFSET))
#define ADC1_CR2           (*(volatile unsigned int *)(ADC1_PERIPH + ADC_CR2_OFFSET))
#define ADC1_SMPR1         (*(volatile unsigned int *)(ADC1_PERIPH + ADC_SMPR1_OFFSET))
#define ADC1_SMPR2         (*(volatile unsigned int *)(ADC1_PERIPH + ADC_SMPR2_OFFSET))
#define ADC1_JOFR1         (*(volatile unsigned int *)(ADC1_PERIPH + ADC_JOFR1_OFFSET))
#define ADC1_JOFR2         (*(volatile unsigned int *)(ADC1_PERIPH + ADC_JOFR2_OFFSET))
#define ADC1_JOFR3         (*(volatile unsigned int *)(ADC1_PERIPH + ADC_JOFR3_OFFSET))
#define ADC1_JOFR4         (*(volatile unsigned int *)(ADC1_PERIPH + ADC_JOFR4_OFFSET))
#define ADC1_HTR           (*(volatile unsigned int *)(ADC1_PERIPH + ADC_HTR_OFFSET))
#define ADC1_LTR           (*(volatile unsigned int *)(ADC1_PERIPH + ADC_LTR_OFFSET))
#define ADC1_SQR1          (*(volatile unsigned int *)(ADC1_PERIPH + ADC_SQR1_OFFSET))
#define ADC1_SQR2          (*(volatile unsigned int *)(ADC1_PERIPH + ADC_SQR2_OFFSET))
#define ADC1_SQR3          (*(volatile unsigned int *)(ADC1_PERIPH + ADC_SQR3_OFFSET))
#define ADC1_JSQR          (*(volatile unsigned int *)(ADC1_PERIPH + ADC_JSQR_OFFSET))
#define ADC1_JDR1          (*(volatile unsigned int *)(ADC1_PERIPH + ADC_JDR1_OFFSET))
#define ADC1_JDR2          (*(volatile unsigned int *)(ADC1_PERIPH + ADC_JDR2_OFFSET))
#define ADC1_JDR3          (*(volatile unsigned int *)(ADC1_PERIPH + ADC_JDR3_OFFSET))
#define ADC1_JDR4          (*(volatile unsigned int *)(ADC1_PERIPH + ADC_JDR4_OFFSET))
#define ADC1_DR            (*(volatile unsigned int *)(ADC1_PERIPH + ADC_DR_OFFSET))

#endif /* ADC_H_ */
