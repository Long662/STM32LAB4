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

System_Initialization();

#endif /* INC_GLOBAL_H_ */
