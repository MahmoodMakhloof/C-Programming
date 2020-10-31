#include <stdio.h>

int main ()
{

	int x=9;
	int y=3;
	const int* ptr ; //equal (int const * ptr;) //constant value so we cant change value inside that ptr point
	ptr=&x;
	printf("%d\n",*ptr);
	//*ptr=40; //we cant write that
	x=5;//x is not constant
	printf("%d\n",*ptr);

	ptr=&y; //ptr can move to point to another variable
	//*ptr=50; //we cant write that
	printf("%d\n",*ptr);


}
