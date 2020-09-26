#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	int n;
	int l;
	int num;
	vector<int> nums;
	int max = 0;
	int loc;
	vector<int> ans;

	scanf("%d", &n);

	for ( int i=0; i<n; i++ ) {
		scanf("%d %d %d", &l, &num, &loc);
		for ( int i=0; i<num; i++ ) {
			int temp;
			scanf("%d", &temp);
			nums.push_back(temp);
		}

		for ( int j=0; j<num; j++ ) {
			if ( max < nums[j] ) {
				max = nums[j];
			}
		}

		if ( nums[num-1] > loc ) {
			ans.push_back(nums[num-1]*2);
		}
		else { 
			ans.push_back(loc*2);
		}
		nums.clear();
		max = 0;
	}

	for ( int i=0; i<n; i++ ) {
		printf("%d\n", ans[i]);
	}

	return 0;
}
