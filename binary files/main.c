#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i;
	FILE *fptr;
	fptr=fopen("myfile.bin","w+b");
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int data[10];

	fwrite(arr,sizeof arr ,1,fptr);

	rewind(fptr); // you can't write and read directly , you must rewind

	fread(data,sizeof data,1,fptr);

	for (i=0;i<sizeof data /sizeof data[0];i++)
	{
		printf("%d\t",data[i]);
	}
}
