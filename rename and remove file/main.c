#include <stdio.h>
#include <stdlib.h>

int main (){
	FILE *fptr;
	fptr=fopen("myfile.txt","w");
	fclose(fptr);

	rename("myfile.txt","data.txt");
	//remove("myfile.txt");
}

