#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i,j;
	float matrix [3][3];
	float mmatrix[3][3];

	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("Enter item (%d , %d) : ",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&matrix[i][j]);

		}
	}

	printf("\nreal Matrix :\n");
	for (i=0;i<3;i++)
		{
			for (j=0;j<3;j++)
			{
				printf("\t%.2f",matrix[i][j]);
			}
			printf("\n");
		}


	for (i=0;i<3;i++)
			{
				for (j=0;j<3;j++)
				{
					mmatrix[i][j]=matrix[j][i];
				}

			}

	printf("\nmodified Matrix :\n");
		for (i=0;i<3;i++)
			{
				for (j=0;j<3;j++)
				{
					printf("\t%.2f",mmatrix[i][j]);
				}
				printf("\n");
			}



}
