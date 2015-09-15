//
// This file is part of the GNU ARM Eclipse distribution.
// Copyright (c) 2014 Liviu Ionescu.
//

// ----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void loop();
// Init state btn = RESET
static uint8_t lastButtonStatus = RESET;

int main(int argc, char* argv[])
{

	init_leds();
	init_buttons();
	while (1)
    {
		loop();
    }
}

void loop() {
	// Read the actual status
    uint8_t currentButtonStatus = HAL_GPIO_ReadPin(GPIOA,USERBTN);

    // If button pressed power on the led
    if (lastButtonStatus != currentButtonStatus && currentButtonStatus != RESET) {
        HAL_GPIO_WritePin(GPIOD,LED1,GPIO_PIN_SET);
    }

    // Else reset the led
    if (lastButtonStatus != currentButtonStatus && currentButtonStatus != SET) {
        HAL_GPIO_WritePin(GPIOD,ALL_LEDS,GPIO_PIN_RESET);
    }

    // Saving previous status
    lastButtonStatus = currentButtonStatus;
}
