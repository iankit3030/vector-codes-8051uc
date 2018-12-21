		#include<reg51.h>
		#include"uart.h"
		main()
		{
			//unsigned char temp;
			uart_init(9600);
			/*while(1)
			{
				temp = uart_rx();
				uart_tx(temp);
			}*/

			uart_string("vector\r\ninstitute\r\n");
			while(1);
		}