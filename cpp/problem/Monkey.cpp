#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	long long sum = 0;
	int day = 0;
	int k;
	cin >> k;
	
	for ( int i=1; day<k; i++ ) {
		sum += i*i;
		day += i;
		if( day > k ) {
			sum += i*(k-day);
		}
	}

	cout << sum;

	return 0;
}
