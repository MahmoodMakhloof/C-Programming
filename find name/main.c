#include <stdio.h>
#include <stdlib.h>

int find_name(char names[][14],int n,char my_name[])
{
	int i;
	for(i=0;i<n;i++)
	{
		if(stricmp(my_name,names[i])==0)
			return 1;
	}
}

int main ()
{
	char names[5][14]={"ahmed","mohamed","mahmoud","mona","sara"};
	char my_name[14];
	puts("Enter your name : ");
	fflush(stdout); fflush(stdin);
	gets(my_name);

	if(find_name(names,5,my_name)==1)
		puts("Hello");
	else
		puts("your name doesn't existed");

	return 0;
}
