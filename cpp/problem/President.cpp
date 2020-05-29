#include <bits/stdc++.h>

int main(int argc, const char *argv[])
{
	unsigned int n;
	unsigned int tikSize;
	unsigned int maxSize;
	std::string max = "";
	std::string tik;
	int num;
	std::cin >> n;
	for( int i=1; i<=n; i++ ) {
		std::cin >> tik;
		tikSize = tik.size();
		maxSize = max.size();
		if( tikSize > maxSize || ( tikSize >= maxSize && tik > max ) ) {
			max = tik;
			num = i;
		}
	}
	std::cout << num << std::endl << max;
	return 0;
}
