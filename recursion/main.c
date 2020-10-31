#include <stdio.h>
#include <stdlib.h>

void printHELLO(int n)
{
	puts("hello\n");
	n--;
	if(n!=0)
		printHELLO(n);
}


int main ()
{
	printHELLO(5);
	return 0;
}
