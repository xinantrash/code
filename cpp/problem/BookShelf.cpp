#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	int high;
	int number;
	int ans = 0;
	int cnt = 0;
	int arr[20000];

	cin >> number >> high;

	for( int i=0; i<number; ++i ) {
		cin >> arr[i];
	}

	sort(arr, arr+number);

	for( int i=number-1; i>=0; --i ) {
		ans += arr[i];
		++cnt;
		if( ans >= high ) {
			break;
		}
	}

	cout << cnt;

	return 0;
}
