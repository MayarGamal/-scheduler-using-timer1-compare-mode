/*
 * timer.c
 *
 *  Created on: Nov 24, 2019
 *      Author: mayar
 */

#include"timer.h"

  uint8 flag = 0;

ISR(TIMER1_COMPA_vect){

	flag=1;
}

void timer1_init(void){

	/******* 1024 prescaler - mode 4 "CTC" ***********/
		    SET_BIT(TCCR1B,WGM12);
			SET_BIT(TCCR1B,CS10);
		    SET_BIT(TCCR1B,CS12);
	    //  TCCR1B |= (1 << WGM12)|(1 << CS12)|(1 << CS10);
    /**********************************/

    /* 8MHZ freq / 1024 prescaler = 7.8125 KHZ
	 * tick every 1/7.8125 = 128us
	 * for 1 sec .. 1sec/128u = 7813 ticks
	 * set compare value to 7813 to reach one second
	 */

	 TCNT1 = 0; //initial value for the timer
	 OCR1A = 7813;  // compare value

	 SET_BIT(TIMSK,OCIE1A); //enable compare interrupt

}



