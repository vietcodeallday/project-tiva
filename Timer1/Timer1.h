/*
 * Timer1.h
 *
 *  Created on: 31 thg 3, 2023
 *      Author: viet
 */

#ifndef TIMER1_TIMER1_H_
#define TIMER1_TIMER1_H_

#include"../include.h"
extern float distance_out;
extern uint32_t pulse_start_out; // thời điểm bắt đầu xung echo
extern uint32_t pulse_end_out;   // thời điểm kết thúc xung echo
extern bool flag_out;
extern uint32_t num_out;
extern uint32_t check;

extern float filter_out[30];
extern void Timer1A_ISR(void);
extern void Config_Timer1(void);



#endif /* TIMER1_TIMER1_H_ */
