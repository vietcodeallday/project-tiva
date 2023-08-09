/*
 * GPIO.c
 *
 *  Created on: 20 thg 3, 2023
 *      Author: viet
 */
#include"../include.h" //do khác cấp nên cần ".." để out tệp GPIO
#include"GPIO.h"

extern void Config_led_red(void){
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1); // LED đỏ
    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1,0);
}
extern void Config_led_blue(void){
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_2); // LED blue
    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_2,0);
}
extern void Config_led_green(void){
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_3); // LED green
    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_3,0);
}
 extern void SW_Start(void){
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOInput(GPIO_PORTF_BASE, GPIO_PIN_4); // SW1
    GPIOPadConfigSet(GPIO_PORTF_BASE, GPIO_PIN_4, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);
 }
 extern void SW_End(void){
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOInput(GPIO_PORTF_BASE, GPIO_PIN_0); // SW2
    GPIOPadConfigSet(GPIO_PORTF_BASE, GPIO_PIN_0, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);
 }

 extern void Trig_0(void){
     SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
     GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_4);
     GPIOPadConfigSet(GPIO_PORTF_BASE, GPIO_PIN_4, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);
     GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_4,0);
  }

 extern void Echo_0(void){
     SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
     GPIOPinTypeGPIOInput(GPIO_PORTC_BASE, GPIO_PIN_7);
     GPIOPadConfigSet(GPIO_PORTC_BASE, GPIO_PIN_7, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);
  }
 extern void Trig_1(void){
     SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
     GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_6);
     GPIOPadConfigSet(GPIO_PORTC_BASE, GPIO_PIN_6, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);
     GPIOPinWrite(GPIO_PORTC_BASE,GPIO_PIN_6,0);
  }

 extern void Echo_1(void){
     SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
     GPIOPinTypeGPIOInput(GPIO_PORTB_BASE, GPIO_PIN_3);
     GPIOPadConfigSet(GPIO_PORTB_BASE, GPIO_PIN_3, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);
  }



