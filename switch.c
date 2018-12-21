		 #include<reg51.h>
		 #include<string.h>
		 #include<stdio.h>
		 #include"delay.h"
		 #include"uart.h"
		 sbit SW=P2^7;

		 main()
		 {
		   char buf[20],temp[5];
		   int count;
		   uart_init(9600);

		   while(1)
		   {
		     count=0;
		     do
			 {
			   if(SW==0)
			   {
			   	//delay_ms(250);
				while(SW==0);
				count++;
				sprintf(temp,"%d",count);
				strcpy(buf,"SW is present");
				strcat(buf,temp);
				strcat(buf,"\r\n");
				uart_string(buf);
			   }
			 }while(count<59);
		   }
		 }