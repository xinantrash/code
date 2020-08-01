#include <bits/stdc++.h>

using namespace std;

long long n;

int main(int argc, const char *argv[]) {
	
	cin >> n;

	for ( int i=2; i<=n; ++i ) {
		if ( n % i == 0 ) {
			cout << n/i;
			break;
		}
	}

	return 0;
}
