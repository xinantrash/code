#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
	string s;
	int n;
	cin >> n;
	for( int i=0; i<n; i++ ) {
		cin >> s;
		int t = s.size();
		for( int j=0; j<t; j++ ) {
			if( s[j] == '0' || s[j] == '2' || s[j] == '4' || s[j] == '6' || s[j] == '9' ) {
				cout << s[j];
			}

			else if( s.substr(j, 4) == "zero" ) {
				cout << "0";
				j += 3;
			}

			else if( s.substr(j, 3) == "two" ) {
				cout << "2";
				j += 2;
			}

			else if( s.substr(j, 4) == "four" ) {
				cout << "4";
				j += 3;
			}

			else if( s.substr(j, 3) == "six" ) {
				cout << "6";
				j += 2;
			}

			else if( s.substr(j, 4) == "nine" ) {
				cout << "9";
				j += 3;
			}
		}
		cout << endl;
	}
	return 0;
}
