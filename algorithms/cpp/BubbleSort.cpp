#include <iostream>

int main(int argc, const char *argv[])
{
	unsigned int n;
	unsigned int cnt = 0;
	int temp;
	int arr[10000] = {0};
	std::cin >> n;
	for( int i=0; i<n; i++ ) {
		std::cin >> arr[i];
	}
	for( int i=0; i<n; i++ ) {
		for( int j=i+1; j<n; j++ ) {
			if( arr[i] > arr[j] ) {
				temp   = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				cnt++;
			}
		}
	}
	std::cout << cnt;
	return 0;

}
