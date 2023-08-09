/*
 * Timer_0.c
 *
 *  Created on: 31 thg 3, 2023
 *      Author: viet
 */

#include"../include.h"
#include"../GPIO/GPIO.h"
#include"Timer_0.h"
#include"../Filter/Filter.h"

float filter_in[30]={0};
uint32_t num_in=0;
bool flag_in=false;
float distance_in=0;
uint32_t pulse_start_in=0; // thời điểm bắt đầu xung echo
uint32_t pulse_end_in=0;   // thời điểm kết thúc xung echo

extern void Timer0A_ISR(void){
    GPIOPinWrite(GPIO_PORTF_BASE, TRIG_PIN, 0);
    SysCtlDelay(SysCtlClockGet() / 3000000 * 2); // delay 2us
    GPIOPinWrite(GPIO_PORTF_BASE, TRIG_PIN, TRIG_PIN);
    SysCtlDelay(SysCtlClockGet() / 3000000 * 6); // delay 5us
    GPIOPinWrite(GPIO_PORTF_BASE, TRIG_PIN, 0);

    if (GPIOPinRead(GPIO_PORTC_BASE, ECHO_PIN) == ECHO_PIN&&flag_in==false){ // Chờ đến khi xung high xuất hiện trên chân echo
        pulse_start_in = TimerValueGet(TIMER0_BASE, TIMER_A);
        flag_in=true;
    }
    if (GPIOPinRead(GPIO_PORTC_BASE, ECHO_PIN) == 0&&flag_in==true){ // Chờ đến khi xung high trên chân echo kết thúc
        pulse_end_in = TimerValueGet(TIMER0_BASE, TIMER_A);
        flag_in=false;
        TimerLoadSet(TIMER0_BASE, TIMER_A, 0xFFFFFFFF);
    }
    if(flag_in==false){
        distance_in =(0.000343*(pulse_start_in-pulse_end_in)/2)+1.5;
        filter_in[num_in]=distance_in;
        filter_array_in();
        num_in++;
        if(num_in==21) num_in=0;
    }
}

extern void Config_Timer(void){
    SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER0);
    TimerConfigure(TIMER0_BASE, TIMER_CFG_PERIODIC);
    TimerLoadSet(TIMER0_BASE, TIMER_A, 0xFFFFFFFF);
    TimerEnable(TIMER0_BASE, TIMER_A);
 }




