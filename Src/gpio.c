/*
 * gpio.c
 *
 *  Created on: Aug 6, 2025
 *      Author: osmannevfelunlu
 */

#include "gpio.h"
#include "base.h"
#include "rcc.h"

#define GPIOAEN (1 << 2)
#define GPIOBEN (1 << 3)

void gpio_init(void){
	// enable clock access
	RCC_APB2ENR |= GPIOAEN;
	RCC_APB2ENR |= GPIOBEN;

	// set the mode of pins
    GPIOA_CRL &= ~(0xF << 0); // Clear PA0
    GPIOA_CRL |= (0x0 << 0); // Set PA0 as analog input

    GPIOB_CRL &= ~(0xF << 24); // Clear PB6
    GPIOB_CRL |= (0xB << 24); // Set PB6 as AFIO Push-Pull
}
