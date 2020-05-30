#include <bits/stdc++.h>

using namespace std;

int ans[1001];

int main(int argc, const char *argv[]) {
	int t;
	int m;
	int time[100];
	int price[100];
	cin >> t >> m;
	for( int i=0; i<m; i++ ) {
		cin >> time[i] >> price[i];
	}

// 	if( m == 1 && time[0] <= t ) {
// 		cout << price[0];
// 	}
// 	else {
// 		cout << 0;
// 	}

	for( int i=0; i<m; i++ ) {
		for( int j=t; j>=time[i]; j-- ) {
			ans[j] = max(ans[j-time[i]]+price[i], ans[j]);
		}
	}

	cout << ans[t];
	return 0;
}
