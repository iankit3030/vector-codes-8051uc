								   
	main()
	{
	 char i,j;
	 lcd_init();
	 while(1)
	 {
	 for(i=0,j=5;i<22;i++)
	  {
	   lcd_cmd(0x80+i);
	   lcd_string("vector");
	   delay_ms(1000);
	   lcd_cmd(0x1);
		  for(i>=10;i<22;i++)
		  {
		  // lcd_cmd(0x80+i);
		   //lcd_string("vector")
		   //delay_ms(5000);


		   if(j>0)
		   { 
		  //  lcd_cmd(0x80+i);
		    lcd_string("vector"-)
		    lcd_cmd(0x80);
		    lcd_string("vector"+j);
		    delay_ms(1000);
		    lcd_cmd(0x1);
			j--;
		   }
		   
	      }
		   if(i==21)
		   i=-1;
	  }
	 }
	 
	}