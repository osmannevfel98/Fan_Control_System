/*
 * gpio.h
 *
 *  Created on: Aug 4, 2025
 *      Author: osmannevfelunlu
 */

#ifndef GPIO_H_
#define GPIO_H_

#include "base.h"

#define GPIO_CRL_OFFSET     (0x00)
#define GPIO_CRH_OFFSET     (0x04)
#define GPIO_IDR_OFFSET     (0x08)
#define GPIO_ODR_OFFSET     (0x0C)
#define GPIO_BSRR_OFFSET    (0x10)
#define GPIO_BRR_OFFSET     (0x14)
#define GPIO_LCKR_OFFSET    (0x18)

#define GPIOA_CRL           (*(volatile unsigned int *)(GPIOA_PERIPH + GPIO_CRL_OFFSET))
#define GPIOA_CRH           (*(volatile unsigned int *)(GPIOA_PERIPH + GPIO_CRH_OFFSET))
#define GPIOA_IDR           (*(volatile unsigned int *)(GPIOA_PERIPH + GPIO_IDR_OFFSET))
#define GPIOA_ODR           (*(volatile unsigned int *)(GPIOA_PERIPH + GPIO_ODR_OFFSET))
#define GPIOA_BSRR          (*(volatile unsigned int *)(GPIOA_PERIPH + GPIO_BSRR_OFFSET))
#define GPIOA_BRR           (*(volatile unsigned int *)(GPIOA_PERIPH + GPIO_BRR_OFFSET))
#define GPIOA_LCKR          (*(volatile unsigned int *)(GPIOA_PERIPH + GPIO_LCKR_OFFSET))

#define GPIOB_CRL           (*(volatile unsigned int *)(GPIOB_PERIPH + GPIO_CRL_OFFSET))
#define GPIOB_CRH           (*(volatile unsigned int *)(GPIOB_PERIPH + GPIO_CRH_OFFSET))
#define GPIOB_IDR           (*(volatile unsigned int *)(GPIOB_PERIPH + GPIO_IDR_OFFSET))
#define GPIOB_ODR           (*(volatile unsigned int *)(GPIOB_PERIPH + GPIO_ODR_OFFSET))
#define GPIOB_BSRR          (*(volatile unsigned int *)(GPIOB_PERIPH + GPIO_BSRR_OFFSET))
#define GPIOB_BRR           (*(volatile unsigned int *)(GPIOB_PERIPH + GPIO_BRR_OFFSET))
#define GPIOB_LCKR          (*(volatile unsigned int *)(GPIOB_PERIPH + GPIO_LCKR_OFFSET))


#endif /* GPIO_H_ */
