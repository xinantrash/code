#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	string str;
	long long sum = 0;

	cin >> str;

	for ( int i=0; i<str.size(); i++ ) {
		sum += str[i] - '0';
	}

	cout << sum;

	return 0;
}
