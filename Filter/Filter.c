/*
 * Filter.c
 *
 *  Created on: 26 thg 3, 2023
 *      Author: viet
 */
#include"../include.h"
#include "Filter.h"

#include"../Timer_0/Timer_0.h"
#include"../Timer1/Timer1.h"

float distance_sum_in=0;
float distance_fil_in=0;
extern void filter_array_in(void){
    distance_sum_in=distance_sum_in+filter_in[num_in];
    if(num_in==20){
        distance_fil_in=distance_sum_in/20;
        distance_sum_in=0;
    }
}

float distance_sum_out=0;
float distance_fil_out=0;
extern void filter_array_out(void){
    distance_sum_out=distance_sum_out+filter_out[num_out];
    if(num_out==20){
        distance_fil_out=distance_sum_out/20;
        distance_sum_out=0;
    }
}
