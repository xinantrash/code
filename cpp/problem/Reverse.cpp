// #include <iostream>
// 
// std::string s;
// 
// int main(int argc, const char *argv[])
// {
// 	std::cin >> s;
// 
// 	for( int i=s.size()-1; i>=0; i-- ) {
// 		std::cout << s[i];
// 	}
// 
// 	return 0;
// }

#include <iostream>

int main(int argc, const char *argv[])
{
	int n;
	double t;
	std::cin >> t;
	std::cin >> n;

	printf("%.3lf\n", t/n);
	printf("%d", n*2);

	return 0;
}
