#include <bits/stdc++.h>

using namespace std;

int nums[9] = {1, 0};

int main(int argc, const char *argv[]) {
	int n;

	cin >> n;

	for ( int i=1; i<n; i++ ) {
		nums[i] = nums[i-1] + 1;
	}

	do {
		for ( int i=0; i<n; i++ ) {
			cout << "    " << nums[i];
		}
		cout << "\n";
	} while ( next_permutation(nums, nums+n) );

	return 0;
}
