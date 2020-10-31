#include <stdio.h>
#include <stdlib.h>


void print()
{
	int y=0;
	static int x=0; //x initialized once, don't make it equal zero again at next calling function
	y++;
	x++;
	printf("x = %d y = %d\n",x,y);
}

int main()
{
	int i;
	for(i=0;i<6;i++)
	{
		print();
	}

	return 0;
}
