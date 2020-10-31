#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int x=9;
	int y=7;

	int *ptr;
	ptr=&x;
	printf("%x %x\n",ptr,&x);
	printf("%d %d\n",*ptr,x);
	(*ptr)++;
	printf("%d %d\n",*ptr,x);
	ptr=&y;
	printf("%x %x\n",ptr,&y);
	printf("%d %d\n",*ptr,y);
	*ptr=44;
	printf("%d %d\n",*ptr,y);

}
