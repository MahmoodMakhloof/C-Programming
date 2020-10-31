#include <stdio.h>

struct Semployee
{
	char name[20];
	int id;
	int age;
	double salary;
};

int main ()
{
	int i;
	struct Semployee manger ={"mahmoud makhlouf",111,22,10000};
	struct Semployee employees []={{ "ahmed khalid ",123,21,1007},
			{"mena arafa",222,23,2500},
			{"salim ahmed",333,36,5000}};

	struct Semployee *ptr;
	ptr=&manger;

	printf("manger : %s\t%d\t%d\t%.2lf\n",ptr->name,ptr->id,ptr->age,ptr->salary);

	ptr->salary=30000;
	printf("manger : %s\t%d\t%d\t%.2lf\n\n",ptr->name,ptr->id,ptr->age,ptr->salary);

	ptr=employees;
	for(i=0;i<sizeof(employees)/sizeof(struct Semployee);i++,ptr++)
		printf("employee #%d : %s\t%d\t%d\t%.2lf\n",i+1,ptr->name,ptr->id,ptr->age,ptr->salary);


}
