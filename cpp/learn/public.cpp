#include <iostream>

using namespace std;

class Line
{
	public:
		double length;
		void setLength(double length);
		double getLength();
};

void Line::setLength(double length)
{
	Line::length = length;
}

double Line::getLength()
{
	return length;
}

int main(int argc, const char *argv[])
{
	Line line;
	line.setLength(6.0);
	cout << "Length of Line:" << line.getLength() << endl;

	line.length = 10.0;
	cout << "Length of Line:" << line.length << endl;
	
	return 0;
}
