#include<stdio.h>

/* both ways for passing array or pointer is identical and no difference */
void sort (int values[],int nvalues)
{
	int i ,j;
	for (i=0;i<nvalues-1;i++)
	{
		for(j=i+1;j<nvalues;j++)
		{
			if(values[i]>values[j])
			{
				int temp=values[i];
				values[i]=values[j];
				values[j]=temp;
			}
		}
	}
}

/*
void sort (int *values ,int nvalues)
{
	int i ,j;
		for (i=0;i<nvalues-1;i++)
		{
			for(j=i+1;j<nvalues;j++)
			{
				if(values[i]>values[j])
				{
					int temp=values[i];
					values[i]=values[j];
					values[j]=temp;
				}
			}
		}
}
*/

int main()
{
	int arr[]={1,7,5,8,9,34,6};
	sort(arr,sizeof(arr)/sizeof(int));
	int i;
	for (i=0;i<sizeof(arr)/sizeof(int);i++)
	{
		printf("%d\t",arr[i]);
	}
}
