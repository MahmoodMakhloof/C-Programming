#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	unsigned int ctr;
	time_t start;
	time_t end;

	start=time(NULL);
	for(ctr=1;ctr<=1000000;ctr++)
	{
		printf("\r%d",ctr);
	}
	end=time(NULL);

	printf("\ndifference time is %.0f seconds",difftime(end,start));

}
