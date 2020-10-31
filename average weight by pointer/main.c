#include <stdio.h>

int main ()
{
	int x[5];
	int *ptr=x;
	int i;
	int sum=0;

	for (i=0;i<sizeof(x)/sizeof(int);i++)
		scanf("%d",ptr+i);

	for(i=0;i<sizeof(x)/sizeof(int);i++,ptr++)
		printf("%d\t",*ptr);

	ptr=x;

	for(i=0;i<sizeof(x)/sizeof(int);i++,ptr++)
		sum+=*ptr;

	printf("sum = %d",sum);
}
