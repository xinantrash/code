#include <bits/stdc++.h>

using namespace std;

long long m;

int main(int argc, const char *argv[]) {
	cin >> m;

    m *= 2;

	for (int i=2000;i>1;i--) {
		if (m%i==0&&i*i<=m&&(m/i-i+1)%2==0) {
            printf("%lld %lld\n",(m/i-i+1)/2,(m/i-i+1)/2+i-1);
		}
	}

    return 0;
}
