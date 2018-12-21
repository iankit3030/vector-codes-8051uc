	#include<reg51.h>
	#include<stdio.h>
	#include"delay.h"
	#include"lcd8bit.h"

	main()
	{
	 char i;
	 lcd_init();
	 for(i=0;i<16;i++)
	 {
	  lcd_cmd(0x80+i);
	  lcd_string("vector");
	  delay_ms(1000);
	  lcd_cmd(0x1);
	 }
	 while(1);
	}