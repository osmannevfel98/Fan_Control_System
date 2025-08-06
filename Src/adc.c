/*
 * adc.c
 *
 *  Created on: Jul 29, 2025
 *      Author: osmannevfelunlu
 */

#include "adc.h"
#include "base.h"
#include "rcc.h"
#include <stdint.h>

#define ADC1EN     (1 << 9)
#define ADON       (1 << 0)
#define SWSTART    (1 << 22)

void adc_init(void) {
    // enable clock for ADC1
    RCC_APB2ENR |= ADC1EN;

    // enable ADC1
    ADC1_CR2 |= ADON;

    // channel selection, channel 0
    ADC1_SQR3 |= 0;

    // sw start adc
    ADC1_CR2 |= SWSTART;
}


uint16_t adc_read(void) {
    ADC1_CR2 |= (1 << 22);

    // wait 4 EOC
    while (!(ADC1_SR & (1 << 1)));

    // read adc
    return (uint16_t)(ADC1_DR);
}
