#include <stdio.h>
#include <stdlib.h>

int factorial (int x)
{
	int f=1;
	for (;x>0;x--)
	{
		f*=x;
	}
	return f;
}

int fac (int n)
{
	if(n==1)
		return 1;
	else
	return n=n*fac(n-1);

}

int main ()
{
	int a;
	scanf("%d",&a);
	printf("%d! = %d",a,fac(a));

	return 0;
}
