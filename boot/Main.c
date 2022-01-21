#include "stdint.h"
#include "HalUart.h"

#include "stdio.h"

static void Hw_init (void) ;

void main (void)
{
	Hw_init() ;

	uint32_t i = 100 ;
	while (i--)
	{
		Hal_uart_put_char('N') ;
	}
	Hal_uart_put_char('\n') ;

	putstr("Hello World!\n") ;

	//uint32_t * dummyAddr = (uint32_t *)(1024 * 1024 * 100) ;
	//* dummyAddr = sizeof(long) ;
}

static void Hw_init (void)
{
	Hal_uart_init() ;
}
