
sfr LCD_PORT= 0X80;
sbit RS = P3^4;
sbit RV = P3^5;
sbit En = P3^6;


sbit lcd_cmd(unsigned char c)
{
 lcd_port = c;
 RS = 0;
 RW = 0;
 EN = 1;
 delay_ms(2);
 EN = 0;	  
 }

 void lcd_data(unsigned char d)
 {
 	LCD_port = d;
	RS = 1;
	RW = 0;
	EN = 1;
	delay_ms(2);
	EN= 0;
 }
 
 void lcd_int()
 {
  lcd_cmd(0x2);
  lcd_cmd(0x38);
  lcd_cmd(0x6);
  lcd_cmd(0xE);
  lcd_cmd(0x1);
 }	 
