#include <bits/stdc++.h>

using namespace std;

long long n;
long long m;
long long sum = 0;

struct data {
	long long money;
	long long milk;
};

data a[5000];

bool cmp(data &begin, data &end) {
	return begin.money < end.money;
}

int main(int argc, const char *argv[]) {
	cin >> n >> m;
	for ( int i=0; i<m; i++ ) {
		cin >> a[i].money >> a[i].milk;
	}

	sort(a,a+m,cmp);

	for ( int i=0; i<m; i++ ) {
		if ( n >= a[i].milk ) {
			n -= a[i].milk;
			sum += a[i].milk*a[i].money;
		}

		else {
			sum += n * a[i].money;
			break;
		}
	}
	cout << sum;
	return 0;
}
