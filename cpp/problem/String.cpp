#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	string a;
	string b;
	int type;
	cin >> a;
	cin >> b;

	if( a.length() != b.length() ) {
		type = 1;
	}

	if( a.length() == b.length() && a == b ) {
		type = 2;
	}

	if( a.length() == b.length() && a > b ) {
		type = 3;
	}

	if( a.length() == b.length() && a < b ) {
		type = 4;
	}

	cout << type;

	return 0;
}
