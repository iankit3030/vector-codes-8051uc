sfr ACC=0XE0;
sfr P0=0X80;
sfr P1=0X90;
sfr P2=0xA0;
sfr P3=0xB0;
sfr SP=0x81;
void main()
{
	SP=0x40;
	P0=P1=P2=P3=0x55;
	P0=P1=P2=P3=0xAA;
	ACC=0x10;
}	

