#include <stdio.h>
#include <stdlib.h>

void TryToModify(int x,char text[])
{
	x++;
	text[0]++;
}


int main ()
{
	int x=7;
	char t[5]={"good"};
	printf("x = %d and arr = %s\n",x,t);
	TryToModify(x,t);
	printf("x = %d and arr = %s\n",x,t);

	return 0;
}
