#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	int n;
	int arr[1000];
	cin >> n;

	for( int i=0; i<n; ++i ) {
		cin >> arr[i];
	}

	int min = arr[0];

	for( int i=0; i<n; ++i ) {
		if( arr[i] < min ) {
			min = arr[i];
		}
	}

	cout << min;
	return 0;
}
