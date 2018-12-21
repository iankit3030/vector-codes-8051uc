#include<reg51.h>
#include<stdio.h>
#include"delay.h"
#include"lcd8bit.h"

main()
{
	int count = 0;
	lcd_init();
	init_cgram();
	lcd_data(0);
	while(1);
}