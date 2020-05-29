#include <iostream>

int main(int argc, const char *argv[])
{
	int i;
	int *p = &i;
	int &ri = i;
	i = 5;
	ri = 10;
	std::cout << *p << std::endl;
	std::cout << p  << std::endl;
	return 0;
}
