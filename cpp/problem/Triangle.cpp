#include<bits/stdc++.h>

int main(int argc, const char *argv[])
{
	double a, b, c;
	std::cin >> a >> b >> c;
	double s, p;
	p = (a+b+c) / 2;
	s = std::sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.1lf", s);
	return 0;
}
