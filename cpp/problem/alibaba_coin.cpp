#include <bits/stdc++.h>

using namespace std;

struct data {
	int m;
	double v;
};

int n;
int t;
double sum = 0;
data nums[100];

bool cmp(data &begin, data &end) {
	return (begin.v/begin.m) > (end.v/end.m);
}

int main(int argc, const char *argv[]) {
	cin >> n >> t;

	for ( int i=0; i<n; i++ ) {
		cin >> nums[i].m >> nums[i].v;
	}

	sort(nums, nums+n, cmp);
	
	for ( int i=0; i<n; i++ ) {
		if ( t >= nums[i].m ) {
			t -= nums[i].m;
			sum += nums[i].v;
		}
		else {
			sum += t * ( nums[i].v / nums[i].m );
			break;
		}
	}

	printf("%.2lf", sum);

	return 0;
}
