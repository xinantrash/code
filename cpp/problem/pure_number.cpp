#include <bits/stdc++.h>

using namespace std;

int nums[100];
int n;

bool isPrime(int number) {
	for ( int i=2; i<sqrt(number)+1; i++ ) {
		if ( number == 2 ) {
			continue;
		}

		if ( number % i == 0 ) {
			return false;
		}
	}

	return true;
}

int main(int argc, const char *argv[]) {
	
	cin >> n;

	for ( int i=0; i<n; i++ ) {
		cin >> nums[i];
	}

	for ( int i=0; i<n; i++ ) {
		if ( !isPrime(nums[i]) ) {
			nums[i] = 0;
		}
	}

	for ( int i=0; i<n; i++ ) {
		if ( nums[i] != 0 && nums[i] != 1 ) {
			cout << nums[i] << " ";
		}
	}

	return 0;
}
