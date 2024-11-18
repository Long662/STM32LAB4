/*
 * watchdog.h
 *
 *  Created on: Nov 18, 2024
 *      Author: HP WORK
 */

#ifndef INC_WATCHDOG_H_
#define INC_WATCHDOG_H_

#include "main.h"

static uint32_t counter_for_watchdog = 0;

void Watchdog_Refresh(void);
unsigned char Is_Watchdog_Reset(void);
void Watchdog_Counting(void);
void Reset_Watchdog_Counting(void);

#endif /* INC_WATCHDOG_H_ */
