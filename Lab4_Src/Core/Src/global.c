/*
 * global.c
 *
 *  Created on: Nov 17, 2024
 *      Author: HP WORK
 */

#include "global.h"

void LED_RED_Blink(void)
{
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

void LED_GREEN_Blink(void)
{
	HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_BLUE_Pin);
}

void LED_YELLOW_Blink(void)
{
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
}

void LED_PURPLE_Blink(void)
{
	HAL_GPIO_TogglePin(LED_PURPLE_GPIO_Port, LED_PURPLE_Pin);
}

void LED_BLUE_Blink(void)
{
	HAL_GPIO_TogglePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin);
}
