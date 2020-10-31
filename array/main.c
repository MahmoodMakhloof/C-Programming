#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float degrees[10];
	int i;

	for (i=0;i<10;i++)
	{
		scanf("%f",&degrees[i]);
	}

	for (i=0;i<10;i++)
	{
		printf("\t%.2f",degrees[i]);
	}

	return 0;
}
