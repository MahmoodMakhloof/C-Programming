#include <stdio.h>

int main()
{
	extern int a;
	a++;
	printf("%d",a);
}

int a; //global variable default value is zero

/*global variable differ according to its place
 * if existed above function ,compiler can see it ,so not necessery to use extern
 * if existed under function ,compiler cant see it , so you must use extern to tell compiler that this variable existed some where */

