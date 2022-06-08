#include "uart.h"

// Set up UART for use
// See datasheet for more info
void uart_set(){
    TRISC7=1;  // Use appropriate pin of your pic
    TRISC6=0;  // Use appropriate pin of your pic
    SPBRG = 25;  // See datasheet for value
    TXSTA=0x24;		
	RCSTA=0x90;
}

// Send data
void uart_send(uint8_t art_s){
    TXREG = art_s;
    while(!TRMT){};
}

// Read data
char uart_read(void){
    while(!RCIF){};
    return RCREG;
}

// Send a string
void uart_sendstr(char x[]){
	for(uint8_t i=0; x[i] != '\0'; i++){
		uart_send(x[i]);
	}
}

// Send a string and new line
void uart_sendstrnl(char x[]){
	for(uint8_t i=0; x[i] != '\0'; i++){
		uart_send(x[i]);
	}
	uart_send('\n'); //('\r');
}