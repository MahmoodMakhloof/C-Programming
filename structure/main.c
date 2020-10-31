#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SEmployee
{
	char name [50];
	int birthday_year;
	int birthday_month;
	int birthday_day;
	int salary;
};

int main ()
{
	struct SEmployee X,Y,Z;
	strcpy(X.name,"Mahmoud Makhlouf");
	X.birthday_year=1998;
	X.birthday_month=9;
	X.birthday_day=2;
	X.salary=0;
	printf("X contains of %s %d %d %d %d\n",X.name,X.birthday_day,X.birthday_month,X.birthday_year,X.salary);

	strcpy(Y.name,X.name);
	Y.birthday_day=X.birthday_day;
	Y.birthday_month=X.birthday_month;
	Y.birthday_year=X.birthday_year;
	Y.salary=X.salary;
	printf("Y contains of %s %d %d %d %d\n",Y.name,Y.birthday_day,Y.birthday_month,Y.birthday_year,Y.salary);

	Z=X;
	printf("Z contains of %s %d %d %d %d\n",Z.name,Z.birthday_day,Z.birthday_month,Z.birthday_year,Z.salary);

	return 0;
}
