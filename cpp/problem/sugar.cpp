#include <bits/stdc++.h>

using namespace std;

long long n;
long long x;
long long a[100001] = {0};
long long sum = 0;

int main(int argc, const char *argv[]) {
	cin >> n >> x;

	for ( int i=0; i<n; i++ ) {
		cin >> a[i];
	}

	for ( int i=0; i<n; i++ ) {
		if ( a[i]+a[i+1] > x ) {
			sum += a[i+1] - x + a[i];
			a[i+1] = x - a[i];
		}
	}

	cout << sum;
	return 0;
}
