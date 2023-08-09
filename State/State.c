/*
 * State.c
 *
 *  Created on: 20 thg 3, 2023
 *      Author: viet
 */

#include "../Timer_0/Timer_0.h"
#include"../include.h"
#include"State.h"
#include"../Filter/Filter.h"
#include"../State_out/State_out.h"
#include"../Systick/Systick.h"
#include "../Confirm/Confirm.h"
uint32_t pri=0;
uint32_t someone_in=0;

typedef enum{OFF_STATE, SOMEONE_IN, CONFIRM_IN} state_t;
static state_t state_in=OFF_STATE;
extern void StateMachineUpdate_In(void){
    switch(state_in){
    case OFF_STATE:
        GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1,0);
        GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_3,GPIO_PIN_3);
        if (distance_fil_in<=8 && distance_fil_in>0){
            state_in=SOMEONE_IN;
            confirm[0]=1;
        }
        break;
    case SOMEONE_IN:
        GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_3,0);
        GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1,GPIO_PIN_1);
        if(distance_fil_in>=10){
            SysCtlDelay(SysCtlClockGet() / 3000000 * 200000);
            state_in=OFF_STATE;
        }
        break;
    default:
        state_in=OFF_STATE;
        confirm[0]=0;
        break;

    }

}


