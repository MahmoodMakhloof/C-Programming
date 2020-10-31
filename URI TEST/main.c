#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int d;
	double f;
	scanf("%d %lf",&d,&f);
	printf("%.3lf km/l\n",d/f);

}
