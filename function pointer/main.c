#include <stdio.h>
#include <string.h>


void check(const char* x1,const char* x2,int(*cmp)(const char*,const char*));

int main ()
{
	char X[50];
	char Y[50];
	int (*ptr)(const char *,const char *);
	ptr=strcmp;
	printf("Enter 2 strings\n");
	fflush(stdout); fflush(stdin);
	gets(X);
	fflush(stdout); fflush(stdin);
	gets(Y);
	check(X,Y,ptr);
}

void check(const char* x1,const char* x2,int(*cmp)(const char*,const char*))
{
	if((*cmp)(x1,x2)==0)
		printf("equal\n");
	else
		printf("not equal\n");
}
