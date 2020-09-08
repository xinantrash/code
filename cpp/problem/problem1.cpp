#include <bits/stdc++.h>

using namespace std;

int n;
int nums[1000] = {0};

int main(int argc, const char *argv[]) {
	
	cin >> n;

	for ( int i=0; i<n; i++ ) {
		cin >> nums[i];
	}

	sort(nums, nums+n);

	cout << nums[n-1] - nums[0];

	return 0;
}
