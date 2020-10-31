#include <stdio.h>
#include <stdlib.h>

#define x 100
int main()
{
#if (x==100)
	printf("100");
#elif (x==50)
	print("50");
#else
	print("invalid");
#endif
}

