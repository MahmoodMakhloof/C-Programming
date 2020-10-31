#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SEmployee
{
	char name[50];
	int birthday;
	int birthmonth;
	int birthyear;
	int salary;
};


int main ()
{
	/*you can access structure as following :
	 struct SEmployee X={"Ahmed",2,9,1998,1200};
	 */
	struct SEmployee employees[100],temp_employee;
	char firstname[20],secondname[20];
	int count=0;
	int i,j;
	char c;

	do
	{
			puts("Enter Your First Name : ");
			fflush(stdout); fflush (stdin);
			scanf("%s",firstname);
			puts("Enter Second Name : ");
			fflush(stdout); fflush(stdin);
			scanf("%s",secondname);

			strcpy(employees[count].name,firstname);
			strcat(employees[count].name," ");
			strcat(employees[count].name,secondname);

			puts("Enter Birthday as Day Month Year : ");
			fflush(stdout); fflush(stdin);
			scanf("%d %d %d",&employees[count].birthday,&employees[count].birthmonth,
					&employees[count].birthyear);

			puts("Enter Your Salary : ");
			fflush(stdout); fflush(stdin);
			scanf("%d",&employees[count].salary);

			count++;
			if(count==100)
				break;

			printf("Enter 'c' to continue\n");
			fflush(stdout); fflush(stdin);
			scanf("%c",&c);
	}
	while(c=='c');


	for (i=0;i<count-1;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(employees[i].birthyear>employees[j].birthyear ||
			   (employees[i].birthyear==employees[j].birthyear &&
			    employees[i].birthmonth>employees[j].birthmonth) ||
				(employees[i].birthyear==employees[j].birthyear &&
				employees[i].birthmonth==employees[j].birthmonth &&
				employees[i].birthday>employees[j].birthday))
			{
				temp_employee=employees[i];
				employees[i]=employees[j];
				employees[j]=temp_employee;
			}
		}
	}

	system("CLS");

	for (i=0;i<count;i++)
	{
		printf("Name : %s\tBirth : %d / %d / %d\tSalary : %d/n",
				employees[i].name,employees[i].birthday,
				employees[i].birthmonth,employees[i].birthyear,employees[i].salary);
	}

	return 0;
}
