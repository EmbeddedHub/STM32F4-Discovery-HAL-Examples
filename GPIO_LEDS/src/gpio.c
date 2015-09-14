/*
 * gpio.c
 *
 *  Created on: 14 set 2015
 *      Author: EmbeddedHub
 */

#include "gpio.h"

void init(){
	// Enabling clock on GPIOD
	__HAL_RCC_GPIOD_CLK_ENABLE();

	// GPIOD Initialization
	GPIO_InitTypeDef gpio;
    gpio.Mode = GPIO_MODE_OUTPUT_PP;
    gpio.Pin = LED1;
    gpio.Pull = GPIO_NOPULL;
    gpio.Speed = GPIO_SPEED_FAST;

    // Configuration updated
    HAL_GPIO_Init(GPIOD, &gpio);

    // Simple Test
    HAL_GPIO_WritePin(GPIOD, LED1 , OFF);
}
