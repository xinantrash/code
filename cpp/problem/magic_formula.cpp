#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	int nums[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int cnt = 0;
	do {
		if ( (nums[0]*(nums[1]*100+nums[2]*10+nums[3])) == ((nums[4]*10+nums[5])*(nums[6]*100+nums[7]*10+nums[8])) ) {
			cnt++;
		}
	} while (next_permutation(nums, nums+9));

	cout << cnt;
	return 0;
}
