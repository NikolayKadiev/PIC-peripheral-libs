#include <xc.h>
#include <stdint.h>

void uart_set();

void uart_send(uint8_t art_s);

char uart_read(void);

void uart_sendstr(char x[]);

void uart_sendstrnl(char x[]);