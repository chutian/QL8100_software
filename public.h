#ifndef     __PUBLIC_H
#define     __PUBLIC_H

#define UART_BUAD		115200

void software_init(void);
void hardware_init(void);
void gpio_init(void);
void uart_init(uint16_t uiBuad);

#endif
