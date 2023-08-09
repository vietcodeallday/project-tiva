/*
 * Timer_0.h
 *
 *  Created on: 31 thg 3, 2023
 *      Author: viet
 */

#ifndef TIMER_0_TIMER_0_H_
#define TIMER_0_TIMER_0_H_

#include"../include.h"
#define ECHO_PIN GPIO_PIN_7 // chân echo là Pc7
#define TRIG_PIN GPIO_PIN_4 // chân trig là Pf4
extern float distance_in;
extern uint32_t pulse_start_in; // thời điểm bắt đầu xung echo
extern uint32_t pulse_end_in;   // thời điểm kết thúc xung echo
extern bool flag_in;
extern uint32_t num_in;

extern float filter_in[30];
extern void Timer0A_ISR(void);
extern void Config_Timer(void);



#endif /* TIMER_0_TIMER_0_H_ */
