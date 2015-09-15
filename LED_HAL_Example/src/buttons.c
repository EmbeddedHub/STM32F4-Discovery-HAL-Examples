/*
 * buttons.c
 *
 *  Created on: 15 set 2015
 *      Author: raidenfox1
 */

#include "buttons.h"

void init_buttons(){
	// Enabling GPIOA for buttons
	__HAL_RCC_GPIOA_CLK_ENABLE();

	// Configuring user button used to toggle a led
	GPIO_InitTypeDef gpioa;
	gpioa.Mode = GPIO_MODE_INPUT;
	gpioa.Pin = USERBTN;
    gpioa.Pull = GPIO_NOPULL;
    gpioa.Speed = GPIO_SPEED_FAST;

    // Configuration updated
    HAL_GPIO_Init(GPIOA, &gpioa);
}


