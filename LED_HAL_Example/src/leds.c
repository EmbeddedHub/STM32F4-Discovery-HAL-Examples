/*
 * leds.c
 *
 *  Created on: 15 set 2015
 *      Author: raidenfox1
 */

#include "leds.h"
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_rcc.h"

void init_leds(){
	// Lets Active the clock on GPIOD for leds
	__HAL_RCC_GPIOD_CLK_ENABLE();

	// GPIOD Initialization
	GPIO_InitTypeDef gpio;
    gpio.Mode = GPIO_MODE_OUTPUT_PP;
    gpio.Pin = LED1;
    gpio.Pull = GPIO_NOPULL;
    gpio.Speed = GPIO_SPEED_FAST;

    // Configuration updated
    HAL_GPIO_Init(GPIOD, &gpio);
}



