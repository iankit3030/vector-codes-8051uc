    #include<reg51.h>
    #include"uart.h"
    #include"delay.h"
    #include"lcd8bit.h"
    
    sbit LED1 = P2^0;
    sbit LED2 = P2^1;
    
    main()
    {
	unsigned char temp;
   	uart_init(9600);
	lcd_init();
        
	while(1)
	{
	 uart_string("\r\n Menu :\r\n a) LED1 ON\r\n b) LED1 OFF\r\n c) LED2 ON\r\n d) LED2 OFF");

	 temp=uart_rx();
	 	 lcd_cmd(0x1);
		
	if(temp=='a')
	{
	 LED1=0;
	 lcd_cmd(0x80);
	 uart_string("\r\n option a) LED1 ON\r\n");
	 lcd_string("LED1 ON");
	 

	}
	else if(temp=='b')
	{
		LED1=1;
		lcd_cmd(0x80);
		uart_string("\r\n option b) LED1 OFF\r\n");
		lcd_string("LED1 OFF");
	}
	else if(temp=='c')
	{
		LED2=0;
		//lcd_cmd(0x80+9);
		lcd_cmd(0x1);
		uart_string("\r\n option c) LED2 ON\r\n");
		lcd_string("LED2 ON");
	}	 
	else if(temp=='d')																						
	{
		LED2=1;
		lcd_cmd(0x80+9);
		lcd_cmd(0x1);
		uart_string("\r\n option d) LED2 0FF\r\n");
		lcd_string("LED2 OFF");
	}
	else {
		lcd_cmd(0x80);
		uart_string("\r\n option unknown option\r\n");
		lcd_string("unknown option");
		//delay_ms(2000);
		
		}
}
}
	
	
	
					    
	
	
		