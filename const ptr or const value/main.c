#include<stdio.h>

int main ()
{
	int x=8;
	int y=9;
	int * const ptr=&x; //constant pointer it always holds x
	//ptr=&y; //can't hold y
	printf("%d\n",*ptr);
	*ptr=90;
	printf("%d\n",*ptr);
	x=2;

	printf("%d\n",*ptr);

}
