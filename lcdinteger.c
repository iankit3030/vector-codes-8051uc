	 #include <reg51.h>
	#include"delay.h"
	#include<stdio.h>
	#include"lcd8bit.h"
	

	

	main()
	{
		lcd_init();
		//lcd_integer(45);
		//lcd_cmd(0xC0);
		//lcd_float(12.34);
		mylcd_integer(-123);
		lcd_cmd(0xC0);
		mylcd_float(-70.7096);
		while(1);
	}