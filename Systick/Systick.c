/*
 * Systick.c
 *
 *  Created on: 2 thg 4, 2023
 *      Author: viet
 */

#include"../include.h"
#include"Systick.h"

volatile uint32_t counter = 0;
volatile uint32_t restart = 0;
volatile uint32_t flag_sys=0;
extern void SysTick_Handler(void) {
    restart++;
    if(restart>=2000) restart=2000;
    if(flag_sys==1){
        counter++;
        if(counter>=2001) counter=2001;
    }
}

extern void SysTick_Init(void) {
    SysTickPeriodSet(SysCtlClockGet() / 1000);  // cấu hình chu kỳ SysTick là 1ms
    IntMasterEnable();
    SysTickIntEnable();  // cho phép ngắt SysTick
    SysTickEnable();  // bật SysTick
}

