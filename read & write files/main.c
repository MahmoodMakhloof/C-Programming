#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	/************ write char to file **************
	char c;
	char str[100]
	FILE *fptr;
	fptr =fopen("new file.txt","w"); //"w" or "a" for writing the first for new write second for append
	do
	{
		scanf("%c",&c);
		putc(c,fptr);
	}
	while(c!='\n');
	fclose(fptr);
	*/

	/*********** write string to file **************
	char c,str[100];
	FILE *fptr;
	fptr=fopen("new file.txt","w");
	do
	{
		printf("Enter line :");
		fflush(stdout); fflush(stdin);
		gets(str);
		fputs(str,fptr);
		putc('\n',fptr);
		printf("again ? Enter Y No? Enter N :");
		fflush(stdout); fflush(stdin);
		scanf("%c",&c);

	}
	while(c=='Y');
	*/

	/************ Read char from file ***************
	char c;
	FILE *fptr;
	if((fptr=fopen("new file.txt","r"))!=NULL)
	{
		while((c=getc(fptr))!=EOF)
		{
			printf("%c",c);
		}
		fclose(fptr);
	}
	else
	{
		printf("File not found !");
		exit(1);
	}
	*/

	/************ Read line from file ****************
	unsigned char ctr=0;
	char str[255];
	FILE *fptr;
	if ((fptr=fopen("new file.txt","r"))!=NULL)
	{
		while(fgets(str,18,fptr)!=NULL) //18 is the max count ,the count also finished by end of line
		{
			printf("%s",str);
			ctr++;
		}
		printf("\nnum of turns :%d",ctr);
		fclose(fptr);
	}
	*/


	//************************ Set cursor ******************************
	char c;
	FILE *fptr;
	if((fptr=fopen("new file.txt","r"))!=NULL)
	{
		fseek(fptr,10,SEEK_SET);
		/*set cursor any where in the text ,
		  there are another 2 modes
		    - fseek(fptr,10,SEEK_END); end of text
		    - fseek(fptr,10,SEEK_CUR); current mode
		    note : fseek() active with read only */

		c=getc(fptr);
		printf("%c",c);

		c=getc(fptr);
		printf("%c",c);

		c=getc(fptr);
		printf("%c",c);

		c=getc(fptr);
		printf("%c",c);

		fclose(fptr);
	}
	else
	{
		printf("File not found !");
		exit(1);
	}


}

