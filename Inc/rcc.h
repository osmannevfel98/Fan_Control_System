/*
 * rcc.h
 *
 *  Created on: Aug 4, 2025
 *      Author: osmannevfelunlu
 */

#ifndef RCC_H_
#define RCC_H_

#include "base.h"

void rcc_setup();

#define RCC_CR_OFFSET       (0x00)
#define RCC_CFGR_OFFSET     (0x04)
#define RCC_CIR_OFFSET      (0x08)
#define RCC_APB2RSTR_OFFSET (0x0C)
#define RCC_APB1RSTR_OFFSET (0x10)
#define RCC_AHBENR_OFFSET   (0x14)
#define RCC_APB2ENR_OFFSET  (0x18)
#define RCC_APB1ENR_OFFSET  (0x1C)
#define RCC_BDCR_OFFSET     (0x20)
#define RCC_CSR_OFFSET      (0x24)

#define RCC_CR              (*(volatile unsigned int *)(RCC_PERIPH + RCC_CR_OFFSET))
#define RCC_CFGR            (*(volatile unsigned int *)(RCC_PERIPH + RCC_CFGR_OFFSET))
#define RCC_CIR             (*(volatile unsigned int *)(RCC_PERIPH + RCC_CIR_OFFSET))
#define RCC_APB2RSTR        (*(volatile unsigned int *)(RCC_PERIPH + RCC_APB2RSTR_OFFSET))
#define RCC_APB1RSTR        (*(volatile unsigned int *)(RCC_PERIPH + RCC_APB1RSTR_OFFSET))
#define RCC_AHBENR          (*(volatile unsigned int *)(RCC_PERIPH + RCC_AHBENR_OFFSET))
#define RCC_APB2ENR         (*(volatile unsigned int *)(RCC_PERIPH + RCC_APB2ENR_OFFSET))
#define RCC_APB1ENR         (*(volatile unsigned int *)(RCC_PERIPH + RCC_APB1ENR_OFFSET))
#define RCC_BDCR            (*(volatile unsigned int *)(RCC_PERIPH + RCC_BDCR_OFFSET))
#define RCC_CSR             (*(volatile unsigned int *)(RCC_PERIPH + RCC_CSR_OFFSET))

#endif /* RCC_H_ */
