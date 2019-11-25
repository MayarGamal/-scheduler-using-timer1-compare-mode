/*
 * leds.h
 *
 *  Created on: Nov 24, 2019
 *      Author: mayar
 */

#ifndef LEDS_H_
#define LEDS_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include"macros.h"

void leds_init(void);
void led1(void);
void led2(void);
void led3(void);


#endif /* LEDS_H_ */
