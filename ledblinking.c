# include<reg51.h>
# include<delay.c>
	
 sbit LED=P2^0;
	
	void main()
	{
		while(1)
		 {
		 	 LED=~LED;
		     delay_ms(1000);
		 }
	}	