/*
 * leds.c
 *
 *  Created on: Nov 24, 2019
 *      Author: mayar
 */

#include"leds.h"

void leds_init(void){

	/***** set leds bit to output ****/
			SET_BIT(DDRC,0);
			SET_BIT(DDRC,1);
			SET_BIT(DDRC,2);

}

void led1(void){

	CLEAR_BIT(PORTC,2);

	SET_BIT(PORTC,0);

}

void led2(void){

	CLEAR_BIT(PORTC,0);

	SET_BIT(PORTC,1);
}

void led3(void){

	CLEAR_BIT(PORTC,1);

	SET_BIT(PORTC,2);
}
