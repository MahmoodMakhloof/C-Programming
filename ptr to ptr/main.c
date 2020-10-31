#include <stdio.h>

int main ()
{
	int x=5,y=9;
	int *ptr; //pointer declaration
	int **pptr; //pointer to pinter declaration
	pptr=&ptr; //pointer point to another pointer
	ptr=&x; //pointer point to variable
	**pptr=7;
	printf("%d\n",x);

	*pptr=&y;
	*ptr=11;
	printf("%d\n",y);
}
