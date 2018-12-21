	#include<reg51.h>
	#include<stdio.h>
	#include"delay.h"
	#include"lcd8bit.h"
	
	sbit SW = P2^7;
	
	main()
	{
		int count= 0;
		lcd_init();
		//lcd_integer(count);
		do
			{ 
				if(SW==0)
				{
					delay_ms(50);
					++count;
					lcd_cmd(0x1);
					lcd_integer(count);
					while(SW==0);
				}
			}while(count<59);
	}	
			
	