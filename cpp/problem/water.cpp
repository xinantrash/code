// #include <bits/stdc++.h>
// 
// using namespace std;
// 
// int n;
// long long sum = 0;
// long long nums[1000] = {0};
// 
// int main(int argc, const char *argv[]) {
// 
// 
// 	cin >> n;
// 
// 	for ( int i=0; i<n; i++ ) {
// 		int x;
// 		cin >> x;
// 		nums[i] = x*1001+i;
// 	}
// 
// 	sort(nums,nums+n);
// 
// 	for ( int i=0; i<n; i++ ) {
// 		sum += nums[i] / 1001 * (n-i-1);
// 		cout << nums[i] % 1001 + 1 << " ";
// 	}
// 	printf("\n%.2lf", 1.0*sum/n);
// 
// 	return 0;
// }

#include <bits/stdc++.h>

using namespace std;

struct data {
	int t;
	int i;
};

int n;
int sum = 0;
data nums[1001];

bool cmp(data &begin, data &end) {
	return begin.t < end.t;
}

int main(int argc, const char *argv[]) {
	cin >> n;

	for ( int i=1; i<=n; i++ ) {
		cin >> nums[i].t;
		nums[i].i = i;
	}

	sort(nums+1, nums+n+1, cmp);

	for ( int i=1; i<=n; i++ ) {
		cout << nums[i].i << " ";
	}

	cout << endl;

	for ( int i=n; i>0; i-- ) {
		int temp = 0;
		for ( int j=i-1; j>0; j-- ) {
			temp += nums[j].t;
		}
		sum += temp;
	}

	printf("%.2lf", sum*1.0/n);

	return 0;
}
