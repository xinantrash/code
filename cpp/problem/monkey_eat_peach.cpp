#include <bits/stdc++.h>

using namespace std;

int sum = 1;
int n;

int main(int argc,const char *argv[]) {
	cin >> n;

	for ( int i=1; i<n; i++ ) {
		sum = (sum+1) * 2;
	}

	cout << sum;

	return 0;
}

