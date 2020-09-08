#include <bits/stdc++.h>

using namespace std;

int n;
int m;
int k;
int nums[1000000] = {0};

int find_number(int l, int r, int nums[], int k) {
	if ( l == r ) {
		if ( nums[l] == k ) {
			return l+1;
		}
		else { 
			return -1;
		}
	}

	int mid = (l + r) / 2;

	if ( k <= nums[mid] ) {
		find_number(l, mid, nums, k);
	}

	else {
		find_number(mid+1, r, nums, k);
	}
}

int main(int argc, const char *argv[]) {
	cin >> n >> m;

	for ( int i=0; i<n; i++ ) {
		cin >> nums[i];
	}

	for ( int i=1; i<=m; i++ ) {
		cin >> k;
		cout << find_number(0, n-1, nums, k) << " ";
	}

	return 0;
}
