#include <bits/stdc++.h>

using namespace std;

struct data {
	string name;
	int age;
	int score;
};

int main(int argc, const char *argv[]) {
	
	int n;
	cin >> n;

	data ans[10000];

	for ( int i=0; i<n; i++ ) {
		cin >> ans[i].name >> ans[i].age >> ans[i].score;
		ans[i].score = ans[i].score + ans[i].score * 0.2;
		ans[i].age++;
	}

	for ( int i=0; i<n; i++ ) {
		if ( ans[i].score > 600 ) {
			cout << ans[i].name << " " << ans[i].age << " " << 600 << endl;
		}
		else {
			cout << ans[i].name << " " << ans[i].age << " " << ans[i].score << endl;
		}
	}

	return 0;
}
