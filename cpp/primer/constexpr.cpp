#include <iostream>

int main(int argc, const char *argv[])
{
	constexpr int mf  = 20; 	// 20 is constant expression
	constexpr int mf1 = mf + 1; // mf + 1 is constant expression
	const int *p = nullptr; 	// p is a pointer that point to a integer constants
	constexpr int *q = nullptr; // q is a constant pointer that pointing to a Ingteger
}
