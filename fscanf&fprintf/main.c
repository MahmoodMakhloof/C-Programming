#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char str[1024];
	FILE *fptr;
	fptr=fopen("mydata.txt","w");
	fprintf(fptr,"%s","Makhlouf");
	fclose(fptr);

	fptr=fopen("mydata.txt","r");
	fscanf(fptr,"%s",str);
	printf("%s",str);
	fclose(fptr);
}
