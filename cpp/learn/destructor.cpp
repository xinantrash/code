#include <iostream>

using namespace std;

class Line
{
	public:
		void setLength(double length);
		double getLength();
		Line();
		~Line();

	private:
		double length;
};

Line::Line()
{
	cout << "Object is being created" << endl;
}

Line::~Line()
{
	cout << "Object is being deleted" << endl;
}

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
	cout << "Length of line:" << line.getLength() << endl;

	return 0;
}
