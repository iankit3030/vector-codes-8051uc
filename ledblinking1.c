# include<reg51.h>
# include<delay.c>
	
	
	 main()
	{
	  P2=0XF0;
		while(1)
		 {
		 	 P2^=0XFF;
		     delay_ms(1000);
		 }
	}	