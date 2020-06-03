#include <bits/stdc++.h>

using namespace std;

int a[20001];
int nums[30];

int main(int argc, const char *argv[]) {
	int v;
	int n;
	cin >> v >> n;

	for( int i=0; i<n; i++ ) {
		cin >> nums[i];
	}

	for( int i=0; i<n; i++ ) {
		for( int j=v; j>=nums[i]; j-- ) {
			a[j] = max(a[j], a[j-nums[i]]+nums[i]);
		}
	}

	cout << v-a[v];

	return 0;
}
