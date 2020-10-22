#include <bits/stdc++.h>

using namespace std;

int ans;

void dfs(int x, int y, int z) {
	if ( z == 1 ) {
		if ( y >= x ) {
			ans++;
		}
		return;
	}
	for ( int i=x; i<=y/z; i++ ) {
		dfs(i, y-i, z-1);
	}
}

int main(int argc, const char *argv[]) {
	int n;
	int k;
	cin >> n >> k;

	for ( int i=1; i<=n/k; i++ ) {
		dfs(i, n-i, k-1);
	}

	cout << ans;

	return 0;
}
