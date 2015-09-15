/*
 * leds.h
 *
 *  Created on: 15 set 2015
 *      Author: raidenfox1
 */

#ifndef INCLUDE_LEDS_H_
#define INCLUDE_LEDS_H_

#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_rcc.h"
#include "stm32f4xx_hal_gpio.h"

#define LED1 GPIO_PIN_12
#define LED2 GPIO_PIN_13
#define LED3 GPIO_PIN_14
#define LED4 GPIO_PIN_15

#define ALL_LEDS LED1 | LED2 | LED3 | LED4

void init_leds();

#endif /* INCLUDE_LEDS_H_ */
