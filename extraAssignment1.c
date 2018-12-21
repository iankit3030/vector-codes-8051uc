			#include<reg51.h>
		    #include<stdio.h>
			#include<string.h>
			#include"uart.h"
			#include"delay.h"
			#include"lcd8bit.h"
			
			main()
			{
			  unsigned char temp=0,r=0,a[10];
			  unsigned char p[]="123";
			  uart_init(9600);
			  lcd_init();

		while(1)
		{
			  lcd_cmd(0x1);
			  uart_string("\r\nEnter the password : ");
			
			  while(1)				 
	 		  {
				
				temp=uart_rx();
				if(temp==13)
				break;
				a[r++]=temp;
				uart_tx('*');
			    lcd_data(temp);
			  }

				a[r]='\0';
				r=0;




				 lcd_cmd(0x1);
				if((strcmp(p,a))==0)
				{
				uart_string("\r\npassword is correct... ");
				lcd_string("correct");
				}
				else
				{
				uart_string("\r\npassword is wrong...");
				lcd_string("wrong");
				}
			   delay_ms(5000);																   
			   
		}
	}




