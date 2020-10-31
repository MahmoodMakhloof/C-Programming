#include <stdio.h>
#include <stdlib.h>

struct Scomplex
{
	double real;
	double imag;
};

struct Scomplex read (char name[])
{
	struct Scomplex C;
	printf("Enter Complex Number Of %s :",name);
	fflush(stdout); fflush(stdin);
	scanf("%lf %lf",&C.real,&C.imag);
	return C;
}

struct Scomplex add (struct Scomplex A,struct Scomplex B)
{
	struct Scomplex C;
	C.real=A.real+B.real;
	C.imag=A.imag+B.imag;
	return C;
}

void print (char name[],struct Scomplex C)
{
	printf("%s = %.2lf + j %.2lf",name,C.real,C.imag);
}

int main ()
{
	struct Scomplex X,Y,Z;
	X=read("X");
	Y=read("Y");
	Z=add(X,Y);
	print("Z",Z);

	return 0;
}
