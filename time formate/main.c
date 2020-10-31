#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	time_t t =time (NULL);
	struct tm* tida=localtime(&t);

	char buff[100];
	strftime(buff ,sizeof buff,"DATE:%A %d %B %Y\tTIME: %H:%M:%S",tida);
	printf("%s",buff);
}
