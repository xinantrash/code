#include <bits/stdc++.h>

// 不开long long的人，户口本只有一页噢～～～

using namespace std;

long long n;
long long t;
long long m[10001] = {0};
long long value[10001] = {0};

long long dp[10000001] = {0};

int main(int argc, const char *argv[]) {
	cin >> t >> n;
	
	for ( int i=1; i<=n; i++ ) {
		cin >> m[i] >> value[i];
	}

	for ( int i=1; i<=n; i++ ) {
		for ( long long j=m[i]; j<=t; j++ ) {
			dp[j] = max(dp[j], dp[j-m[i]]+value[i]);
		}
	}

	cout << dp[t] << endl;

	return 0;
}
