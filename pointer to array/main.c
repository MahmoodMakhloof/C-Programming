#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int x[]={1,2,3,4,5,6};
	int *ptr;
	ptr=x;
	printf("%d\n",*ptr);
	//x++; Wrong (fixed)
	ptr++;
	printf("%d\n",*ptr);
	ptr=x+3;
	printf("%d\n",*ptr);
	ptr--;
	printf("%d\n",*ptr);

}
