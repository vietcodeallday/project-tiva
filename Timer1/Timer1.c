/*
 * Timer1.c
 *
 *  Created on: 31 thg 3, 2023
 *      Author: viet
 */

#include"../include.h"
#include"../GPIO/GPIO.h"
#include"../Filter/Filter.h"
#include"Timer1.h"

float filter_out[30]={0};
uint32_t num_out=0;
uint32_t check=0;
bool flag_out=false;
float distance_out=0;
uint32_t pulse_start_out=0; // thời điểm bắt đầu xung echo
uint32_t pulse_end_out=0;   // thời điểm kết thúc xung echo

extern void Timer1A_ISR(void){
    GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_6, 0);
    SysCtlDelay(SysCtlClockGet() / 3000000 * 2); // delay 2us
    GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_6, GPIO_PIN_6);
    SysCtlDelay(SysCtlClockGet() / 3000000 * 6); // delay 5us
    GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_6, 0);
    if (GPIOPinRead(GPIO_PORTB_BASE, GPIO_PIN_3) == GPIO_PIN_3&&flag_out==false){ // Chờ đến khi xung high xuất hiện trên chân echo
        pulse_start_out = TimerValueGet(TIMER1_BASE, TIMER_A);
        flag_out=true;
    }
    if (GPIOPinRead(GPIO_PORTB_BASE, GPIO_PIN_3) == 0&&flag_out==true){ // Chờ đến khi xung high trên chân echo kết thúc
        pulse_end_out = TimerValueGet(TIMER1_BASE, TIMER_A);
        flag_out=false;
        TimerLoadSet(TIMER1_BASE, TIMER_A, 0xFFFFFFFF);
    }
    if(flag_out==false){
        distance_out =(0.000343*(pulse_start_out-pulse_end_out)/2)+1.5;
        filter_out[num_out]=distance_out;
        filter_array_out();
        num_out++;
        if(num_out==21) num_out=0;
    }
}

extern void Config_Timer1(void){
    SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER1);
    TimerConfigure(TIMER1_BASE, TIMER_CFG_PERIODIC);
    TimerLoadSet(TIMER1_BASE, TIMER_A, 0xFFFFFFFF);
    TimerEnable(TIMER1_BASE, TIMER_A);
}


