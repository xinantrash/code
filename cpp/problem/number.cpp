#include <bits/stdc++.h>

using namespace std;

int k;
int temp;
string x = "";
string ans = "1";

int main(int argc, const char *argv[]) {

	cin >> k >> x;

	for ( int i=1; i<=k; i++ ) {
		ans.append("0");
	}

	reverse(ans.begin(), ans.end());
	reverse(x.begin(), x.end());

	if ( x.length() <= ans.length() ) {
		for ( int i=0; i<x.length(); i++ ) {
			temp = (ans[i] - '0') + (x[i] - '0');
			if ( temp >= 10 ) {
				for ( int j=i; j>=0; j-- ) {
					ans[j] = '0';
					if ( j-1 > 0 ) {
						ans[j-1] = (temp%10) + '0';
					}
					else {
						ans = "1" + ans;
					}
				}
				
			}
			else {
				ans[i] = temp + '0';
			}
		}
		reverse(ans.begin(), ans.end());
		cout << ans;
	}

	if ( x.length() > ans.length() ) {
		for ( int i=0; i<ans.length(); i++ ) {
			temp = (ans[i] - '0') + (x[i] - '0');
			if ( temp >= 10 ) {
				for ( int j=i; j>=0; j-- ) {
					x[j] = '0';
					if ( j-1 > 0 ) {
						x[j-1] = (temp%10) + '0';
					}
					else {
						x = "1" + x;
					}
				}
				
			}
			else {
				x[i] = temp + '0';
			}
		}
		reverse(x.begin(), x.end());
		cout << x;
	}

	return 0;
}
