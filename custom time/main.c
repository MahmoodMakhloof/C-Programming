#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	struct tm mytime;
	mytime.tm_hour=12;
	mytime.tm_min=30;
	mytime.tm_sec=01;

	char buff[40];

	strftime(buff,sizeof buff ,"Your Time Is %H:%M:%S",&mytime);

	printf("%s",buff);
}
