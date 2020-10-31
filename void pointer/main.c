#include <stdio.h>

enum type
{
	INTEGER,DOUBLE
};

int cmp (void*value1,void*value2,enum type data_type)
{
	int r;
	switch (data_type)
	{
	case INTEGER:
		if(*(int*)value1==*(int*)value2)r=0;
		else if(*(int*)value1>*(int*)value2)r=1;
		else r=-1;
		break;

	case DOUBLE:
		if(*(double*)value1==*(double*)value2) r=0;
		else if(*(double*)value1>*(double*)value2) r=1;
		else r=-1;
		break;

	default :
		break;
	}
	return r;
}

int main()
{
	int x1=9,x2=6,x3=9;
	double y1=6.7,y2=3.1,y3=88.5;

	printf("compare x1 and x2 gives\t%d\n",cmp(&x1,&x2,INTEGER));
	printf("compare x1 and x3 gives\t%d\n",cmp(&x1,&x3,INTEGER));
	printf("compare x2 and x3 gives\t%d\n",cmp(&x2,&x3,INTEGER));

	printf("compare y1 and y2 gives\t%d\n",cmp(&y1,&y2,DOUBLE));
	printf("compare y1 and y3 gives\t%d\n",cmp(&y1,&y3,DOUBLE));
	printf("compare y2 and y3 gives\t%d\n",cmp(&y2,&y3,DOUBLE));
}
