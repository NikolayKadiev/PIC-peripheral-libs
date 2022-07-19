#include "clock_config.h"
#include <xc.h>
#include <stdint.h>

void usrt_master(void);

void usrt_slave(void);

uint8_t usrt_read();

void usrt_write(uint8_t data);
