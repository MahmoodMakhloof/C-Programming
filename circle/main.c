
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float R;
	char x;

	printf("radios is : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&R);
	printf("Enter 'a' for area or 'c' for circumference : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);

	if(x=='a')
	{
		float area =3.14*R*R;
		printf("Area = %.2f\n",area);
	}

	else if (x=='c')
	{
		float Circumference =2*3.14*R;
		printf("Circumference = %.2f\n",Circumference);
	}

	else
	{
		printf("NOT VALID CHOICE\n");
	}

}
