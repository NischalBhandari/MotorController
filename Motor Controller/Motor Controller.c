/*
 * Motor_Controller.c
 *
 * Created: 9/24/2020 9:22:29 AM
 *  Author: Nischal
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#define btn_pin  3 
#define led_pin 0
#define Q2 1


int main(void)
{	//Making DDRC output
	DDRC = 0b00111111;
	// Making DDRB PIN3 an Input
	// << means shift left 10001111 << 4 bits will produce 11110000
	// 10001111 >> 4 bits will produce 0000 1000
	// PORTA = 0b00001111 means wer are expressing PORTA in binary
	
	DDRB = 0b00000000;
	
    while(1)
    
	{	PORTC |= 0b00000000;
		PORTC |=0b00100001;
		_delay_ms(3000);
		PORTC &= (0b00000000);
		PORTC |= 0b00001001;
		_delay_ms(3000);
		PORTC &= 0b00000000;
		PORTC |= 0b00011000;
		_delay_ms(3000);
		PORTC &= 0b00000000;
		PORTC |= 0b00010010;
		_delay_ms(3000);
		PORTC &= 0b00000000;
		PORTC |= 0b00000110;
		_delay_ms(3000);
		PORTC &= 0b00000000;
		PORTC |= 0b00100100;
		_delay_ms(3000);
		
		
		
		
		/*int btn = (PINB & (1 << btn_pin) ) >> btn_pin;
		//if(btn){
			//setting the bit
			
		//	PORTC |= 0b00000011;
			//PORTC  = (1 << led_pin) | PORTC;
			//PORTC = (1 << Q2) | PORTC;
        //TODO:: Please write your application code 
  }
	else{
		PORTC =~(1 << led_pin) & PORTC;
		PORTC =~(1 << Q2) & PORTC; 
	}*/
	
	}
}
