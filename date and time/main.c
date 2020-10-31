#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	time_t t =time(NULL);
	struct tm* tim = localtime (&t);
	printf("DATE : %.2d / %.2d / %.4d \n",tim->tm_mday,tim->tm_mon+1,tim->tm_year+1900);
	if(tim->tm_hour<12)
		printf("TIME : %.2d:%.2d:%.2d AM",tim->tm_hour,tim->tm_min,tim->tm_sec);
	else
		printf("TIME : %.2d:%.2d:%.2d PM",tim->tm_hour-12,tim->tm_min,tim->tm_sec);
}
