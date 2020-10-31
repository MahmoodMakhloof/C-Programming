#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char c;
	scanf("%c",&c);

	switch (c)
	{
		case 'a':
		case 'A':
		{
			printf("A");
		}
		break;

		case 'b':
		case 'B':
		{
			printf("B");
		}
		break;

		default :
		{
			printf("not valid");
		}
	}



	return 0;
}
