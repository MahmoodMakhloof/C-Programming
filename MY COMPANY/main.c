#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int count=0;

typedef struct
{
	char first_name[20];
	char last_name [20];
}my_name;

typedef enum
{
	manger=1,engineer=2,hr=3,marketer=4,technical=5
}my_job;

typedef struct
{
	my_name name;
	unsigned char age;
	unsigned int salary;
	char address[100];
	char phone_num[15];
	my_job job;
	char pass[10];

}my_employee;

void welcome()
{
	printf("**********************************************\n"
		   "**************** MY COMPANY ******************\n"
		   "**********************************************\n");
}

void add(my_employee *x)
{
	printf("Enter your first name please :");
	fflush(stdout); fflush(stdin);
	scanf("%s",(x+count)->name.first_name);
	printf("Enter your last name :");
	fflush(stdout); fflush (stdin);
	scanf("%s",(x+count)->name.last_name);

	printf("Enter your age :");
	fflush(stdout); fflush (stdin);
	scanf("%d",&(x+count)->age);

	printf("Enter your address :");
	fflush(stdout); fflush (stdin);
	gets((x+count)->address);

	printf("Enter your phone number :");
	fflush(stdout); fflush (stdin);
	scanf("%s",(x+count)->phone_num);

	printf("1) manger\t2) engineer\t3) hr\t4) marketer\t5) technical\n");

	while(1)
		{
		printf("Enter your job :");
		fflush(stdout); fflush (stdin);
		scanf("%d",&(x+count)->job);
		if((x+count)->job==1 || (x+count)->job==2 || (x+count)->job==3 ||
			(x+count)->job==4 || (x+count)->job==5) break;
		else
			printf("invalid choice, try again !\n");

		}

		switch((x+count)->job)
		{
			case manger:
				(x+count)->salary=30000; break;
			case engineer:
				(x+count)->salary=10000; break;
			case hr:
				(x+count)->salary=7000; break;
			case marketer:
				(x+count)->salary=5000; break;
			case technical:
				(x+count)->salary=3000; break;
			default :
				break;

		}

	printf("Enter your pass please ( 6 digits ) :");
	fflush(stdout); fflush(stdin);
	scanf("%s",(x+count)->pass);

	count++;

}

char *SET_JOB(my_job y)
{
	switch(y)
	{
	case 1:
		return "Manger"; break;
	case 2:
		return "Engineer"; break;
	case 3:
		return "HR"; break;
	case 4:
		return "Marketer"; break;
	case 5:
		return "Technical"; break;
	}

}


int main()
{
	int i;
	int int_choice;
	char choice;
	welcome();
	my_employee employee[1000];
	char temp_name[20];
	char temp_pass[10];
	unsigned long long sumofsalaries=0;


	while(1)
	{
		printf("\n1) add new member\t2) search\n"
				"3) members of any job\t4) sum of salaries\nchoose what you want to do : ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&int_choice);

		switch(int_choice)
		{
		case 1:
			do
				{
					add(employee);
					printf("press 'c' to continue and press any key to exit : ");
					fflush(stdout); fflush (stdin);
					scanf("%c",&choice);
				}
				while(choice=='c'||choice =='C');
			break;


		case 2:
			printf("Enter your first name : ");
			fflush(stdout); fflush (stdin);
			scanf("%s",temp_name);
			printf("Enter your passward : ");
			fflush(stdout); fflush (stdin);
			scanf("%s",temp_pass);
			for(i=0;i<count;i++)
			{
				if(strcmp(employee[i].name.first_name,temp_name)==0 &&
						strcmp(employee[i].pass,temp_pass)==0)
				{
					printf("\nName: %s %s\nJob: %s\nSalary: %d LE\nAddress: %s\nPhone number: %s\n",
							employee[i].name.first_name,employee[i].name.last_name,
							SET_JOB(employee[i].job),employee[i].salary,employee[i].address,
							employee[i].phone_num); break;
				}
			}

			break;

		case 3:
			printf("1) manger\t2) engineer\t3) hr\t4) marketer\t5) technical\n");
			printf("Choose job :");
			fflush(stdout); fflush(stdin);
			scanf("%d",&int_choice);
			printf("\nMembers of %ss :\n",SET_JOB(int_choice));
			for(i=0;i<count;i++)
			{
				if(employee[i].job==int_choice)
					printf("%s %s\n",employee[i].name.first_name,employee[i].name.last_name);

			}
			break;

		case 4:
			for(i=0;i<count;i++)
			{
				sumofsalaries+=employee[i].salary;
			}
			printf("Sum of salaries is %llu LE\n",sumofsalaries);
			break;

		default:
			printf("invalid choice!\n");
			break;

		}


	}

}
