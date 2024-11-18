/*
 * timer.c
 *
 *  Created on: Nov 18, 2024
 *      Author: HP WORK
 */
#include "timer.h"

void HAL_TIM_PeriodElapsedCallback (TIM_HandleTypeDef *htim)
{
	SCH_Update();
}
