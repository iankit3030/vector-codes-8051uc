		 	#include<reg51.h>
		    #include<stdio.h>
			#include<string.h>
			#include"uart.h"
			#include"delay.h"
			#include"lcd8bit.h"
             main()
			{
			  unsigned char temp=0,r=0,a[10],b[10];
			  unsigned char p[]="123";
			  uart_init(9600);
			  lcd_init();


while(1)
{			  lcd_cmd(0x1);
			  uart_string("\r\nEnter the word1 : ");
			   
			  while(1)				 
	 		  {
				
				temp=uart_rx();
				if(temp==13)
				break;
				a[r++]=temp;
				uart_tx(temp);
				lcd_data(temp);
			  }
            	a[r]='\0';
				r=0;

				lcd_cmd(0x1);
			    uart_string("\r\nEnter the word2 : ");
			    while(1)				 
	 		  {
				
				temp=uart_rx();
				if(temp==13)
				break;
				b[r++]=temp;
				uart_tx(temp);
				aclcd_data(temp);
			  }

				b[r]='\0';





				 lcd_cmd(0x1);
				
				if(strcmp(b,a)==0)
				{
				uart_string("\r\nsame... ");
				lcd_string("same");
				}
				else
				{
				uart_string("\r\ndifferent...");
				lcd_string("different");
				}
				delay_ms(5000);
			}
 }



