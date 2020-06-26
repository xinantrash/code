#include <bits/stdc++.h>

using namespace std;

int v;
int n;
int num[30] = {0};
int ans[20000] = {0};

int main(int argc, const char *argv[]) {
	cin >> v;
	cin >> n;
	for ( int i=0; i<n; i++ ) {
		cin >> num[i];
	}

	for ( int i=0; i<n; i++ ) {
		for ( int j=v; j>=num[i]; j-- ) {
			ans[j] = max(ans[j], ans[j-num[i]]+num[i]);
		}
	}

	cout << v - ans[v];

	return 0;
}
