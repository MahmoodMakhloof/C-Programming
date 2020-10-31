#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char *pchar=0x0;
	int *pint=0x0;
	long long *pllong=0x0;

	printf("0x%x 0x%x 0x%x\n",pchar,pint,pllong);

	pchar++;
	pint++;
	pllong++;

	printf("0x%x 0x%x 0x%x\n",pchar,pint,pllong);

}
