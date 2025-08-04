/*
 * rcc.c
 *
 *  Created on: Aug 4, 2025
 *      Author: osmannevfelunlu
 */
#include "rcc.h"

void rcc_setup(){
	RCC_APB2ENR |= (1 << 2); // Enable GPIOA
	RCC_APB1ENR |= (1 << 2); // Enable TIM4
	RCC_APB2ENR |= (1 << 3); // Enable GPIOB
	RCC_APB2ENR |= (1 << 9); // Enable ADC1
}

