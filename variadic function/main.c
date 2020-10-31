#include <stdio.h>
#include <stdarg.h>

void printnum (int count , ...)
{
	va_list countPtr ;
	va_start (countPtr , count );
    /*int i;
	for (i=0;i<count;i++)
		printf("%d\n",va_arg(countPtr,int)); */

	char str[1000];
	int i;
	for(i=0;i<count*3;i+=3)
	{
		str[i]='%';
		str[i+1]='d';
		str[i+2]=',';
	}
	str[i-1]='\n';
	str[i]='\0';
	vprintf(str , countPtr);

	va_end (countPtr);
}


void PRINT(char *format, ...)
{
	va_list argptr ;
	va_start (argptr , format);
	vprintf(format,argptr);
	va_end(argptr);
}

int main ()
{
	printnum(5,1,2,3,8,9);

	PRINT("%s %d %.2f","mahmoud",22,55.5);
}
