#include <stdio.h>
#include <conio.h>

int main ()
{
	float x,y;
	do
    {
        printf("\nEnter x value : ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&x);
		y=5*x*x+3*x+2;
		printf("y(%.2f) = %.2f",x,y);
		fflush(stdin); fflush(stdout);
		printf("\ndo you want to evaluate again (y)");
		fflush(stdin); fflush(stdout);
    }


	while (getche()=='y');


}
