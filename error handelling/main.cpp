#include<iostream>
using namespace std;

int main()
{
	int x=5;
	int y=2;

	cin>>x;
	cin>>y;
	try
	{
	if(y==0)
		throw exception();
	if(x>30)
		throw "x must be less than 30";
	else
	cout<<x/y;
	}

	/*
	catch(exception e)
	{
		cout<<e.what()<<endl;
		cout<<"y must be zero\n";

	}

	catch(char * msg)
	{
		cout<<msg<<endl;
	}
	*/

	//general catch for any exception
	catch(...)
	{
		cout<<"error occured please contact admin\n";
	}
	cout<<"program continued\n";

	return 0;
}


