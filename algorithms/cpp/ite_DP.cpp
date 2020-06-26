#include <bits/stdc++.h>

using namespace std;

int ite_DP(vector<int> &nums, int index) {
	vector<int> opt(nums.size());
	 opt[0] = nums[0];
	 opt[1] = max(nums[0], nums[1]);

	 for ( int i=2; i<nums.size(); i++ ) {
	 	 opt[i] = max(opt[i-2]+nums[i], opt[i-1]);
	 }
	 return opt[index];
}

int main(int argc, const char *argv[]) {
	vector<int> nums = {1, 2, 4, 1, 7, 8, 3};
	int index;
	cin >> index;
	cout << ite_DP(nums, index);
	return 0;
}
