/*
 * buttons.h
 *
 *  Created on: 15 set 2015
 *      Author: raidenfox1
 */

#ifndef INCLUDE_BUTTONS_H_
#define INCLUDE_BUTTONS_H_

#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_rcc.h"
#include "stm32f4xx_hal_gpio.h"

#define USERBTN GPIO_PIN_0

void init_buttons();

#endif /* INCLUDE_BUTTONS_H_ */
