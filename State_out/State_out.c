/*
 * State_out.c
 *
 *  Created on: 2 thg 4, 2023
 *      Author: viet
 */

#include "../Timer1/Timer1.h"
#include"../include.h"
#include"State_out.h"
#include"../Filter/Filter.h"
#include"../State/State.h"
#include"../Systick/Systick.h"
#include "../Confirm/Confirm.h"
uint32_t someone_out=0;
typedef enum{OFF_STATE_1, SOMEONE_OUT, CONFIRM_OUT} data_t;
static data_t state_out=OFF_STATE_1;
extern void StateMachineUpdate_Out(void){
    switch(state_out){
    case OFF_STATE_1:
        if (distance_fil_out<=8&&distance_fil_out>0){
            state_out=SOMEONE_OUT;
            confirm[1]=1;
        }
        break;
    case SOMEONE_OUT:
        if(distance_fil_out>=10){
            SysCtlDelay(SysCtlClockGet() / 3000000 * 200000);
            state_out=OFF_STATE_1;
        }
        break;
    default:
        state_out=OFF_STATE_1;
        confirm[1]=0;
        break;
    }

}


