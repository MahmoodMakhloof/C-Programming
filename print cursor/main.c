#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE*fptr;
	char c;
	fptr=fopen("file.txt","r");

	if(!fptr)
	{
		printf("Error file\n");
		exit(EXIT_FAILURE);
	}

	while(c=getc(fptr),!feof(fptr)) //feof is true at end of file
	{
		printf("%c > %d\n",c,ftell(fptr));
	}

}
