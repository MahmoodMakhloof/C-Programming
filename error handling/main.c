#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


int main ()
{
	FILE *fptr;
	fptr = fopen("text.txt","r"); //this file not existed


	printf("error num : %d\n",errno);
	printf("%s\n",strerror(errno));
	perror("message error from perror");

}
