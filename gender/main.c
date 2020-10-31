#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Gender
{
	MALE,FEMALE
};

struct Sperson
{
	char name[100];
	enum Gender mygender;
};

int main ()
{
	int i;
	struct Sperson persons []={{"Mahmoud Makhlouf",MALE},{"Shad Ragab",FEMALE}};
	for (i=0;i<sizeof(persons)/sizeof(struct Sperson);i++)
	{
		printf("Name: %s\t Gender: %s\n",persons[i].name,
				(persons[i].mygender==MALE)?"MALE":"FEMALE");
	}
	return 0;
}
