#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	int nums[3] = {0};

	for ( int i=0; i<3; i++ ) {
		cin >> nums[i];
	}

	sort(nums, nums+3);

	for ( int i=0; i<3; i++ ) {
		cout << nums[i] << " ";
	}

	return 0;
}
