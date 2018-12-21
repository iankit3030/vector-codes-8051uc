
sfr LCD_PORT= 0X80;
sbit RS = P3^4;
sbit RW = P3^5;
sbit EN = P3^6;


code unsigned char arr[]={0X0,0XA,0X0,0X0,0X0,0X11,0XE,0X0,0X0,0XA,0XA,0X0,0X0,0XE,0X11,0X0};


			  
void lcd_cmd(unsigned char c)
{
 LCD_PORT = c;
 RS = 0;
 RW = 0;
 EN = 1;
 delay_ms(2);
 EN = 0;	  
 }

   	  void lcd_init()
 {
  lcd_cmd(0x2);
  lcd_cmd(0x38);
  lcd_cmd(0x6);
  lcd_cmd(0xE);
  lcd_cmd(0x1);
 }	 


 void lcd_data(unsigned char d)
 {
 	LCD_PORT = d;
	RS = 1;
	RW = 0;
	EN = 1;
	delay_ms(2);
	EN= 0;
 }
 


 void lcd_string(char * s)
 {
 while(*s)
 lcd_data(*s++);
 }
 



/*	 void lcd_integer(int n)
{
char buf[7];
sprintf(buf,"%d",n);
lcd_string(buf);
}

	   void lcd_float(float f)
{
 char buf[10];
sprintf(buf,"%f",f);
lcd_string(buf);
} */

	   void mylcd_integer(int n)
{
   char buf[10],i=0;
   if(n==0)
   {
    lcd_data('0');
	return;
   }


   if(n<0)
   {
   lcd_data('-');
   n=-n;
   }

	while(n)
	{
	  buf[i++]=n%10 +48	;
	  n=n/10;
	}
 
    for(i=--i;i>=0;i--)
	lcd_data(buf[i]);
   
}

/* void mylcd_float(float f)
 {
    int i;
	i=f;
	mylcd_integer(i);
	lcd_data('.');
	if(f>0)
	f=(f-i)*100;
	else if(f<0)
	f=(i-f)*10000;
	mylcd_integer(f);
 }		
	  
 void init_cgram()
 {
	 char i;
	 lcd_cmd(0x40);
	 for(i=0;i<16;i++)
	 lcd_data(arr[i]);
	 lcd_cmd(0x80);
 } */


