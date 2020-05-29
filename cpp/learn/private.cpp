#include <iostream>

using namespace std;

class Box
{
	public:
		double length;
		void setWidth(double width);
		double getWidth();

	private:
		double width;
};

void Box::setWidth(double width)
{
	Box::width = width;
}

double Box::getWidth()
{
	return width;
}

int main(int argc, const char *argv[])
{
	Box box;
	
	box.length = 10.0;
	cout << "Length of box:" << box.length << endl;

	box.setWidth(10.0);
	cout << "Width of box:" << box.getWidth() << endl;

	return 0;
}
