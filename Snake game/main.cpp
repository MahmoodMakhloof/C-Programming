#include <iostream>
using namespace std;

#define length 60
#define width 20

void setArea (string Area[width][length])
{
	for(int i=0;i<width;i++)
	{
		for(int j=0;j<length;j++)
		{
			Area[i][j]="*";
		}
	}

	for(int i=1;i<width-1;i++)
	{
		for(int j=1;j<length-1;j++)
		{
			Area[i][j]=" ";
		}
	}
}

void printArray(string Area[width][length])
{
	for(int i=0;i<width;i++)
	{
		for(int j=0;j<length;j++)
		{
			cout<<Area[i][j];
		}

		cout<<endl;
	}
}

int main()
{
	string Area [width][length];
	setArea(Area);
	printArray(Area);
}
