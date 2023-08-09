/*
 * Sensor.c
 *
 *  Created on: 20 thg 3, 2023
 *      Author: viet
 */

#include "Confirm.h"
#include"../include.h"
#include"../Systick/Systick.h"
#include"../State/State.h"
#include"../State_out/State_out.h"
uint16_t confirm[2]={0};
extern void Check_In(void){
    flag_sys=1;
    pri=1;
    if(counter>=1950 && counter<=2000){
        if(confirm[1]==1){
            someone_in++;
            counter=0;
        }
        confirm[0]=0;
        confirm[1]=0;
        flag_sys=0;
        counter=0;
    }
    if(counter==2001){
        confirm[0]=0;
        confirm[1]=0;
        flag_sys=0;
        counter=0;
    }
}

extern void Check_Out(void){
    flag_sys=1;
    pri=2;
    if(counter>=1950 && counter<=2000){
        if(confirm[0]==1){
            someone_out++;
        }
        confirm[0]=0;
        confirm[1]=0;
        flag_sys=0;
        counter=0;
    }
    if(counter==2001){
        confirm[0]=0;
        confirm[1]=0;
        flag_sys=0;
        counter=0;
    }
}
