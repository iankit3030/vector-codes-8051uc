	#include<reg51.h>
	#include"uart.h"
	main()
	{
		unsigned char temp;
		uart_init(9600);
		while(1)
		{
			temp=uart_rx();
			uart_tx(temp);
			uart_tx(temp/100+48);
			temp=temp%100;
			uart_tx(temp/10+48);
			uart_tx(temp%10+48);
			
		}
	}