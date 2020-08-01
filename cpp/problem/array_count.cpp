#include <bits/stdc++.h>

using namespace std;

long long a1;
long long a2;
long long n;
long long sum = 0;

int main(int argc, const char *argv[]) {
	cin >> a1 >> a2 >> n;

	sum = ( a1 + ( a1 + ( a2 - a1 ) * ( n - 1 ) ) ) * n / 2;

	cout << sum;

	return 0;
}
