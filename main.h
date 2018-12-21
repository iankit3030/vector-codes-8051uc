	#include<reg51.h>
	#include"uart.h"
	main()
	{
		uart_init(9600);
		uart_tx('A');
		while(1);
	}