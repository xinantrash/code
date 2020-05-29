#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
	int n;
	int cnt = 0;
	int c[1000];
	int m[1000];
	int e[1000];
	int total[1000];
	cin >> n;

	for( int i=0; i<n; ++i ) {
		cin >> c[i] >> m[i] >> e[i];
		total[i] += c[i] + m[i] + e[i];
	}

	for( int i=0; i<n; ++i ) {
		for( int j=i+1; j<n; ++j ) {
			if( abs(c[i]-c[j])<=5 && abs(m[i]-m[j])<=5 && abs(e[i]-e[j])<=5 && abs(total[i]-total[j])<=10  ) {
				++cnt;
			}
		}
	}
	cout << cnt;

	return 0;
}
