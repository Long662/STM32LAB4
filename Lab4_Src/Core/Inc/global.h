/*
 * Global.h
 *
 *  Created on: Nov 17, 2024
 *      Author: HP WORK
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "scheduler.h"
#include "timer.h"
#include "watchdog.h"
#include "stdint.h"

typedef enum {
	ERROR_SCH_TOO_MANY_TASKS,
	ERROR_SCH_CANNOT_DELETE_TASK,
	RETURN_ERROR,
	RETURN_NORMAL
} Error_code;

extern Error_code Error_code_G;
extern Error_code Last_error_code_G;
extern uint32_t Error_tick_count_G;

void System_Initialization(void);

void LED_RED_Blink(void);
void LED_GREEN_Blink(void);
void LED_YELLOW_Blink(void);
void LED_PURPLE_Blink(void);
void LED_BLUE_Blink(void);


#endif /* INC_GLOBAL_H_ */
