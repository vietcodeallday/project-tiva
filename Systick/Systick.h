/*
 * Systick.h
 *
 *  Created on: 2 thg 4, 2023
 *      Author: viet
 */

#ifndef SYSTICK_SYSTICK_H_
#define SYSTICK_SYSTICK_H_

extern volatile uint32_t counter;
extern volatile uint32_t restart;
extern volatile uint32_t flag_sys;
extern void SysTick_Handler(void);
extern void SysTick_Init(void);



#endif /* SYSTICK_SYSTICK_H_ */
