# include "header.h"
	
 sbit LED1=P1^0;
 sbit LED2=P1^1;
 sbit BUZZER=P2^7;
	
	void main()
	{
			LED1=0;
			LED2=~LED2;
		  BUZZER=~BUZZER;
	}	