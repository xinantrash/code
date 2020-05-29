#include <iostream>

int main(int argc, const char *argv[])
{
	std::cout << "/*";
	std::cout << "*/";
// 	std::cout << /* "*/" */;
	std::cout << /* "*/" /* "/*" */;

	return 0;
}
