#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	int n;
	double total = 0;
	int arr[1000];

	cin >> n;

	for( int i=0; i<n; ++i ) {
		cin >> arr[i];
	}

	sort(arr, arr+n);

	for( int i=1; i<n-1; ++i ) {
		total += arr[i];
	}
	
	printf("%.2lf", total/(n-2));
	return 0;
}
