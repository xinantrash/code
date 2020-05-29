#include <bits/stdc++.h>

int main(int argc, const char *argv[])
{
	unsigned int m;
	unsigned int t;
	unsigned int s;
	unsigned int a;

	std::cin >> m >> t >> s;
	if( m*t > s ) {
		a = ((m*t)-s)/t;
	}
	else {
		a = 0;
	}
	std::cout << a;
	return 0;
}
