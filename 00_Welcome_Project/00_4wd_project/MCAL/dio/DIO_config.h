/*
 * DIO_config.h
 *
 *  Created on: 5 Apr 2023
 *      Author: 20101
 */

#ifndef MCAL_DIO_DIO_CONFIG_H_
#define MCAL_DIO_DIO_CONFIG_H_

#include "../../COMMON/STD_Types.h"

#define CONFIG_ENABLE  1
#define CONFIG_DISABLE  0

#define GPIO_CONFIGURATIONS		CONFIG_ENABLE

#define PORT_PIN_MAX_NUMBER      7
#define PORT_MAX_NUMBER          4

#define PORT_TOOGLE_MASK               0xFF

typedef enum{
    GPIO_LOGIC_LOW = 0,
    GPIO_LOGIC_HIGH
}EN_logic_t;

typedef enum
{
    GPIO_DIRECTION_INPUT = 0,
    GPIO_DIRECTION_OUTPUT
}EN_direction_t;

typedef enum
{
   GPIO_PIN0 = 0,
   GPIO_PIN1,
   GPIO_PIN2,
   GPIO_PIN3,
   GPIO_PIN4,
   GPIO_PIN5,
   GPIO_PIN6,
   GPIO_PIN7
}EN_pin_index_t;

typedef enum
{
    GPIO_PORTA_INDEX = 0,
    GPIO_PORTB_INDEX,
    GPIO_PORTC_INDEX,
    GPIO_PORTD_INDEX,
}EN_port_index_t;

typedef struct
{
    Uint8_t port : 3;
    Uint8_t pin : 3;
    Uint8_t direction : 1;
    Uint8_t logic : 1;
}ST_pin_config_t;


#endif /* MCAL_DIO_DIO_CONFIG_H_ */
