#include <bits/stdc++.h>

using namespace std;

struct msg {
	string name;
	int c;
	int m;
	int e;
	int tol;
};

int main(int argc, const char *argv[]) {
	msg student[1000];
	int n;
	cin >> n;

	for( int i=0; i<n; ++i ) {
		cin >> student[i].name >> student[i].c >> student[i].m >> student[i].e;
		student[i].tol = student[i].c + student[i].e + student[i].m;
	}

	for( int i=0; i<n; ++i ) {
		for( int j=i+1; j<n; ++j ) {
			if( student[i].tol < student[j].tol ) {
				msg temp = student[i];
				student[i] = student[j];
				student[j] = temp;
			}
		}
	}

	cout << student[0].name << " " << student[0].c << " " << student[0].m << " " << student[0].e;

	return 0;
}
