#include<reg51.h>
#include<stdio.h>
#include"delay.h"
#include"lcd8bit.h"

sbit SW1 = P2^0;
sbit SW2 = P2^1;
sbit SW3 = P3^2;

main()
{
	int count=0;
	lcd_integer(count);
	do
	{	
	do
	{
   if(SW1==0)
   {
	  delay_ms(50);
	  ++count;
	  lcd_cmd(0x1);
	  lcd_integer(count);
	  while(SW1==0);
	 }
  } while(count<59);
	 
  do
	{
		if(SW2==0)
		{
			delay_ms(100);
			count--;
			lcd_cmd(0x1);
			lcd_integer(count);
			while(SW2==0);
		}
	} while(count>0);
}while(1);
}	
		

	 