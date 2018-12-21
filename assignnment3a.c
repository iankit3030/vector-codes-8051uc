			   #include<reg51.h>
   //#include<stdio.h>
	#include"delay.h"
	#include"uart.h"
	#include"lcd8bit.h"
	main()
	{
		unsigned char temp,r;
   	uart_init(9600);
		lcd_init();
		
		while(1)
		{
			char ch[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
			uart_string("\r\nenter the char:  ");
			temp=uart_rx();
			
			uart_tx(temp);
			lcd_cmd(0x1);
			lcd_data(temp);
			 
			uart_tx(' ');
			lcd_data(' ');
			mylcd_integer(temp);
			
			uart_tx(temp/100+48);
			r=temp%100;
			uart_tx(r/10+48);
		    uart_tx(r%10+48);


			uart_tx(' ');
			lcd_string(" 0x");
				 uart_tx('0');
				 uart_tx('x');
				   uart_tx(ch[temp/16]);
				   uart_tx(ch[temp%16]);
			lcd_data(ch[temp/16]);
			 lcd_data(ch[temp%16]);													   

		}
	}