#include <bits/stdc++.h>

using namespace std;

int n; 
int cnt = 0;
int temp = 0;
int sum = 0;

int main(int argc, const char *argv[]) {
	cin >> n;

	while ( sum != n ) {
		while ( temp < n ) {
			temp = (int)pow(2, cnt++);
			cout << cnt << " ";
			cout << temp << " ";
		}
		sum += temp/2;
		cnt = 0;
		return 0;
	}

	return 0;
}
