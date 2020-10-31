#include <stdio.h>
#include <stdlib.h>

struct Register
{
	//type name:length;
	//type control how many bytes reserved
	//for example :
	//char can store 8 variable (every variable is 1 bit)
	//int can store 32 variable (every variable is 1 bit)
	unsigned char bit0:1;
	unsigned char bit1:1;
	unsigned char bit2:1;
	unsigned char bit3:1;
	unsigned char bit4:1;
	unsigned char bit5:1;
	unsigned char bit6:1;
	unsigned char bit7:1;
}status;

int main ()
{
	status.bit0=1;
	status.bit1=0;
	status.bit2=6;
	printf("%d %d %d %d byte\n",status.bit0,status.bit1,status.bit2,sizeof(status));
}
