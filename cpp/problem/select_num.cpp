#include <bits/stdc++.h>

using namespace std;


long long nums[20];
int ans = 0;
int n;
int k;

bool isPrime(int n) {
	for ( int i=2; i<=sqrt(n); i++ ) {
		if ( n % i == 0 ) {
			return false;
		}
	}
	return true;
}

void dfs(int v1, int cnt, int sum) {
	if ( cnt == k && isPrime(sum) ) {
		ans++;
	}

	for ( int i=v1; i<n; i++ ) {
		dfs(i+1, cnt+1, sum+nums[i]);
	}
}

int main(int argc, const char *argv[]) {
	cin >> n >> k; 

	for ( int i=0; i<n; i++ ) {
		cin >> nums[i];
	}

	dfs(0, 0, 0);

	cout << ans;

	return 0;
}

