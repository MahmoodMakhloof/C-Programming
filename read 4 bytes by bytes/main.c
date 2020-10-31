#include <stdio.h>

int main ()
{
	char arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

	unsigned short *x=(unsigned short*)arr;
	unsigned int *y=(unsigned int *)arr;
	unsigned long long *z=(unsigned long long *)arr;

	printf("%x\n",*x);
	x++;
	printf("%x\n",*x);
	///////////////////
	printf("%x\n",*y);
	y++;
	printf("%x\n",*y);
	///////////////////
	printf("%llx\n",*z);
	z++;
	printf("%llx\n",*z);
}
