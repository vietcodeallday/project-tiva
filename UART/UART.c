/*
 * UART.c
 *
 *  Created on: 21 thg 3, 2023
 *      Author: viet
 */
#include"../include.h"
#include"UART.h"

extern void Config_UART(void){
    SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
    GPIOPinConfigure(GPIO_PA0_U0RX);
    GPIOPinConfigure(GPIO_PA1_U0TX);
    GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);
    UARTConfigSetExpClk(UART0_BASE, SysCtlClockGet(), 9600, (UART_CONFIG_WLEN_8 | UART_CONFIG_STOP_ONE |  UART_CONFIG_PAR_NONE));
    ///abc xyz
}


