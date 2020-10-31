#include <iostream>
using namespace std;

class Shape
{

public:
	string color;
Shape (string c)
{
	color = c;
}

/* usual class has usual methodes
virtual void draw ()
{
	cout<<"draw parent shape in "<<color<<" color"<<endl;
}

virtual void erase ()
{
	cout<<"erase the parent shape\n";
}

virtual int area ()
{
	cout<<"area of parent shape "<<endl;
	return 0;
}
*/

//pure functions so the class become an abstract class as a mode we can't create an object of it
//we have to implement or overide the functions in drived classes
virtual void draw ()=0;
virtual void erase ()=0;
virtual int area ()=0;
//final keyword for avoid base class users from overriding in this function
virtual void display()final
{
	cout<<"by Bob\n";
}
};
class Rec :public Shape
{
private:
	int len;
	int wid;

public:
	Rec(string c,int l,int w ):Shape(c)
	{
		wid=w;
		len = l;
	}
	int area ()
	{
		cout<<"area of rectangle = "<<len*wid<<endl;
		return len*wid;
	}

	void draw ()
	{
		cout<<"draw a rectangle in "<<color<<" color\n";
	}

	void erase ()
	{
		cout <<"erase the rectangle\n";
	}
};

class Cir :public Shape
{
private:
	int rad;

public:
	Cir(string c,int r ):Shape(c)
	{
		rad=r;
	}
	int area ()
	{
		cout<<"area of circle = "<<3.14*rad*rad<<endl;
		return 3.14*rad*rad;
	}

	void draw ()
	{
		cout<<"draw a circle in "<<color<<" color\n";
	}

	void erase ()
	{
		cout <<"erase the circle\n";
	}
};

int main()
{
	Shape *shapeptr;
	Rec r ("red",10,5);
	Cir c ("white",3.5);

	shapeptr = &r;
	shapeptr->area();
	shapeptr->draw();
	shapeptr->display();

	shapeptr = &c;
	shapeptr->area();
	shapeptr->draw();
	shapeptr->display();

	return 0;
}
