	#include<reg51.h>
	#include<stdio.h>
	#include"delay.h"
	#include"lcd8bit.h"




	main()
	{
	 char i,j;
	 lcd_init();
	 while(1)
	 {
	 for(i=0;i<11;i++)
	  {
	   lcd_cmd(0x80+i);
	   lcd_string("vector");
	   delay_ms(1000);
	   lcd_cmd(0x1);
		  if(i==10)
		  {
		   for(j=5;j>0;j--)
		   {
		    lcd_cmd(0x80);
		    lcd_string("vector"+j);
		    delay_ms(1000);
		    lcd_cmd(0x1);
		   }
		   i=-1;
	      }
	  }
	 }
	 
	}