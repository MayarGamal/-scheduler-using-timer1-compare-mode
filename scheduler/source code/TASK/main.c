/*
 * main.c
 *
 *  Created on: Nov 24, 2019
 *      Author: mayar
 */

#include "timer.h"
#include "leds.h"

extern uint8 flag ;
uint8 i = 1;


void scheduler (void){
	while(1){

       if ( 1 == flag ){

    	   flag=0;

			 if(1 == i){

				 led1();

			 }
			 else if(2 == i){

				 led2();

			 }
			 else if (4 == i){

				 led3();
				 i=0;
			 }
    	   i++;
       }
    }
}

int main(){

    sei(); //enable interrupt
    leds_init();
    timer1_init(); //init of timer1
    scheduler();

}

