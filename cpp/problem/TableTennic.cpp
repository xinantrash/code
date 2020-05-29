#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	int a = 0;
	int b = 0;
	char c;
	do {
		cin >> c;

		if( c == 'E' ) {
			break;
		}

		if( c == 'W' ) {
			++a;
		}

		if( c == 'L' ) {
			++b;
		}

	} while( true );
}
