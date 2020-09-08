#include <bits/stdc++.h>

using namespace std;

int w;
int n;
int ans = 0;
int nums[30000] = {0};

int main(int argc, const char *argv[]) {
	cin >> w >> n;

	for ( int i=0; i<n; i++ ) {
		cin >> nums[i];
	}

	sort(nums, nums+n);

	int i = 0;
	int j = n - 1;

	while ( i <= j ) {
		if ( nums[i]+nums[j] <= w ) {
			ans++;
			i++;
			j--;
		}
		else {
			ans++;
			j--;
		}
	}
	
	cout << ans;

	return 0;
}
