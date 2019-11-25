/*
 * macros.h
 *
 *  Created on: Nov 24, 2019
 *      Author: mayar
 */

#ifndef MACROS_H_
#define MACROS_H_

/* Set a certain bit in any register */
#define SET_BIT(REG,BIT) 		(REG |= (1 << BIT))

/* Clear a certain bit in any register */
#define CLEAR_BIT(REG,BIT) 		(REG &= ~(1 << BIT))

/* Toggle a certain bit in any register */
#define TOGGLE_BIT(REG,BIT) 	(REG ^= (1 << BIT))

/* Rotate right the register value with specific number of rotates */
#define ROR(REG,NUM)			(REG = (REG >> NUM) | (REG << (8 - NUM)))

/* Rotate left the register value with specific number of rotates */
#define ROL(REG,NUM)			(REG = (REG << NUM) | (REG >> (8 - NUM)))

/* Check if a specific bit is set in any register */
#define BIT_IS_SET(REG,BIT)		(REG & (1 << BIT))

/* Check if a specific bit is cleared in any register */
#define BIT_IS_CLEAR(REG,BIT)	(!(REG & (1 << BIT)))


typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
typedef unsigned long long uint64;

#endif /* MACROS_H_ */
