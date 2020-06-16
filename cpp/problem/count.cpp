#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	long long nums;
	int a[10] = {0};
	cin >> nums;

	while( nums != 0 ) {
		int temp = nums % 10;
		nums /= 10;
		for( int i=0; i<10; i++ ) {
			if( temp == i ) {
				a[i]++;
				break;
			}
		}
	}

	for( int i=0; i<10; i++ ) {
		cout << a[i] << " ";
	}

	return 0;
}
