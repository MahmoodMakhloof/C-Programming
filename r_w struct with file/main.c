#include <stdio.h>
#include <stdlib.h>

typedef struct employee
{
	char name [50];
	int id;
	int salary;
}emp;

int main()
{
	char ch;
	emp e;
	emp data;
	FILE *fptr;
	fptr=fopen("data.bin","w+b");

	do
	{
		printf("Enter your name : ");
		fflush(stdout); fflush(stdin);
		scanf("%s",e.name);
		printf("Enter your id : ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&e.id);
		printf("Enter your salary : ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&e.salary);

		fwrite(&e,sizeof(e) ,1,fptr);

		printf("Press 'E' to exit press any key for continue ");
		fflush(stdout); fflush(stdin);
		scanf("%c",&ch);

	}
	while (ch!='E');

	rewind(fptr);

	if(!fptr)
	{
		printf("Error when read\n");
	}
	else
	{
		while ((fread(&data,sizeof data ,1,fptr))==1)
			{
				printf("name: %s\tid: %d\tsalary: %d\n",data.name,data.id,data.salary);
			}
	}


	fclose(fptr);



}
