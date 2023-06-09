/*
 * OS.h
 *
 *  Author: andre
 */ 


/*
 * OS.h
 *
 * 
 *  Author: Rafael Baptista & André Passaradas
 */ 


#ifndef OS_H_
#define OS_H_

#define F_CPU 16000000
#define BAUD 9600
#define MYUBRR F_CPU/16/BAUD-1

#define INPUT 0x00
#define OUTPUT 0xFF

#define BOTDIR	3
#define BOTESQ	2

#define	OFF 0
#define ON	1

#define TRUE 1

#define LED_SHIFTDIR() (ledState << 1)
#define LED_SHIFTESQ() (ledState >> 1)

uint8_t command;



#endif /* OS_H_ */
