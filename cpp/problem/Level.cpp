#include <bits/stdc++.h>

using namespace std;

struct data {
	int num;
	int score1;
	int score2;
	double tol;
};

int main(int argc, const char *argv[]) {
	int n;
	data student;
	cin >> n;

	for( int i=0; i<n; ++i ) {
		cin >> student.num >> student.score1 >> student.score2;
		student.tol = student.score1 * 1.0 * 0.7 + student.score2 * 1.0 * 0.3;
		int total = student.score1 + student.score2;

		if( total > 140 && student.tol >= 80.0 ) {
			cout << "Excellent" << endl;
		}
		else {
			cout << "Not excellent" << endl;
		}
	}
	return 0;
}
