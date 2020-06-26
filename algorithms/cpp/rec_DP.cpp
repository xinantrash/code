#include <bits/stdc++.h>

using namespace std;

int rec_opt(vector<int> &nums, int index) {
	int ans = 0;
	if ( index == 0 ) {
		ans = nums[0];
	}
	else if ( index == 1 ) {
		ans = max(nums[0], nums[1]);
	}
	else {
		ans = max((rec_opt(nums, index-2) + nums[index]), (rec_opt(nums, index-1)));
	}

	return ans;
}

int main(int argc, const char *argv[]) {
	vector<int> nums = {1, 2, 4, 1, 7, 8, 3};
	int index;
	cin >> index;
	cout << rec_opt(nums,index);
	return 0;
}
