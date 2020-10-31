#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int random[10];
	int i;
	int sum=0;

	for(i=0;i<10;i++)
	{
		random[i]=rand();
	}

	for(i=1;i<9;i++)
	{
		if(random[i]>random[i-1] && random[i]>random[i+1])
			sum+=random[i];
	}

	printf("%d",sum);


	return 0;
}
