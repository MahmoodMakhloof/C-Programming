#include <stdio.h>


struct Sdata
{
	int day;
	int month;
	int year;
};

struct Sstudent
{
	char name[40];
	char description[100];
	struct Sdata data;
	double degree[10];
	double total_degree;
};

struct Sstudent Slow_updete_total_degree(struct Sstudent deg)
{
	deg.total_degree=0;
	int i;
	for(i=0;i<10;i++)
	{
		deg.total_degree+=deg.degree[i];
	}
	return deg;
}

void Fast_update_total_degree(struct Sstudent *ptr)
{
	ptr->total_degree=0;
	int i;
	for(i=0;i<10;i++)
	{
		ptr->total_degree+=ptr->degree[i];
	}
}

int main ()
{
	struct Sstudent S={"Mahmoud","engineer",{2,9,1998},
			{77,99,55,78,90,76,84,84,99,100}};


	S=Slow_updete_total_degree(S);
	printf("Total degree of %s is %.2lf %%\n",S.name,(double)(100.0*S.total_degree/1000.0));

	Fast_update_total_degree(&S);
	printf("Total degree of %s is %.2lf %%\n",S.name,(double)(100.0*S.total_degree/1000.0));


	return 0;
}
