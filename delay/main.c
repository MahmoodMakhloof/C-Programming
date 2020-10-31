#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay_s (char);

int main()
{
	int ctr=0;
	while (1)
	{
		printf("\t%d",ctr);
		delay_s(1);
		ctr++;
		if(ctr==10) break;

	}
}

void delay_s (char sec)
{
	unsigned int mytime;
	mytime =time(NULL)+sec;
	while(time(NULL)<mytime);
}
