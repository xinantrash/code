#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	int a[9] = {0};
	int ans;
	int cnt = 0;

	cin >> ans;

	for ( int i=1; i<=5; i++ ) {
		for ( int j=1; j<=5; j++ ) {
			for ( int k=1; k<=5; k++ ) {
				for ( int l=1; l<=5; l++ ) {
					for ( int o=1; o<=5; o++ ) {
						for ( int u=1; u<=5; u++ ) {
							for ( int y=1; y<=5; y++ ) {
								for ( int t=1; t<=5; t++ ) {
									for ( int r=1; r<=5; r++ ) {
										if ( i+j+k+l+o+u+y+t+r == ans ) {
											cnt++;
											if ( cnt <= 5 ) {
												cout << i << " " << j << " " << k
													<< " " << l << " " << o << " "
													<< u << " " << y << " " << t
													<< " " << r << endl;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << cnt;
	return 0;
}
