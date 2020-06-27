#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
	string str;
	cin >> str;
	int temp;
	stringstream s(str);
	s >> temp;

	if ( temp >= 90 && temp <= 100 ) {
		cout << "excellent";
	}
	if ( temp >= 80 && temp < 90 ) {
		cout << "very good";
	}
	if ( temp >= 60 && temp < 80 ) {
		cout << "good";
	}
	if ( temp >= 0 && temp < 60 ) {
		cout << "not good";
	}

	return 0;
}
