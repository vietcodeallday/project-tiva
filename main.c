

/**
 * main.c
 */
#include <Confirm/Confirm.h>
#include <include.h>
#include "GPIO/GPIO.h"
#include "Timer_0/Timer_0.h"
#include "Timer1/Timer1.h"
#include"State/State.h"
#include"State_out/State_out.h"
#include"Systick/Systick.h"
#include "Filter/Filter.h"
#include "Confirm/Confirm.h"
int main(void)
{
    SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN | SYSCTL_XTAL_16MHZ);
    Config_led_red();
    Config_led_green();
    SW_Start();
    Trig_0();
    Echo_0();
    Trig_1();
    Echo_1();
    Config_Timer();
    Config_Timer1();
    SysTick_Init();
    while (1)
    {
        Timer0A_ISR();
        Timer1A_ISR();
        if(restart>=2000){
            StateMachineUpdate_In();
            StateMachineUpdate_Out();
        }
        if(confirm[0]==1 && confirm[1]==0){
            Check_In();
        }
        if(confirm[0]==0 && confirm[1]==1){
            Check_Out();
        }
        if(confirm[0]==1 && confirm[1]==1){
            if(pri==1){
                Check_In();
            }
            if(pri==2){
                Check_Out();
            }
        }
        SysCtlDelay(SysCtlClockGet() / 3000000 );
    }
}
