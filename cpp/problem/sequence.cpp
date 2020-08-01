#include <bits/stdc++.h>

using namespace std;

long long n;
int cnt;
long long nums[1000000000] = {0};

int main(int argc, const char * argv[]) {

	cin >> n;

	nums[0] = 1;
	for ( int i=1; i<n; i++ ) {
		nums[i] = nums[i-1] + 1;
	}

	return 0;
}
