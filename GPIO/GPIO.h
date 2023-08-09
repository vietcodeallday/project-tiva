/*
 * GPIO.h
 *
 *  Created on: 20 thg 3, 2023
 *      Author: viet
 */

#ifndef GPIO_GPIO_H_
#define GPIO_GPIO_H_

extern uint32_t g_ui32SysClock;
#define SDA_PIN GPIO_PIN_7
#define SCL_PIN GPIO_PIN_6
#define I2C_PORT_BASE GPIO_PORTB_BASE
#define I2C_SCL_BASE I2C_PORT_BASE + SCL_PIN
#define I2C_SDA_BASE I2C_PORT_BASE + SDA_PIN

extern void Config_led_red(void);
extern void Config_led_green(void);
extern void SW_Start(void);
extern void SW_End(void);
extern void Trig(void);
extern void Echo(void);


#endif /* GPIO_GPIO_H_ */
