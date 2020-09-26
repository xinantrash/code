#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	vector<int> nums;
	int n;
	int round;
	int ri[220];
	int li[220];
	int hi[220];
	
	cin >> round;
	cin >> n;

	while ( round-- ) {
		for ( int i=1; i<=n; i++ ) {
			cin >> li[i] >> ri[i] >> hi[i];
			if ( i == 1 ) {
				int sum = 2*(ri-li+hi);
				nums.push_back(sum);
			}
		}
	}

	

	return 0;
}
