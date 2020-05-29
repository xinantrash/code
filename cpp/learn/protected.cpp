#include <iostream>

using namespace std;

class Box
{
	protected:
		double width;
};

class SmallBox:Box
{
	public:
		void setWidth(double width);
		double getWidth();
};

void SmallBox::setWidth(double width)
{
	SmallBox::width = width;
}

double SmallBox::getWidth()
{
	return width;
}

int main(int argc, const char *argv[])
{
	SmallBox box;
	
	box.setWidth(5.0);
	cout << "Width of box:" << box.getWidth() << endl;

	return 0;
}
