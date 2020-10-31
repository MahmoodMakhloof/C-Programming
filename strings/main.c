#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char str [100]={'h','e','l','l','o',0};
	printf("%s",str);

	char name [100];
	printf("\nEnter your name : ");
	fflush(stdout); fflush(stdin);
	/*gets () function can contain more than word , scanf() cannot */
	gets(name);
	printf("your name is %s\n\n",name);

	char arr1[20]="copy";
	char arr2[20];
	strcpy(arr2,arr1);
	printf("%s\n\n",arr2);

	char arr3[]="mahmoud";
	char arr4[]="makhlouf";
	strcat(arr3," ");
	strcat (arr3,arr4);
	printf("%s\n\n",arr3);

	strupr(arr3);
	printf("%s\n\n",arr3);

	printf("%d\n",strlen(arr3));

	if(strcmp(arr3,name)==0)
		printf("identical\n");
	else
		printf("not identical\n");

	if(stricmp(arr3,name)==0)
		printf("identical\n");
	else
		printf("not identical\n");


	char arr5[]="1234 baby";
	char arr6[]="10.2 c";

	printf("%d\n",atoi(arr5));
	printf("%.2f\n",atof(arr6));





	return 0;
}
