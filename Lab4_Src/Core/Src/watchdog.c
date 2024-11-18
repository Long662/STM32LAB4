/*
 * watchdog.c
 *
 *  Created on: Nov 18, 2024
 *      Author: HP WORK
 */

#include "watchdog.h"

/*
 void Watchdog_Refresh(void)
{
	HAL_IWDG_Refresh(&hiwdg);
}
*/

unsigned char Is_Watchdog_Reset(void)
{
	if(counter_for_watchdog > 3)
	{
		return 1;
	}
	return 0;
}

void Watchdog_Counting(void)
{
	counter_for_watchdog++;
}

void Reset_Watchdog_Counting(void)
{
	counter_for_watchdog = 0;
}
