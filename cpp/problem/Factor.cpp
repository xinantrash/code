#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	int n;
	bool flag = true;
	long long s[100000] = {0};

	cin >> n;

	for ( int i=0; i<n; i++ ) {
		cin >> s[i];
	}

	for ( int i=0; i<n; i++ ) {
		for ( int j=0; j<n; j++ ) {
			if ( j == n-1 ) {
				cout << "Yes";
				return 0;
			}
			if ( s[j]%s[i] != 0 ) {
				flag = false;
				break;
			}
			
		}
		if ( flag ) {
			cout << "Yes";
			return 0;
		}
	}

	if ( flag == false ) {
		cout << "No";
	}
	return 0;
}
