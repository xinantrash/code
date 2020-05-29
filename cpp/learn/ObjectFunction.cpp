#include<iostream>

using namespace std;

class Box
{
	public:
		double length;
		double breadth;
		double height;

		double getVolunm(void);
		void setLength(double length);
		void setHeight(double height);
		void setbreadth(double breadth);
};

double Box::getVolunm()
{
	return length*breadth*height;
}

void Box::setLength(double length)
{
	Box::length = length;
}

void Box::setHeight(double height)
{
	Box::height = height;
}

void Box::setbreadth(double breadth)
{
	Box::breadth = breadth;
}

int main(int argc, const char *argv[])
{
	Box Box1;
	Box Box2;
	double volume = 0.0;

	Box1.setHeight(5.0);
    Box1.setbreadth(7.0);
    Box1.setLength(6.0);

	Box2.setHeight(10.0);
	Box2.setbreadth(13.0);
	Box2.setLength(12.0);

	volume = Box1.getVolunm();
   	cout << "Box1 的体积：" << volume <<endl;

	volume = Box2.getVolunm();
	cout << "Box2 的体积：" << volume <<endl;

	return 0;
}
