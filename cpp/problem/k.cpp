#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<long long> nums;

int main(int argc, const char *argv[]) {
	int n;
	int position;
	cin >> n >> position;
	for ( int i=0; i<n; i++ ) {
		int temp;
		cin >> temp;
		nums.push_back(temp);
	}

	sort(nums.begin(), nums.end());

	cout << nums[position];

	return 0;
}
