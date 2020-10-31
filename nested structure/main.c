#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fullname
{
	char firstname[20];
	char lastname[20];
};

struct Sstudents
{
	struct fullname name;
	int id;
	int age;
	int degree;
};



int main ()
{
	struct Sstudents X={ {"Mahmoud","Makhlouf"} ,111,22,100};
	printf("%s %s\nid:%d %d years %d degree",X.name.firstname,
			X.name.lastname,X.id,X.age,X.degree);


	return 0;
}
