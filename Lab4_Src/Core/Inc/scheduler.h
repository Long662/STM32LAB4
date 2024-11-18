/*
 * scheduler.h
 *
 *  Created on: Nov 17, 2024
 *      Author: HP WORK
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include "global.h"

typedef struct{
	// Pointer to the task
	void (* pTask)(void);
	// Interval (ticks) until the function will (next) be run
	uint32_t Delay;
	// Interval (ticks) between subsequent runs.
	uint32_t Period;
	// Incremented (by scheduler) when task is due to execute
	uint8_t RunMe;
	uint32_t TaskID;
} sTask;

#define SCH_MAX_TASKS	40
#define NO_TASK_ID		0
sTask SCH_tasks_G[SCH_MAX_TASKS];

void SCH_Init(void);
unsigned char SCH_Add_Task(void (* pFunction)(), unsigned int DELAY, unsigned int PERIOD);
void SCH_Update(void);
void SCH_Dispatch_Task(void);
unsigned char SCH_Delete_Task(const char TASK_INDEX);
void SCH_Report_Status(void);
void SCH_Go_To_Sleep();

#endif /* INC_SCHEDULER_H_ */
