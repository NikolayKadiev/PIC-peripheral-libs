#include "usrt.h"

// Set up USRT for use as master
// See datasheet for more info
void usrt_master(void){ 	
    TRISC7 = 0; // Use appropriate pin of your pic
	TRISC6 = 0; // Use appropriate pin of your pic
	SPBRG=103;	// See datasheet for value
    TXSTA=0xB0;		
	RCSTA=0x80;		
}

// Set up USRT for use as slave
// See datasheet for more info
void usrt_slave(void){	
    TRISC7 = 1; // Use appropriate pin of your pic
	TRISC6 = 1; // Use appropriate pin of your pic
	SPBRG=103;	// See datasheet for value
    TXSTA=0x10;		
	RCSTA=0x90;		
}

// Read data
uint8_t usrt_read(){
  while(!RCIF){};
  return RCREG;
}

// Send data
void usrt_write(uint8_t data){
  TXREG = data;
  while(!TRMT){};
}