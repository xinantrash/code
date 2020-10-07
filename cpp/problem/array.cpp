// #include <bits/stdc++.h>
// #include <cstdio>
// 
// using namespace std;
// 
// 
// long long ans[20190325];
// 
// int main(int argc, const char *argv[]) {
// 
// 
// 	ans[1] = 1;
// 	ans[2] = 1;
// 	ans[3] = 1;
// 
// 	for ( int i=4; i<=20190324; i++ ) {
// 		ans[i] = (ans[i-1]+ans[i-2]+ans[i-3])%10000;
// 	}
// 
// 	printf("%lld", ans[20190324]);
// 
// 	return 0;
// }

#include <bits/stdc++.h>

using namespace std;

vector<long long> ans(20190324, 0);

int main(int argc, const char *argv[]) {
	ans[0] = 1;
	ans[1] = 1;
	ans[2] = 1;

	for ( int i=3; i<20190324; i++ ) {
		ans[i] = (ans[i-1]+ans[i-2]+ans[i-3])%10000;
	}

	cout << ans[20190323];

	return 0;
}
