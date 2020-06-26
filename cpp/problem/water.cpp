#include <bits/stdc++.h>

using namespace std;

int n;
long long sum = 0;
long long nums[1000] = {0};

int main(int argc, const char *argv[]) {
	

	cin >> n;

	for ( int i=0; i<n; i++ ) {
		int x;
		cin >> x;
		nums[i] = x*1001+i;
	}

	sort(nums,nums+n);

	for ( int i=0; i<n; i++ ) {
		sum += nums[i] / 1001 * (n-i-1);
		cout << nums[i] % 1001 + 1 << " ";
	}
	printf("\n%.2lf", 1.0*sum/n);
	
	return 0;
}
