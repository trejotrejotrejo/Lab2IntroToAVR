/*	Author: atrej013
 *  Partner(s) Name: 
 *	Lab Section: 023
<<<<<<< HEAD
 *	Assignment: Lab #2  Exercise #1
=======
 *	Assignment: Lab #2  Exercise #Prelab
>>>>>>> 10b1f5a58b13e92c781cd812f782ad5dd5848b69
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRC = 0xFF; PORTC = 0x00; 
   
    unsigned char tmp = 0x00;
    unsigned char cntavail = 0x00;
    /* Insert your solution below */
    while (1) {
	tmp = PINA;
	if (tmp == 0x00) {
		cntavail = 0x04;
	}
	else if ((tmp == 0x01) || (tmp == 0x02) || (tmp == 0x04) || (tmp == 0x08)) {
		cntavail = 0x03;
	} 
	else if ((tmp == 0x03) || (tmp == 0x05) || (tmp == 0x06) || (tmp == 0x09) || (tmp == 0x0A) || (tmp == 0x0C)) {
		cntavail = 0x02;
	}
	else if ((tmp == 0x07) || (tmp == 0x0B) || (tmp == 0x0D) || (tmp == 0x0E)) {
		cntavail = 0x01;
	}
	else if (tmp == 0x0F) {
		cntavail = 0x00;
	}
	PORTC = cntavail;
    }
    return 1;
}
