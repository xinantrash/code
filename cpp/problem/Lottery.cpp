#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
	int n;
	int num;
	int arr[7];
	int ans[7];
	cin >> n;

	for( int i=0; i<7; ++i ) {
		cin >> arr[i];
	}

	for( int i=0; i<7; ++i ) {
		ans[i] = 0;
	}

	for( int i=0; i<n; ++i ) {
		int cnt = 0;
		for( int j=0; j<7; ++j ) {
			cin >> num;
			for( int k=0; k<7; ++k ) {
				if( arr[k] == num ) {
					++cnt;
				}
			}
		}
		if( cnt == 7 ) {
			++ans[0];
		}
		else if( cnt == 6 ) {
			++ans[1];
		}
		else if( cnt == 5 ) {
			++ans[2];
		}
		else if( cnt == 4 ) {
			++ans[3];
		}
		else if( cnt == 3 ) {
			++ans[4];
		}
		else if( cnt == 2 ) {
			++ans[5];
		}
		else if( cnt == 1 ) {
			++ans[6];
		}
	}

	for( int i=0; i<7; ++i ) {
		cout << ans[i] << " ";
	}
	return 0;
}
