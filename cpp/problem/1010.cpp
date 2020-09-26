#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	int n;
	vector<string> ans;
	int tag = 0;
	cin >> n;
	for ( int i=0; i<n; i++ ) {
		int cnt;
		cin >> cnt;
		int num[50] = {0};
		for ( int j=0; j<cnt; j++ ) {
			cin >> num[j];
		}

		for ( int k=1; k<cnt; k++ ) {
			if ( num[k] == num[k-1] ) {
				tag++;
			}
		}
		if ( tag == 0 ) {
			ans.push_back("YES");
		}
		else { 
			ans.push_back("NO");
		}
	}

	for ( int i=0; i<n; i++ ) {
		cout << ans[i] << endl;
	}

	return 0;
}
