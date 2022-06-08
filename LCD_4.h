#include <xc.h>
#include <stdint.h>

// Use a spare PORT of your pic
#define EN_LCD   RD3
#define RS_LCD   RD2
#define PT_OUT   PORTD
#define TR_OUT   TRISD

void lcd_control (uint8_t comand);

void lcd_set(void);

void lcd_send(char data);

void lcd_shift(char x);

void lcd_sendstr(char str[]);

void lcd_adr(uint8_t row, uint8_t col);
