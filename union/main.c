#include <stdio.h>
#include <stdlib.h>

enum data_type {
	INT,FLOAT,DOUBLE
};

union values
{
	int intval;
	float floatval;
	double doubleval;
};

union values add (union values value1,union values value2,enum data_type type)
{
	union values result;
	switch (type)
	{
	case INT:
		result.intval=value1.intval+value2.intval;break;
	case FLOAT:
		result.floatval=value1.floatval+value2.floatval;break;
	case DOUBLE:
		result.doubleval=value1.doubleval+value2.doubleval;break;
	}
	return result;
}

int main ()
{
	union values X,Y,Z;
	printf("Size of union is %d Bytes\n",sizeof(union values));

	X.intval=40;
	Y.intval=20;
	Z=add(X,Y,INT);
	printf("Sum of integers is : %d\n",Z.intval);

	X.floatval=1.4;
	Y.floatval=55.77;
	Z=add(X,Y,FLOAT);
	printf("Sum of floats is : %.2f\n",Z.floatval);

	X.doubleval=45.0897;
	Y.doubleval=959.09958;
	Z=add(X,Y,DOUBLE);
	printf("Sum of doubles is : %.2lf\n",Z.doubleval);


	return 0;
}
